#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int N[T];
    for(int i = 0; i < T; i++)
    {
        cin >> N[i];
    }
    for(int i = 0; i < T; i++)
    {
        int factorial = 1;
        for(int j = 1; j <= N[i]; j++ )
        {
            factorial *= j;
        }
        cout << factorial%10 << endl;
    }
}
