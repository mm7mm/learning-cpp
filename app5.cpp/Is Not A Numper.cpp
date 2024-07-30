#include <iostream>
using namespace std;
bool isNaN(string st)
{
    for(char c: st)
    {
        if (c <'0' || c >'9' )
        {
            return true;
            // cout<< "The bool is not Nummber\n";
            
        }
        
            // cout <<"The bool is Nummber\n";
        
    }
return not true;
}
int main()
{
    cout<<isNaN("256554")<<endl;
    // isNaN("256554\n");
    return 0;
}