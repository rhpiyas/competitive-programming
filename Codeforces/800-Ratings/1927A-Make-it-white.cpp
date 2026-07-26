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

        int first = 0;
        int last = 0;

        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                first = i+1;
                break;
            }
        }

        for(int i=n-1; i>=0; i--)
        {
            if(s[i] == 'B')
            {
                last = i+1;
                break;
            }
        }

        int ans = (last-first) + 1;

        cout << ans << endl;
    }



    return 0;
}