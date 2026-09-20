#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        bool flag = false;

        int len = s.length();

        if(len > 1)
        {
            for(int i=0; i<len-1; i++)
            {
                if(s[i] != s[i+1])
                {
                    flag = true;
                    swap(s[i], s[i+1]);
                    break;
                }
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }



    return 0;
}