#include <iostream>

using namespace std;

int main()
{
    int A, I;
    cin >> A >> I;
    float f = A*I;
    while(I - 1 < f / A)
    {
        f--;
    }
    cout << f + 1;
}
