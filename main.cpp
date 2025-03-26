#include <iostream>
using namespace std;

void    sort    (int* arr, int size);
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }   

}

int main()
{
    int arr[] = {5, 3, 2, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);  

    return 0;
}