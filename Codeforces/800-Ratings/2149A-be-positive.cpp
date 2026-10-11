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

        int countNegative = 0;
        int countZero = 0;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;

            if(x==0)
            {
                countZero++;
            }
            else if(x == -1)
            {
                countNegative++;
            }
        }

        int result = 0;

        if(countNegative % 2 != 0)
        {
            result += 2;
        }

        result += countZero;

        cout << result << endl;
    }



    return 0;
}