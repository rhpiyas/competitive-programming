#include<iostream>
using namespace std;


int maxSum(int x, int n)
{
    int sum = 0;

    for(int i=x; i<=n; i=i+x)
    {
        sum = sum+i;
    }
    return sum;
}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int max = 0;
        int x;

        for(int i=2; i<=n; i++)
        {
            int value = maxSum(i, n);

            if(max < value)
            {
                max = value;
                x = i;
            }
        }

        cout << x << endl;
    }


    return 0;
}