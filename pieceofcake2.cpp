#include <iostream>

using namespace std;

int main()
{
    int n, h, v;
    int pieces[4];

    cin >> n >> h >> v;
    pieces[0] = h*v*4;;
    pieces[1] = h*(n-v)*4;
    pieces[2] = v*(n-h)*4;
    pieces[3] = (n-h)*(n-v)*4;
    cout << max(max(pieces[0], pieces[1]),max(pieces[2], pieces[3]));
}
