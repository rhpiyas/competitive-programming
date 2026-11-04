#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        if(n==1)
        {
            cout << 0 << endl;
        }
        else if(n==2)
        {
            cout << -1 << endl;
        }
        else
        {
            long long count = 0;

            while(n>1)
            {
                if(n%6==0)
                {
                    n = n/6;
                    count++;
                }
                else
                {
                    n = n*2;
                    count++;
                }

                if(n<10)
                {
                    if((n*2)%6!=0)
                    {
                        break;
                    }
                }
            }

            if(n==1)
            {
                cout << count << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }


    return 0;
}