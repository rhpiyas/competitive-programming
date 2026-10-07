#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int count = 0;

    for(int i=0; i<=1000; i++)
    {
        for(int j=0; j<=1000; j++)
        {
            int x = (i*i) + j;
            int y = i + (j*j);

            if(x==n && y==m)
            {
                count++;
            }
        }
    }

    cout << count << endl;



    return 0;
}