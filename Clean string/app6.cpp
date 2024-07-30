#include <iostream>
using namespace std;

//clean string
//"Mo2ha2$6ed6@_A$6h*&med"
string clean_string(string st, bool keepnms =true)
{
string result;
for(char c : st)
{
    //Uppercade Letter
    if (c  >= 'A' && c <= 'Z')
    {
        result+=c;
    }
    //Lowercase Letter
    else if (  c >= 'a' && c <='z')
    {
        result+=c;
    }
    //Digits
    else if ( keepnms && c >= '1' && c <='9' )
    {
        result+=c;
    }
    //underscore
    else if(c =='_' || c=='*' || c ==' ')
    {
        result+=c;
    }
}

return result;

}


int main()
{
    cout<<clean_string("There is a hen hen ___an@$$@d a donk***ey look! #@#$!The hen is on the donkey.his %%is a farm *&with animals.Therare ish and ducks in the water.There is a cow a&^$#@ns asheep. They eat grass.Ther is a house and a goat. Thee horse is very bigIt's very easy. Go out of my house, turn left , th&&^^$@en right  Go straight, past the park ", false)<<endl;

return 0;
}