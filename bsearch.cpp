#include <iostream>
#include <cmath>

using namespace std;

int binarySearch(int arr[], int left, int right, int x) {

    if (right >= 1) {

        int middle = left + (right - 1) / 2;

        if (arr[middle] == x) {

            return middle;

        }

        if (arr[middle] > x) {

            return binarySearch(arr, left, middle - left, x);
        }

        return binarySearch(arr, middle + left, right, x);
    }

    return -1;

}

int main()
{

    int arr[] = {2, 3, 5, 10, 30, 50, 66, 100};

    int x = 5;

    int i = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, i - 1, x);

    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}