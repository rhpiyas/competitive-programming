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

        string s;
        cin >> s;

        bool flag = false;

        for(int i=1; i<n-1; i++)
        {
            if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.')
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << 2 << endl;
        }
        else
        {
            int count = 0;

            for(int i=0; i<n; i++)
            {
                if(s[i] == '.')
                {
                    count++;
                }
            }

            cout << count << endl;
        }
    }


    return 0;
}