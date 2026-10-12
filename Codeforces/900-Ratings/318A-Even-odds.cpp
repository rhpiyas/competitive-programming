#include<iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long interval = (n+1)/2;

    if(k<=interval)
    {
        cout << (k*2)-1 << endl;
    }
    else
    {
        long long rem = k-interval;

        cout << rem*2 << endl;
    }





    return 0;
}