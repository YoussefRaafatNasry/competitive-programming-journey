# [Burglar and Matches](https://codeforces.com/contest/16/problem/B)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 29/06/2019 | C++        | CodeForces | 62 ms      | 0 KB       |

```c++
#include <iostream>
#include <algorithm>
using namespace std;

struct greater
{
    bool operator()(pair<int, int> const &a, pair<int, int> const &b) const {
        return a.first > b.first;
    }
};

int main() {

    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m;
    cin >> n >> m;

    pair<int, int>* container = new pair<int, int>[m]; // <matches, matchboxes>
    for (int i = 0; i < m; i++) {
        cin >> container[i].second >> container[i].first;
    }

    sort(container, container + m, greater());

    int total = 0;
    for (int i = 0; i < m && n > 0; i++) {
        total += container[i].second <= n ? container[i].second * container[i].first : n * container[i].first;
        n -= container[i].second;
    }

    cout << total;
    return 0;

}
```
