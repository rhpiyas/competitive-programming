#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a, b;
        cin >> a >> b;

        if(a==b)
        {
            cout << 0 << endl;
        }
        else if(a<b)
        {
            long long temp = b-a;

            if(temp%2==0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            long long temp2 = a-b;

            if(temp2%2==0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }


    return 0;
}