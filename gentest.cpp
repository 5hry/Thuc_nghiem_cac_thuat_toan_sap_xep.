#include <bits/stdc++.h>

#define M 1000000
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

void test_1()
{
    ofstream fi;
    fi.open("test1.inp");
    vector<int> q(M);
    for (int i = 0; i < M; ++i)
        q[i] = (rand() * rand()) % 100000000;
    sort(q.begin(), q.end());
    for (auto i : q)
        fi << i << " ";
    fi.close();
}

void test_2()
{
    ofstream fi;
    fi.open("test2.inp");
    vector<int> q(M);
    for (int i = 0; i < M; ++i)
        q[i] = (rand() * rand()) % 100000000;
    sort(q.begin(), q.end());
    reverse(q.begin(), q.end());
    for (auto i : q)
        fi << i << " ";
    fi.close();
}

void test(int stt)
{
    ofstream fi;
    fi.open("test" + to_str(stt) + ".inp");
    for (int i = 0; i < M; ++i)
        fi << (rand() * rand()) % 100000000 << " ";
    fi.close();
}
int main()
{
    srand(int(time(0)));
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    test_1();

    cout << "completed test 1\n";\

    test_2();
    cout << "completed test 2\n";
    
    for (int i = 3; i < 11; ++i)
    {
        test(i);
        cout << "completed test " << i << "\n";
    }
    return 0;
}

