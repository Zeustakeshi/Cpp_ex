//#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];
    for (auto &i : arr)
        cin >> i;
    sort(arr, arr + 3);
    if (arr[0] + arr[1] < arr[2])
    {
        cout << (arr[0] + arr[1]) * 2 << endl;
    }
    else
    {
        cout << arr[0] + arr[1] + arr[2] << endl;
    }

    return 0;
}