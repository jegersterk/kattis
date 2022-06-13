#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int T, n;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> n;
        string s[n], temp;
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for(int i = 0; i < n; i++)
        {
            temp = s[i];
            for(int j = 0; j < n; j++)
            {
                if(s[j].compare("a") != 0)
                {
                    if(temp == s[j]){s[j] = "a"; }
                }
            }
        }
    }
}
