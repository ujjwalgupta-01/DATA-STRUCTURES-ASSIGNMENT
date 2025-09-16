#include <iostream>
using namespace std;

int findNumber(int arr[], int n)
{
    int left=0;
   int right=n-1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == mid + 1)
        {
            left=mid + 1;
        }
        else
        {
            right=mid - 1;
        }
    }
    return left + 1;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int missing = findNumber(arr, n);
    cout << "Missing number is : "<<missing<< endl;

    return 0;
}
