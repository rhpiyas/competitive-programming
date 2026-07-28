#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int sum = ('A'+'B'+'C')*3;

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                char x;
                cin >> x;

                if(x != '?')
                {
                    sum -= x;
                }
            }
        }

        cout << char(sum) << endl;


    }


    return 0;
}