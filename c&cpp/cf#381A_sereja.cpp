#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int r = n - 1;
    int l = 0;
    int s1 = 0;
    int s2 = 0;
    int i = 1;
    while (l <= r)
    {
        if (i % 2 == 1)
        {
            if (arr[l] > arr[r])
            {
                s1 += arr[l];
                l++;
            }
            else
            {
                s1 += arr[r];
                r--;
            }
        }
        else
        {
            if (arr[l] > arr[r])
            {
                s2 += arr[l];
                l++;
            }
            else
            {
                s2 += arr[r];
                r--;
            }
        }
        i++;
    }
    cout << s1 << " " << s2;
}
