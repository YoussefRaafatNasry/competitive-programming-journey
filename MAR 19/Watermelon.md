# [Watermelon](https://codeforces.com/contest/4/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 08/03/2019 | C++        | CodeForces | 30 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    int w;
    cin >> w;

    if (w % 2 == 0 && w != 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;

}
```
