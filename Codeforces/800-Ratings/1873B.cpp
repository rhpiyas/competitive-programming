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

        int min = 10;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int minIndex;

        for(int i=0; i<n; i++)
        {
            if(a[i] < min)
            {
                min = a[i];
                minIndex = i;
            }
        }

        a[minIndex]++;

        int sum = 1;

        for(int i=0; i<n; i++)
        {
            sum = sum* a[i];
        }

        cout << sum << endl;

        
    }


    return 0;
}