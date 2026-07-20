#include<iostream>
using namespace std;

long long totalCount = 0;

void printArray(int arr[], int n)
{
    cout << "Array Elements : ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void marge(int arr[], int left, int mid, int right);

void margeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = left + (right-left)/2;

        margeSort(arr, left, mid);
        margeSort(arr, mid+1, right);

        marge(arr, left, mid, right);
    }
}

void marge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid+1;
    int k = 0;

    int temp[right-left+1];

    while(i <= mid && j <= right)
    {
        totalCount++;   // comparison count

        // descending order
        if(arr[i] >= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
        totalCount++;
    }

    while(j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
        totalCount++;
    }

    k = 0;

    for(i=left; i<=right; i++)
    {
        arr[i] = temp[k];
        k++;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    margeSort(arr, 0, n-1);

    cout << totalCount << endl;

    return 0;
}