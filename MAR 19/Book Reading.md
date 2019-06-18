# [Book Reading](https://codeforces.com/contest/884/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 08/03/2019 | C++        | CodeForces | 30 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    int n, t;
    cin >> n >> t;

    int *daysWorkingTime = new int[n];
    for (int i = 0; i < n; i++)
        cin >> daysWorkingTime[i];

    for (int i = 0; i < n; i++) {
        t -= 86400 - daysWorkingTime[i];
        if (t <= 0) return cout << i + 1, 0;
    }

    return 0;

}
```
