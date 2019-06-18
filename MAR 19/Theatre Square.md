# [Theatre Square](https://codeforces.com/contest/1/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 09/03/2019 | C++        | CodeForces | 31 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    long long n, m, a;
    cin >> n >> m >> a;

    long long width = n / a, height = m / a;
    if (n % a != 0) width++;
    if (m % a != 0) height++;
    cout << width * height;
    return 0;

}
```
