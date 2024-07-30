#include <iostream>
using namespace std;
void genraeLetteerswithAsciValues(char start , char end )
{
    for(int i =start ; i<=end ;i++)
    {
        cout<< char(i)<< " |    "<< i <<" |    "<<char(i + 32)<<" |    "<< i+ 32<<endl;
    }
}

int main()
{
genraeLetteerswithAsciValues('0' ,'Z');
    return 0;
}