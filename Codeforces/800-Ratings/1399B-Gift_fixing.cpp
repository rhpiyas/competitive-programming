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

        int minCandy = INT_MAX;
        int minOrange = INT_MAX;

        int candy[n];
        int orange[n];

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;

            candy[i] = x;

            if(x < minCandy)
            {
                minCandy = x;
            }
        }


        for(int i=0; i<n; i++)
        {
            int y;
            cin >> y;

            orange[i] = y;

            if(y < minOrange)
            {
                minOrange = y;
            }
        }

        long long moves = 0;

        for(int i=0; i<n; i++)
        {
            int a = candy[i] - minCandy;
            int b = orange[i] - minOrange;

            moves += max(a, b);
        }

        cout << moves << endl;
    }


    return 0;
}