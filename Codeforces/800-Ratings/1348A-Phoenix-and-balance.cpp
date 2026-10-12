#include<iostream>

#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int result = 0;

        for(int i=1; i<=n/2; i++)
        {
            result = result + pow(2, i);
        }

        cout << result << endl;
    }


    return 0;
}