#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int s[n];

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for(int i = n; i --> 0;)
    {
        cout << s[i] << endl;
    }
}
