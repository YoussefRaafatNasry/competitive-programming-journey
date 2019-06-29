# [Kuriyama Mirai's Stones](https://codeforces.com/contest/433/problem/B)

![prefix-sum](https://img.shields.io/badge/Prefix%20Sum-blue.svg?style=flat-square)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 29/06/2019 | C++        | CodeForces | 420 ms     | 2400 KB    |

```c++
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    long long* v = new long long[n + 1]();
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    long long* s = new long long[n + 1]();
    for (int i = 1; i <= n; i++) {
        s[i] += v[i] + s[i - 1];
    }

    sort(v, v + n + 1);
    long long* u = new long long[n + 1]();
    for (int i = 1; i <= n; i++) {
        u[i] += v[i] + u[i - 1];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int type, l, r;
        cin >> type >> l >> r;
        cout << (type == 1 ? s[r] - s[l - 1] : u[r] - u[l - 1]) << endl;
    }

    return 0;

}
```
