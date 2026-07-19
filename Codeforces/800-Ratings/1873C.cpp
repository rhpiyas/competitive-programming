#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int score = 0;

        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                char x;
                cin >> x;

                if(x == 'X')
                {
                    int sc = min(min(i, j), min((9-i), (9-j))) + 1;
                    score = score + sc;
                }
            }
        }

        cout << score << endl;
    }


    return 0;
}