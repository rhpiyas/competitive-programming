#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int x = (abs(a-b));

        int dif;

        if(x%2==0)
        {
            dif = x/2;
        }
        else
        {
            dif = (x/2)+1;
        }



        int ans = (dif+(c-1))/c;

        cout << ans << endl;

    }


    return 0;
}