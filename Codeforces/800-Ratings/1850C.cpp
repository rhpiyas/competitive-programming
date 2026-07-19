#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int target;
    
    while(t--)
    {
        char box[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                char x;
                cin >> x;

                box[i][j] = x;

                if(x!='.')
                {
                    target = j;
                }
            }
        }

        for(int i=0; i<8; i++)
        {
            if(box[i][target] != '.')
            {
                cout << box[i][target];
            }
        }

        cout << endl;
    }




    return 0;
}