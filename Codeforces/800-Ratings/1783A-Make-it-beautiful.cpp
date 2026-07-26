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

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;

        for(int i=0; i<n-1; i++)
        {
            if(sum+a[i] == a[i+1])
            {
                swap(a[i], a[i+1]);
            }

            sum += a[i];
        }

        bool flag = true;

        int sum2 = 0;
        for(int i=0; i<n-1; i++)
        {
            if(sum2+a[i] == a[i+1])
            {
                flag = false;
                break;
            }

            sum2 += a[i];
        }

        if(!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for(int i=0; i<n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }



    return 0;
}