#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string t;
    cin >> t;

    int count = 1;

    int len = t.length();
    int x = 0;

    for(int i=0; i<len; i++)
    {
        if(s[x] == t[i])
        {
            count++;
            x++;
        }
    }

    cout << count << endl;



    return 0;
}