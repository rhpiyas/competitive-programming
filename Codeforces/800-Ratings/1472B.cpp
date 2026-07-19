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

    int one = 0;
    int two = 0;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;

        if(x == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    int total = one + (two*2);

    if(total%2!=0)
    {
        cout << "NO" << endl;
    }
    else
    {
        if(one == 0 && two%2==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}


    return 0;
}