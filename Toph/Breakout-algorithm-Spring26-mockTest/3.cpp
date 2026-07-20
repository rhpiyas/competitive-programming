#include<iostream>
using namespace std;

int coun = 0;

void marge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid+1;
    int k = 0;
    int temp[right-left +1];

    while(i<=mid && j<=right)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
        coun++;
    }

    while(i<=mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
        coun++;
    }

    while(j<=right)
    {
        temp[k] = arr[j];
        k++;
        j++;
        coun++;
    }
}



void margeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = left+ (right-left) / 2;

        margeSort(arr, left, mid);
        margeSort(arr, mid+1, right);

        marge(arr, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    margeSort(A, 0, n-1);

    cout << coun << endl;



    return 0;
}