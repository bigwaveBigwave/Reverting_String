#include <iostream>
#include <string> 
using namespace std;

int main()
{
    string s;
    cin >> s;

    int left = 0, right = s.length() - 1;

    while (left < right)
    {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
    cout << s;

    
}