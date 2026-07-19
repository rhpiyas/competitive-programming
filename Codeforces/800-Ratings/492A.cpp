#include<iostream>
using namespace std;


int main()
{
    int n; cin >> n;

    int sum = 0;
    int count = 0;
    int total = 0;

    for(int i=1; i<=n; i++)
    {
        sum = sum+i;

        total = total + sum;
        if(total > n)
        {
            break;
        }
        count++;
    }

    cout << count << endl;


    return 0;
}