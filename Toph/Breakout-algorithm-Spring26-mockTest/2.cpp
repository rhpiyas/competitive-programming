#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    int count = 0;

    for(int i=0; i<n-1; i++)
    {
        bool flag = false;

        for(int j=0; j<n-1-i; j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                count++;
                flag = true;
            }
        }

        if(!flag)
        {
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << count << endl;


    return 0;
}