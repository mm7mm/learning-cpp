#include <iostream>
#include <vector>
using namespace std;

// دالة للتحقق مما إذا كانت السلسلة 'st' تبدأ بـ 'prefix'.
// يمكن تحديد ما إذا كان التحقق حسّاسًا للحالة أم لا.
bool startWith(string st, string prefix, bool caseSensitive = true) 
{
    // تحقق إذا كانت طول السلسلة 'st' أصغر من طول 'prefix'.
    // إذا كان الأمر كذلك، فليس بإمكانها أن تبدأ بـ 'prefix'.
    if (st.length() < prefix.length())
        return false;
    
    // قم بالتحقق من كل حرف في 'prefix'.
    for(int i = 0; i < prefix.length(); i++)
    {
        if (caseSensitive)
        {
            // إذا كان التحقق حسّاسًا للحالة، قارن الحروف مباشرة.
            if (st[i] != prefix[i])
                return false;
        }
        else
        {
            // إذا كان التحقق غير حساس للحالة، قم بتحويل الحروف الكبيرة إلى صغيرة.
            if(st[i] >= 'A' && st[i] <= 'Z')
            {
                st[i] += 32;  // تحويل الحرف الكبير إلى صغير.
            }
            if(prefix[i] >= 'A' && prefix[i] <= 'Z')
            {
                prefix[i] += 32;  // تحويل الحرف الكبير إلى صغير.
            }

            // بعد تحويل الحروف، قارن الحروف.
            if (st[i] != prefix[i])
                return false;
        }
    }

    // إذا تم تمرير جميع الحروف بنجاح، فالسلسلة 'st' تبدأ بـ 'prefix'.
    return true;
}

int main()
{
    cout << boolalpha;  // عرض النتائج بصيغة بوليانية (True/False) بدلاً من 1/0.

    // اختبار الدالة مع مختلف الحالات.
    cout << startWith("Hell", "Hello") << endl; // ==> False (لأن "Hell" لا تبدأ بـ "Hello")
    cout << startWith("Hello", "Hello") << endl; // ==> True (لأن "Hello" تبدأ بـ "Hello")
    cout << startWith("Warning logging messages", "warning", false) << endl; // ==> True (لأن التحقق غير حساس للحالة)
    cout << startWith("Warning logging messages", "Warning") << endl; // ==> True (لأن التحقق حسّاس للحالة)
}