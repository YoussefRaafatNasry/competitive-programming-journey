# [Watermelon](https://codeforces.com/contest/4/problem/A)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Easy       | 08/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
using namespace std;

void main() {

    int w;
    cin >> w;

    if (w % 2 == 0 && w != 2)
        cout << "YES";
    else
        cout << "NO";

}
```