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

        int total = 0;
        int even = 0;
        int odd = 0;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;

            total += x;

            if(x%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(total%2!=0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(even>0 && odd>0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }


    return 0;
}