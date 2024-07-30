#include <iostream>
#include <vector>
using namespace std;

int getSumofNumper(vector<int> nums, char operation='+')
{
int result=operation== '*' ?1:0;
for(int num : nums)
{
    switch(operation)
    {
        case '-': result -= num;break;
        case '+': result += num;break;
        case '*': result *= num;break;
    }

}
return result;
}

int main()
{
    cout<<getSumofNumper({10,23,25,26,25},'*');
    
    return 0;
}