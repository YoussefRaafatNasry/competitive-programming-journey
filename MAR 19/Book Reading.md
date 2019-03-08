# [Book Reading](https://codeforces.com/contest/884/problem/A)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Easy       | 08/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
using namespace std;

void main()
{

    int n, t;
    cin >> n >> t;

    int *daysWorkingTime = new int[n];
    for (int i = 0; i < n; i++)
        cin >> daysWorkingTime[i];

    for (int i = 0; i < n; i++) {
        t -= 86400 - daysWorkingTime[i];
        if (t <= 0) {
            cout << i + 1;
            break;
        }
    }

}
```