#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int w, h;
        long long n;

        cin >> w >> h;
        cin >> n;

        long long count = 1;
        bool flag = false;

        if(w%2!=0 && h%2!=0 && n==1)
        {
            cout << "YES" << endl;
        }
        else
        {

        while(w%2==0 || h%2==0)
        {
            if(w%2==0)
            {
                w = w/2;
            }
            else
            {
                h = h/2;
            }

            count = count*2;

            if(count >= n)
            {
                flag = true;
                break;
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
    }


    return 0;
}