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

    int swapCount = 0;

    for(int i=0; i<n-1; i++)
    {
        bool swap = false;

        for(int j=0; j<n-i-2; j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                swapCount++;
                swap = true;
            }
        }

        if(!swap)
        {
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << swapCount << endl;
}