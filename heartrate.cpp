#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int b[N];
    float p[N];
    for(int i = 0; i < N; i++)
    {
        cin >> b[i] >> p[i];
    }
    cout << fixed;
    cout << setprecision(4);
    for(int i = 0; i < N; i++)
    {
        cout << 60/(p[i]/(b[i]-1)) << " " << 60*b[i]/p[i] << " " << 60/(p[i]/(b[i]+1)) << endl;
    }
}
