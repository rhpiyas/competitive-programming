#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, s, x;
        cin >> n >> s >> x;

        vector<int> a(n);

        int total = 0;

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            total += a[i];
        }

        if(total == s)
        {
            cout << "YES" << endl;
        }
        else if(total >= s)
        {
            cout << "NO" << endl;
        }
        else
        {
            int rem = s - total;

            if(rem%x==0)
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