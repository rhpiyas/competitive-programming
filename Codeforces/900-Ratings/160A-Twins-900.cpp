#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    sort(a, a+n);
    reverse(a, a+n);

    int count = 0;
    int my = 0;

    for(int i=0; i<n; i++)
    {
        if(my > (total-my))
        {
            break;
        }

        my += a[i];
        count++;
    }

    cout << count << endl;

    return 0;
}