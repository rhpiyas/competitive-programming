#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int count = 0;

        for(int i = 1; i <= 9; i++)
        {
            int num = 0;

            for(int j = 1; j <= 9; j++)
            {
                num = num * 10 + i;

                if(num <= n)
                {
                    count++;
                    cout << num << endl;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}