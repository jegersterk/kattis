#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N, temp, temp2, sum = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> temp;
        sum += pow(temp/10,temp - temp/10*10);
    }
    cout << sum;
}
