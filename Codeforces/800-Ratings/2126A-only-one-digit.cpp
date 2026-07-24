#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        int temp = x;
        int min = INT_MAX;

        while(temp!=0)
        {
            int last = temp%10;

            if(last<min)
            {
                min = last;
            }

            temp /= 10;
        }

        cout << min << endl;
    }


    return 0;
}