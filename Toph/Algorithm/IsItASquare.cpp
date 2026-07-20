#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int A[n];
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    cout.flush();

    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout.flush();

        int x = A[l-1] * A[r-1];

        int y = sqrt(x);

        int result = y*y;

        if(x == result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }


    return 0;
}