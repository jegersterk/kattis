#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int count_k(string s)
{
    int k = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '?'){k++;}
    }
    return k;
}

string * binary(int k) // AAAAAAAAAAAA
{
    string * s = new string[2^k];
    for(int i = 0; i < 2^k; i++)
    {
        int temp = 0;
        string tempstr;
        for(int j = 0; j < k; j++)
        {
            cout << "ett";
            temp = 2^(k-1-j);
            tempstr = to_string(i == i%temp);
            cout << "two";
            s[i][j] = tempstr[0];
            cout << "three";
            cout << s[i];
        }
    }
    return s;
}

string replace_questionMark(string s, string nr)
{
    if(count_k(s) != nr.length())
    {
        cout << "ERROR! amount of ? does not match length of nr";
        exit(0);
    }

    int number = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '?')
        {
            s[i] = nr[number];
            number++;
        }
    }
    return s;
}

int inv(string nr)
{
    int inversions = 0;
    for(int i = nr.length(); i --> 0;)
    {
        if(nr[i] == '1')
        {
            for(int j = i; j < nr.length(); j++ )
            {
                if(nr[j] == '0')
                {
                    inversions++;
                }
            }
        }
    }
    return inversions;
}

int main()
{
    string s = "010??101?";
    cout << count_k(s);
//    for(int i = 0; i < pow(2,count_k(s)); i++)
//    {
//        cout << binary(i,count_k(s)) << endl;
//    }
//
//    int k = count_k(s)
//    for(int i = 0; i < pow(2,k); i++)
//    {
//        temp = binary(i);
//    }



}
