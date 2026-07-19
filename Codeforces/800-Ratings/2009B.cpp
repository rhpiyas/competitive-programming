#include<iostream>
using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string name[n];
        for(int i=0; i<n; i++)
        {
            cin >> name[i];
        }

        int result[n];
        int count = n;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(name[i][j] == '#')
                {
                    result[--count] = j+1;
                    break;
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }


    return 0;
}