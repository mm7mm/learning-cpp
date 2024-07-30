#include <iostream>
using namespace std;
int parse_int(string st)
{
    int result=0;
    for(char c : st)
    {
        if (c >='0'  && c<='9')
        {
            result=result *10+(c - '0');
        }
        else
        {
            break;
        }
    }
    return result;

}

int main()
{
    cout<<parse_int("Hello");
    return 0;
}