#include <iostream>
using namespace std;

bool firstCaps(string st)
{
    bool allCaps =true;
    for(int i=0 ; i< st.length(); i++)
    {
        if  (i==0 && !(st[i] >='A' && st[i]<= 'Z'))
        {
            allCaps=false;
        }
        else if (st[i] ==' ' && !(st[i +1] >='A' && st[i+1]<= 'Z'))
        {
            allCaps=false;
        } 
        if(!allCaps)
        {
            return false;
        }                                                                          
    }
    return allCaps;
}

int main()
{                                                                                        
cout<< firstCaps("i My Name Is Mohamed")<< endl;
cout<< firstCaps("Hi My Name Is mohamed")<< endl;
cout<< firstCaps("Hi My Name Is Mohamed")<< endl;
return 0;
}