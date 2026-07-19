#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        if(a<b)
        {
            swap(a, b);
        }

        if(b<c)
        {
            swap(b, c);
        }

        if(a<b)
        {
            swap(a, b);
        }

        int x = (a-b) + (a-c);
        int y = n-x;

        if(x > n)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(y%3==0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }


    }



    return 0;
}