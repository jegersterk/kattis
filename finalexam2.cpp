#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;
    char c[N + 1];
    for(int i = 0; i < N; i++)
    {
        cin >> c[i];
    }
    for(int i = 0; i < N; i++)
    {
        if(c[i] == c[i+1]){sum += 1;}
    }
    cout << sum;
}
