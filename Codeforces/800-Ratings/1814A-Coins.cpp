#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        bool flag = false;

        if(n%2==0)
        {
            flag = true;
        }
        else
        {
            if(k%2==0)
            {
                flag = false;
            }
            else
            {
                flag = true;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }


    return 0;
}