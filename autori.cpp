#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, A;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(65 <= (int)s[i] && (int)s[i] <= 90 ){cout << s[i];}
    }
}
