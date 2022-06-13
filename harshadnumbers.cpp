#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>

using namespace std;

int main()
{
    int n, temp;
    int divider = 0;
    cin >> n;
    n += 1;
    do{
    divider = 0;
    n--;
    temp = n;
    while(temp - temp/10*10 > 0)
    {
        divider += temp - temp/10*10;
        temp = temp/10;
    }
    cout << "n: " << n << "divider: " << divider << endl;
    }while(n - n/divider*divider > 0);
    cout << n;
}
