# [Petya and Countryside](https://codeforces.com/contest/66/problem/B)

 ![prefix-sum](https://img.shields.io/badge/Prefix%20Sum-blue.svg?style=flat-square)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 29/06/2019 | C++        | CodeForces | 62 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int* h = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int* l = new int[n]();
    for (int i = 1; i < n; i++) {
        if (h[i - 1] <= h[i]) l[i] = l[i - 1] + 1;
    }

    int* r = new int[n]();
    for (int i = n - 2; i >= 0; i--) {
        if (h[i + 1] <= h[i]) r[i] = r[i + 1] + 1;
    }

    int max = 1;
    for (int i = 0; i < n; i++) {
        int flow = l[i] + r[i] + 1;
        if (max < flow) max = flow;
    }

    cout << max;
    return 0;

}
```
