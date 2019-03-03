# [Next Round](https://codeforces.com/problemset/problem/158/A)

| Difficulty | Solved on  | Language   |
| :--------: | :--------: | :--------: |
| Easy       | 03/03/2019 | c++        |

### Solution:

```c++
#include <iostream>
using namespace std;

void main() {

    int n, k;
    cin >> n >> k;

    int *scores = new int[n];
    for (int i = 0; i < n; i++)
        cin >> scores[i];

    int winners = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= scores[k - 1] && scores[i] > 0)
            winners++;
    }

    cout << winners;

}
```