# [Wrong Subtraction](https://codeforces.com/problemset/problem/977/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 02/03/2019 | C++        | CodeForces | 31 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }

    cout << n;
    return 0;

}
```
