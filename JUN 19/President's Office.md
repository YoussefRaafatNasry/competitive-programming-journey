# [President's Office](https://codeforces.com/contest/6/problem/B)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 30/06/2019 | C++        | CodeForces | 31 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

const int N = 100;
int s = 0;
char office[N][N];
char deputies[4 * N];

void add(const char& x, const char& c) {
    if (x == '.' || x == c) return;
    for (int i = 0; i < s; i++) {
        if (deputies[i] == x) return;
    }
    deputies[s++] = x;
}

int main() {

    int n, m;
    char c;
    cin >> n >> m >> c;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> office[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (office[i][j] != c) continue;
            if (i != 0)     add(office[i - 1][j], c);
            if (i != n - 1) add(office[i + 1][j], c);
            if (j != 0)     add(office[i][j - 1], c);
            if (j != m - 1) add(office[i][j + 1], c);
        }
    }

    cout << s;
    return 0;

}
```
