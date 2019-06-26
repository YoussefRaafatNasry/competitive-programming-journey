# [Magnets](https://codeforces.com/contest/344/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 26/06/2019 | C++        | CodeForces | 92 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int m, previous, groups = 1;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (!i) previous = m;
        cin.ignore();
        if (previous != m) groups++;
        previous = m;
    }

    cout << groups;
    return 0;

}
```
