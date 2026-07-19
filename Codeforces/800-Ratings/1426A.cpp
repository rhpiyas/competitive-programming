#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        if(n<=2)
        {
            cout << 1 << endl;
        }
        else
        {
            int aa = n-2;
            int bb= aa+ (x-1);

            int cc = bb/x;

            int result = cc+1;

            cout << result << endl;
        }
    }


    return 0;
}