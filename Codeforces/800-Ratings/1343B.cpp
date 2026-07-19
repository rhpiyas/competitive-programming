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

        if(n<4 || n%2!=0 || (n/2)%2!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            int even = 2;
            int odd = 1;

            int sum = 0;
            for(int i=0; i<n/2; i++)
            {
                cout << even << " ";
                sum = sum+even;
                even+=2;
            }

            int oddSum = 0;
            for(int i=0; i<n/2-1; i++)
            {
                cout << odd << " ";
                oddSum = oddSum+odd;
                odd+=2;
            }
            cout << sum - oddSum << endl;
            
        }
    }


    return 0;
}