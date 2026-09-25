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

        long long s[n];

        long long mx = 0;
        long long second = 0;
        int countMax = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> s[i];

            if(s[i] > mx)
            {
                second = mx;
                mx = s[i];
                countMax = 1;
            }
            else if(s[i] == mx)
            {
                countMax++;
            }
            else if(s[i] > second)
            {
                second = s[i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(s[i] == mx && countMax == 1)
            {
                cout << s[i] - second << " ";
            }
            else
            {
                cout << s[i] - mx << " ";
            }
        }

        cout << endl;
    }

    return 0;
}