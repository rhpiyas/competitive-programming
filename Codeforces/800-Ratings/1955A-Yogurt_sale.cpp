#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int single = a;
        float multi = (float)b/2;

        float min = single < multi? a : multi;

        int result;

        if(n%2==0)
        {
            result = n*min;
        }
        else
        {
            result = (n-1)*min;
            result += single;
        }

        cout << result << endl;
    }


    return 0;
}