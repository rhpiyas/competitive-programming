#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << a[0] << endl;
        return 0;
    }

    long long prev2 = 0;
    long long prev1 = a[0];

    for (int i = 1; i < n; i++)
    {
        long long pick = prev2 + a[i];
        long long skip = prev1;
        long long current = max(pick, skip);

        prev2 = prev1;
        prev1 = current;
    }

    cout << prev1 << endl;

    return 0;
}