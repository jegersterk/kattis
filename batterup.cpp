#include <iostream>

using namespace std;

int main()
{
    int N, temp, sum = 0, n = 0;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        if(temp >= 0){sum += temp; n++;}
    }
    cout << (double)sum/n;
}
