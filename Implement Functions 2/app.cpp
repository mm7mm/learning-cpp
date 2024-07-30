#include <iostream>
using namespace std;

string substring(string st, int start, int end, bool inc_end,bool countspace)
{
    string result;
for(int i =start ; inc_end ? i<=end:i <end; i++)
{
    if(!countspace && st[i] == ' ')
    {
        end++;
    }
result+= st[i];
}
    return result;
}



int main()
{
cout << substring("mohamed ahmed",0,8,false,false);

    return 0;
}