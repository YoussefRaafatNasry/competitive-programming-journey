# [Beautiful Matrix](https://codeforces.com/contest/263/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 19/06/2019 | C++        | CodeForces | 62 ms      | 0 KB       |

```c++
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int one_row, one_col;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                one_row = i;
                one_col = j;
            }
        }
    }

    cout << abs(3 - one_row) + abs(3 - one_col);
    return 0;

}
```
