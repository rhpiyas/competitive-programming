#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        long long total = 0;

        for(int i=0; i<n; i++)
        {
            long long x;
            cin >> x;

            total += x;
        }

        long long value = sqrt(total);
        value = value*value;

        if(value == total)
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