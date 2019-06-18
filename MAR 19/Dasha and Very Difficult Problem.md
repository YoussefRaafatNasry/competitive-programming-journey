# [Dasha and Very Difficult Problem](https://codeforces.com/contest/761/problem/D)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Medium     | 22/03/2019 | C++        | CodeForces | 93 ms      | 1600 KB    |

```c++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int n, l, r;
    cin >> n >> l >> r;

    int *a = new int[n], *c = new int[n];
    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p[i] = make_pair( x, i );
    }

    sort(p.begin(), p.end());
    int previousIndex, currentIndex = p[0].second;

    for (int i = 0; i < n; i++) {
        previousIndex = currentIndex;
        currentIndex  = p[i].second;
        int b = c[previousIndex] + a[currentIndex] + 1;
        if (i == 0 || b < l) b = l;
        if (b > r) return puts("-1");
        c[currentIndex] = b - a[currentIndex];
    }

    for (int i = 0; i < n; i++) cout << a[i] + c[i] << " ";
    return 0;

}
```
