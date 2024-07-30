#include <iostream>
#include <vector>
using namespace std;
int getMinNummper(vector<int> nums)
{
    int minNum =nums[0];
    for(int i =0 ; i< nums.size(); i++)
    {
        if(nums[i] < minNum)
        {
            minNum=nums[i];
        }
    }
    return minNum;
}

int getMaxNummper(vector<int> nums)
{
    int maxNum =nums[0];
    for(int i =0 ; i> nums.size(); i++)
    {
        if(nums[i] > maxNum)
        {
            maxNum=nums[i];
        }
    }
    return maxNum;
}


int main()
{
cout<< getMinNummper({54 ,66,98,47,2,0,-8,-655,-51,12})<<endl;
cout<< getMaxNummper({54 ,555,66,98,47,2,0,-8,-51,12})<<endl;
return 0;
}