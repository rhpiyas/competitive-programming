#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s1;
        cin >> s1;

        string s2;
        cin >> s2;

        bool flag = true;

        for(int i=0; i<n; i++)
        {
            if(s1[i] == 'R')
            {
                if(s2[i] != 'R')
                {
                    flag = false;
                    break;
                }
            }
            
            if(s2[i] == 'R')
            {
                if(s1[i] != 'R')
                {
                    flag = false;
                    break;
                }
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }


    return 0;
}