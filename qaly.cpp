#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin >> N;
    float q[N], y[N], sum;
    for(int i = 0; i < N; i++)
    {
        cin >> q[i];
        cin >> y[i];
    }
    for(int i = 0; i < N; i++)
    {
        sum += q[i] * y[i];
    }
    cout << fixed;
    cout << setprecision(3) << sum << endl;
}
