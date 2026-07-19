#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int count = 1;

    int max = 1;

    for(int i=1; i<n; i++)
    {
        if(a[i] > a[i-1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if(max < count)
        {
            max = count;
        }
    }

    cout << max << endl;



    return 0;
}