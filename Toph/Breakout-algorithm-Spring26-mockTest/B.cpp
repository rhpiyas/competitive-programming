#include<iostream>
using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;

    int count;
    bool flag = false;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;

        if(x == k)
        {
            count = i+1;
            flag = true;
        }
    }

    if(flag)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}