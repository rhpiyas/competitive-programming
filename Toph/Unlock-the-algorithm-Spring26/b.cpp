#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N];
    for(int i=0; i<N; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<N-1-i; j++)
        {
            if(a[j] < a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout << a[N-2] << endl;


    return 0;
}