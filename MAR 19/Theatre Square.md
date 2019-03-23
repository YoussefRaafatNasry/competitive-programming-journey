# [Theatre Square](https://codeforces.com/contest/1/problem/A)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Easy       | 09/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
using namespace std;

void main() {

    long long n, m, a;
    cin >> n >> m >> a;

    long long width = n / a, height = m / a;
    if (n % a != 0) width++;
    if (m % a != 0) height++;
    cout << width * height;

}
```