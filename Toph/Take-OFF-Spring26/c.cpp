#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int L, W, R;
    cin >> L >> W >> R;

    double total_area = L * W;
    double dog_area = M_PI * R * R / 4.0;

    double safe_area = total_area - dog_area;

    cout << fixed << setprecision(10) << safe_area << '\n';



    return 0;
}