# [Vanya and Fence](https://codeforces.com/contest/677/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 19/06/2019 | C++        | CodeForces | 31 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    int n, h;
    cin >> n >> h;

    int w = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        w += a <= h ? 1 : 2;
    }

    cout << w;
    return 0;

}
```
