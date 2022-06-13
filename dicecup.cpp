#include <iostream>

using namespace std;

int main()
{
    int N, M, L, U;
    cin >> N >> M;
    for(int i = min(N+1,M+1);i <= max(N+1,M+1); i++)
    {
        cout << i << endl;
    }
}
