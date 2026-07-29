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

        int max = 0;
        int result = 0;

        for(int i=0; i<n; i++)
        {
            int a, b;
            cin >> a >> b;

            if(a<=10)
            {
                if(max < b)
                {
                    max = b;
                    result = i+1;
                }
            }
        }

        cout << result << endl;
    }


    return 0;
}