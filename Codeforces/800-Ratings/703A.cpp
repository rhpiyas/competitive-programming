#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mis = 0;
    int cris = 0;

    for(int i=0; i<n; i++)
    {
        int m, c;
        cin >> m >> c;

        if(m>c)
        {
            mis++;
        }
        else if(c>m)
        {
            cris++;
        }
    }

    if(mis>cris)
    {
        cout << "Mishka" << endl;
    }
    else if(cris>mis)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }


    return 0;
}