#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long x, y, n;
        cin >> x >> y >> n;

        long long result = n/x;
        long long a = result * x;
        long long b = a+y;

        if(b > n)
        {
            a = a-x;
            b = a+y;
        }

        cout << b << endl;
    }


    return 0;
}