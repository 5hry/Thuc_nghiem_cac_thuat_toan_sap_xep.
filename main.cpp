#include <bits/stdc++.h>
using namespace std;

string to_str(int val)
{
    string s;
    while (val)
    {
        s += char('0' + val % 10);
        val /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

void Ans(string name, vector<double> &data)
{
    cout << name << "!\n";
    clock_t start, end;
    double time_use;
    for (int i = 1; i <= 10; ++i)
    {
        cout << "Running test " << i << ":\n";
        start = clock();
        system((name + ".exe " + to_str(i)).c_str());
        end = clock();
        time_use = (double)(end - start) / CLOCKS_PER_SEC;
        cout << name << " test " << i << " : " << time_use << "\n";
        data.push_back(time_use);
    }
    cout << "Completed " << name << "\n";
}
int main()
{
    system("gentest.exe");
    cout << "HOAN THANH SINH TEST!!!!!\n";
    vector<double> d1, d2, d3, d4;
    /// check thoi gian chay heapsort
    Ans("heapsort", d1);
    /// check thoi gian chay mergesort
    Ans("mergesort", d2);
    /// check thoi gian chay quicksort
    Ans("quicksort", d3);
    /// check thoi gian chay sort_std
    Ans("sort_std", d4);

    cout << "BANG THOI GIAN SO SANH CAC THUAT TOAN SORT\n\n";
    cout << setw(12) << "thuat toan";
    for (int i = 1; i < 11; ++i)
        cout << setw(12) << "test " + to_str(i);
    cout << "\n";
    cout << setw(12) << "heapsort";
    for (int i = 0; i < 10; ++i)
        cout << setw(12) << d1[i];
    cout << "\n";

    cout << setw(12) << "mergesort";
    for (int i = 0; i < 10; ++i)
        cout << setw(12) << d2[i];
    cout << "\n";
    cout << setw(12) << "quicksort";
    for (int i = 0; i < 10; ++i)
        cout << setw(12) << d3[i];
    cout << "\n";
    cout << setw(12) << "sort_std";
    for (int i = 0; i < 10; ++i)
        cout << setw(12) << d4[i];
    cout << "\n";
    system("pause");
    return 0;
}

