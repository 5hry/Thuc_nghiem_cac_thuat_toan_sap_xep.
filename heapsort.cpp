#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e6 + 5;
int arr[maxn];
#define M 1000000
void enter()
{
    for (int i = 1; i < M + 1; ++i)
        cin >> arr[i];
}
void heapify(int arr[], int n, int i)
{
    int max = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[max])
        max = l;

    if (r < n && arr[r] > arr[max])
        max = r;

    if (max != i)
    {
        swap(arr[i], arr[max]);

        heapify(arr, n, max);
    }
}

void heapSort()
{

    for (int i = M / 2 - 1; i > 0; --i)
        heapify(arr, M, i);

    for (int i = M - 1; i > 1; --i)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void print()
{
    for (int i = 1; i < 10000; ++i)
    {
        cout << arr[i] << " ";
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
    heapSort();
    return 0;
}
