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

        int arr[n];
        int count = 0;

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int result[n];

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                result[i] = arr[count];
                count++;
            }
            else
            {
                result[i] = arr[n-count];
            }
        }

        for(int i=0; i<n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }


    return 0;
}