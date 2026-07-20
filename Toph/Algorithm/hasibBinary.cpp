#include<iostream>
using namespace std;

int main()
{
    long long N, X;
    cin >> N >> X;

    long long count = 0;

    long long left, right, mid;
    left = 1;
    right = N;

    while(left < right)
    {
        mid = left + (right-left) / 2;
        count++;

        if(X > mid)
        {
            left = mid+1;
        }
        else
        {
            right = mid;
        }
    }

    cout << count << endl;


    return 0;
}