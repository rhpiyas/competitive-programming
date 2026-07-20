#include<iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    long long sum = 0;

    while(N>0)
    {
        int x = N%10;

        if(x == 2 || x==3 || x==5 || x==9)
        {
            sum = sum+x;
        }

        N = N/10;
    }

    cout << sum << endl;

    return 0;
}