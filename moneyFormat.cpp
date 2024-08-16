#include <iostream>
#include <string>
using namespace std;

// Function to format the integer into a money format string
string moneyFormat(int n)
{
    string snum = to_string(n);
    string result;
    int count = 0;
    // Reverse the string and add commas at every third position
    for (int i = snum.size() - 1; i >= 0; i--)
    {
        result = snum[i] + result;
        count++;
        // Add comma after every third digit, except for the first and last digit
        if (count % 3 == 0 && i != 0)
        {
            result = "," + result;
        }
    }
    return result;
}

int main()
{
    // Test the moneyFormat function with various values
    cout << moneyFormat(100) << endl;        // Output: 100
    cout << moneyFormat(1000) << endl;       // Output: 1,000
    cout << moneyFormat(10000) << endl;      // Output: 10,000
    cout << moneyFormat(100000) << endl;     // Output: 100,000
    cout << moneyFormat(1000000) << endl;    // Output: 1,000,000
    cout << moneyFormat(10000000) << endl;   // Output: 10,000,000
    cout << moneyFormat(100000000) << endl;  // Output: 100,000,000
    cout << moneyFormat(1000000000) << endl; // Output: 1,000,000,000

    return 0;
}