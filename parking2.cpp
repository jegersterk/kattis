#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n[t];
    int sum[t] = {0};
    for(int i = 0; i < t; i++)
    {
        cin >> n[i];
        int x[n[i]];
        for(int j = 0; j < n[i]; j++)
        {
            cin >> x[j];
        }
        sort(x,x+n[i]);
        for(int j = 1; j < n[i]; j++)
        {
            sum[i] += abs(x[j] - x[j-1]);
        }
    }
    for(int i = 0; i < t; i++)
    {
        cout << 2*sum[i] << endl;
    }
}
