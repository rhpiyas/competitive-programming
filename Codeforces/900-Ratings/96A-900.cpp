#include<iostream>
#include<string>

using namespace std;

int main()
{
    string player;
    cin >> player;

    int zero = 0;
    int one = 0;

    bool flag = false;

    int count = 1;

    for(int i=0; i<player.size()-1; i++)
    {
        if(player[i] == player[i+1])
        {
            count++;
            if(count == 7)
            {
                flag = true;
                break;
            }
        }
        else
        {
            count = 1;
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