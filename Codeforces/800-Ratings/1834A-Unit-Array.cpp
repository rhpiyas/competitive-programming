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

        int plus = 0;
        int minus = 0;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;

            if(x == 1)
            {
                plus++;
            }
            else
            {
                minus++;
            }
        }

        int op = 0;

        while(minus > plus)
        {
            op++;
            plus++;
            minus--;
        }

        if(minus%2!=0)
        {
            op++;
        }

        cout << op << endl;
    }


    return 0;
}