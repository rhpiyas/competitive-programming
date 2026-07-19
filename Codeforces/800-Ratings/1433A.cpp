#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        int a = x%10;

        int num1 = (a-1)*10;

        int dig = 0;
        int num2 = 0;
        int num3 = 0;

        while(x>0)
        {
            dig++;
            x = x/10;
            num2 = num2+dig;
        }

        int result = num1+num2;

        cout << result << endl;


    }



    return 0;
}