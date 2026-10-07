#include<iostream>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;

    long long total = x;
    int count = 0;

    for(int i=0; i<n; i++)
    {
        char sign;
        long long d;

        cin >> sign >> d;

        if(sign == '+')
        {
            total += d;
        }
        else
        {
            if(total >= d)
            {
                total -= d;
            }
            else
            {
                count++;
            }
        }
    }

    cout << total << " " << count << endl;


    return 0;
}