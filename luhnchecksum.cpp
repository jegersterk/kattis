#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int number, n;
	//string a = "1234567890123411";
	cin >> n;
	for(int t = 0; t < n; t++){
		string a;
		cin >> a;
		//a = "1234567890123411";
		int sum = 0;
		for(int i = 0; i <= a.length()-1;i++)
		{
			number = (int)(a[a.length()-1-i]) - 48;
			//cout << number <<"<-number"<< endl;
			if(i%2<1)
			{
				sum += number;
			}
			else
			{
				if(number*2 < 10)
				{
					sum += number*2;
				}
				else
				{
					sum += (1 + (number*2)%10);
				}
			}
			//cout << sum <<"ssss"<< endl;
		}
		//cout << sum << endl;;
		if(sum%10 < 1){cout << "PASS"<<endl;}
		else{cout << "FAIL"<<endl;}
	}
	
}