#include<iostream>
using namespace std;

bool isPrime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            return false;
            break;
        }
    }
    return true;
}

int next_prime(int x)
{
    while(true)
    {
        if(isPrime(x+1))
        {
            return x+1;
        }
        else
        {
            x++;
        }
    }
}


int main()
{
    int n, m;
    cin >> n >> m;

    int result = next_prime(n);

    if(result == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}