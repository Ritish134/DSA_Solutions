#include <stdio.h>
// sort it then reverse it the  arr[k-1] !!

int main()
{
    int arr[5] = {7, 10, 4, 3, 15};
    int k = 3;
    int large = arr[0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("kth el is %d", arr[k - 1]);
}