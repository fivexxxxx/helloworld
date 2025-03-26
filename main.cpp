#include <iostream>
using namespace std;
//修改算法为快速排序
void quick_sort(int* arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int first = low;
    int last = high;
    int key = arr[first];    /*用字表的第一个记录作为枢轴*/

    while (first < last)
    {
        while (first < last && arr[last] >= key)
        {
            --last;
        }

        arr[first] = arr[last];    /*将比第一个小的移到低端*/

        while (first < last && arr[first] <= key)
        {
            ++first;
        }
        
        arr[last] = arr[first];    /*将比第一个大的移到高端*/
    }

    arr[first] = key;    /*枢轴记录到位*/
    quick_sort(arr, low, first - 1);
    quick_sort(arr, first + 1, high);
}

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