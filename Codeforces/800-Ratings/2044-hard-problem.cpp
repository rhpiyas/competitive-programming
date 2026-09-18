#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        long long total = 0;

        if(m>=a)
        {
            total += a;
        }
        else
        {
            total += m;
        }

        if(m>=b)
        {
            total += b;
        }
        else
        {
            total += m;
        }

        long long seat = (2*m) - total;

        if(seat >= c)
        {
            total += c;
        }
        else
        {
            total += seat;
        }

        cout << total << endl;


    }


    return 0;
}