#include <bits/stdc++.h>

#define M 1000000
using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];
void enter()
{
    for (int i = 1; i < M + 1; ++i)
        cin >> a[i];
}
int b[maxn];
void mergesort(int l, int r)
{
    if (l == r)
        return;
    else
    {
        int mid = (l + r) >> 1;
        mergesort(l, mid);
        mergesort(mid + 1, r);
        for (int i = l; i < r + 1; ++i)
            b[i] = a[i];
        merge(b + l, b + mid + 1, b + mid + 1, b + r + 1, a + l);
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
    mergesort(1, M);

    return 0;
}
