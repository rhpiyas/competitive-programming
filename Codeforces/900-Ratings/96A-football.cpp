#include<iostream>
using namespace std;

int main()
{
    string player;
    cin >> player;

    int count = 1;
    bool flag = false;

    for(int i=0; i<player.length()-1; i++)
    {
        if(player[i] == player[i+1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if(count == 7)
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}