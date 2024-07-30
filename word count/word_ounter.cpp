#include <iostream>
using namespace std;
int word_count(string st, char sep = ' ')
{
int count = 0;
bool inword =false;
    for(int i = 0 ; i < st.length() ; i++)
    {
        if (st[i] == sep)
        {
            if (inword)
            {
            count++;
            inword = false; 
            }                          
        }
        else
        {
            inword=true;
        }
    }
        if(inword)
        {
            count++;
        }
    
    
    return count;
}

    
int main()
{
cout << word_count("mohamed i am here")<< endl;
cout << word_count("mohamed i# am here IW",'                                                                            ')<< endl;
cout << word_count("mohamed i am here 3DHHD " )<< endl;
cout << word_count("mohamed i am here")<< endl;
return 0; 
}