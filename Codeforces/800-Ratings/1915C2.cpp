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

        long long sum = 0;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }


        int flag = sqrt(sum);

        int result = flag*flag;

        if(result == sum)
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