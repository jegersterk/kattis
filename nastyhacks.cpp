#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, r, e, c;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++)
    {
        cin >> r >> e >> c;
        if(r < e-c){s[i] = "advertise";}
        else if(r > e-c){s[i] = "do not advertise";}
        else{s[i] = "does not matter";}
    }
    for(int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
}
