# [Dasha and Very Difficult Problem](https://codeforces.com/contest/761/problem/D)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Medium     | 22/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void main() {

    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n), p(n), c(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> p[i];

    vector<int>::iterator itr;
    int previousIndex, currentIndex = -1;
    bool isSuitable = true;

    for (int i = 0; i < n; i++) {

        itr = find(p.begin(), p.end(), i + 1);
        previousIndex = currentIndex;
        currentIndex = distance(p.begin(), itr);

        i == 0 ? b[currentIndex] = l : b[currentIndex] = (c[previousIndex] + a[currentIndex]) + 1;
        if (b[currentIndex] < l) b[currentIndex] = l;
        if (b[currentIndex] > r) isSuitable = false;
        c[currentIndex] = b[currentIndex] - a[currentIndex];

    }

    if (isSuitable)
        for (int i : b) cout << i << " ";
    else
        cout << -1;

}
```