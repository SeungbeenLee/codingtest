#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N)
{
    int num[101];
    fill(num, num+101, 0);

    for (int i=0; i<N; i++)
    {
        if (num[100-arr[i]] > 0)
            return (1);
        else
            num[arr[i]]++;
    }
    return (0);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << func2({1,52,48}, 3);
}