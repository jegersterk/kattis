#include <iostream>
#include <string>

using namespace std;

int main()
{
    char a,b;
    string hey,hey2;
    cin >> hey;
    hey2.append(hey,1,hey.length()-2);
    cout << hey.insert(1,hey2);
}
