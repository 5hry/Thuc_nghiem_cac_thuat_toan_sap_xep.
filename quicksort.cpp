
#include <bits/stdc++.h>

#define M 1000000
using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];

void enter()
{
    for (int i = 1; i < M + 1; ++i)
    {
        cin >> a[i];
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1);     

    for (int j = low; j <= high - 1; ++j)
    {
        if (arr[j] < pivot)
        {
            ++i; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string name = argv[1];
    freopen(("test" + name + ".inp").c_str(), "r", stdin);
    enter();
    quickSort(a,1, M);

    return 0;
}
