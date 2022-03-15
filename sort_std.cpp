#include <bits/stdc++.h>
#define M 1000000
using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];
void enter()
{
    for (int i = 1; i < M + 1;++i)
        cin >> a[i];
}
int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string name = argv[1];
    freopen(("test" + name + ".inp").c_str(), "r", stdin);
    enter();
    sort(a + 1, a + M + 1);
    return 0;
}






