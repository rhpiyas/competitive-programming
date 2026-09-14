#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        long long a, b, n;
        cin >> a >> b >> n;

        long long op = 0;

        while(a<=n && b<=n)
        {
            if(a<b)
            {
                a = b+a;
            }
            else
            {
                b = a+b;
            }

            op++;
        }

        cout << op << endl;
    }



    return 0;
}