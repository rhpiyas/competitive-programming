#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector <long long> A(N);
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<long long>());
    

    long long sum = 0;

    for(int i=0; i<N; i++)
    {
        long long price = A[i] - i;

        if(price > 0)
        {
            sum = sum + price;
        }
    }

    cout << sum << endl;


    return 0;
}