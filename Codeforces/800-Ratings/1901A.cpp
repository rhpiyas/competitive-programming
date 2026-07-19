#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int result = a[0];

        for(int i=0; i<n-1; i++)
        {
            int xyz = a[i+1] - a[i];

            result = max(result, xyz);
        }

        int y = (x - a[n-1]) * 2;

        int sss = max(result, y);
        cout << sss << endl;

    }


    return 0;
}