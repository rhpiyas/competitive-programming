#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        string x;
        string s;

        cin >> x;
        cin >> s;

        int count = 0;

        int xyz = (m-n)+1;

        bool flag = false;

        for(int i=0; i<=6; i++)
        {
            if(x.find(s) != string::npos)
            {
                flag = true;
                break;
            }
            else
            {
                count++;
                x = x+x;
            }
            
        }

        if(flag)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }


    return 0;
}