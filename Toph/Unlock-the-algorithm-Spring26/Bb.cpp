#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }

    bool flag = false;

    for(int i=0; i<N-1; i++)
    {
        if(A[i] == A[i+1])
        {
            flag = true;
        }
    }

    if(flag)
    {
        cout << "Cheater detected" << endl;
    }
    else
    {
        cout << "All clear" << endl;
    }


    return 0;
}