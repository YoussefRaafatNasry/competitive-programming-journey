# [Wrong Subtraction](https://codeforces.com/problemset/problem/977/A)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Easy       | 02/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
using namespace std;

void main() {

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }

    cout << n;

}
```