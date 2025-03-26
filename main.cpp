#include <iostream>
using namespace std;

void    sort    (int* arr, int size);

int main()
{
    int arr[] = {5, 3, 2, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}