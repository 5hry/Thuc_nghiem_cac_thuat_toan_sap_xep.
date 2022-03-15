
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
    int pivot = arr[high]; // pivot
    int i = (low - 1);     // Index of smaller element and indicates the right position of pivot found so far

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
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