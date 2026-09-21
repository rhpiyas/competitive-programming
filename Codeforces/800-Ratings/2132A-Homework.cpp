#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string a;
        cin >> a;

        int m;
        cin >> m;

        string b, c;
        cin >> b;
        cin >> c;

        for(int i=0; i<m; i++)
        {
            if(c[i] == 'D')
            {
                a.push_back(b[i]);
            }
            else
            { 
                a = b[i] + a;
            }
        }

        cout << a << endl;


    }

    


    return 0;
}