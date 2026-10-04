#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int op = 0;

        int x = 0;

        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                for(int x=i; x<k; x++)
                {
                    s[x] = 'W';
                }
                op++;
                i = i+(k-1);
            }
        }

        cout << op << endl;
    }



    return 0;
}