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
        int x=0;
        int y=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='U')
            {
                x++;
            }
            else if(s[i]=='D')
            {
                x--;
            }
            else if(s[i]=='L')
            {
                y--;
            }
            else
            {
                y++;
            }

            if(x==1 && y==1)
            {
                flag = true;
                break;
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