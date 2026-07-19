#include<iostream>
using namespace std;

bool is_prime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if(n%2==0)
    {
        int x = n-4;
        int y = 4;

        cout << y << " " << x << endl;
    }
    else
    {
        int x = 4;
        
        while(true)
        {
            int y = n-x;
            

            if(!is_prime(x) && !is_prime(y))
            {
                cout << x << " " << y << endl;
                break;
            }
            else
            {
                x++;
            }
        }

    }


    return 0;
}