#include<iostream>
#include<vector> 

using namespace std;

int main()
{
    int N;
    cin >> N;

    int min = 100001;

    int A[N];
    for(int i=0; i<N; i++)
    {
        int x;
        cin >> x;

        A[i] = abs(x);

        if(A[i] < min)
        {
            min = A[i];
        }
    }

    cout << min << endl;

    




    return 0;
}