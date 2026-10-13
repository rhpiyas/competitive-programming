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

    for(int j=0; j<n; j++)
    {
        for(int i=n-1; i>0; i--)
        {
            if(a[i] < a[i-1])
            {
                int dif = a[i-1] - a[i];
                a[i] = a[i] + dif;
                a[i-1] = a[i-1] - dif;
            }
        }
    }
    

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


    return 0;
}