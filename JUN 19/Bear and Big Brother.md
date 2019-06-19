# [Bear and Big Brother](https://codeforces.com/contest/791/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 19/06/2019 | C++        | CodeForces | 31 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    int years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years;
    return 0;

}
```
