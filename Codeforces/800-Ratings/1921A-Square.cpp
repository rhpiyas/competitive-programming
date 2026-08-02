#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int X[4];
        int Y[4];

        for(int i=0; i<4; i++)
        {
            int x, y;
            cin >> x >> y;

            X[i] = x;
            Y[i] = y;
        }

        int a, b;

        if(X[0] != X[1])
        {
            a = X[1] - X[0];
        }
        else
        {
            a = Y[1] - Y[0];
        }

        b = a*a;

        cout << b << endl;
    }



    return 0;
}