#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int T; cin >> T;

    while(T--)
    {
        int N;
        cin >> N;

        int A[N];
        for(int i=0; i<N; i++)
        {
            cin >> A[i];
        }

        for(int i=0; i<N-1; i++)
        {
            for(int j=0; j<N-1-i; j++)
            {
                if(A[j] > A[j+1])
                {
                    swap(A[j], A[j+1]);
                }
            }
        }

        int a = A[0];
        int b = A[N-1];

        cout << b-a << endl;


    }


    return 0;
}