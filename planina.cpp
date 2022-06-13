#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    unsigned int N, ans = 3;
    cin >> N;
    for(int i = 1; i < N; i++)
    {
        ans = ans*2-1;
    }
    cout << fixed;
    cout << setprecision(0);
    cout << pow(ans,2);

}
