#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s);
};


string Solution::longestPalindrome(string s) {
    string result = s;
    return result;
}

int main()
{
    Solution solution;
    string str("abcba");
    cout << "The input string is: ";
    for (int i=0; i<str.length(); ++i)
    {
        cout << str[i];
    }
    cout << endl;
    string a = solution.longestPalindrome(str);
    cout << "The length of the longest non-repeating character substring is: " << a << endl;
    return 0;
}

