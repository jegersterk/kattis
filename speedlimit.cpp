#include <iostream>

using namespace std;

int main()
{
	while(1)
	{
	int n, sum = 0;
	cin >> n;
	int s[n], t[n];
	if(!(1 <= n && n <= 10)){return 0;}
	
	for(int i = 0; i < n; i++)
	{
		cin >> s[i] >> t[i];
	}
	for(int i = 1; i < n; i++)
	{
		sum += (t[i]-t[i-1])*s[i];
	}
	
	cout << sum + s[0]*t[0] << " miles" << endl;
	}
}