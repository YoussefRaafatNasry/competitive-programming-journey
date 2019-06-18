# [Ladder](https://codeforces.com/contest/279/problem/C)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Medium     | 18/06/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
using namespace std;

// Gets the largest possible interval by squashing
// don't-care-intervals into current interval.
pair<int, int> get_interval(pair<int, int> *intervals, int start, int end) {

    pair<int, int> current = intervals[start];
    if (current.first == 0) { // current cannot be a don't care
        current = intervals[current.second + 1];
    }

    pair<int, int> next = current;
    while (current.second < end && next.first != current.first * -1) {
        current.second = next.second;
        next = intervals[current.second + 1];
    }

    return current;

}

int main() {

    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m;
    cin >> n >> m;

    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = x;
    }

    // 1st : Interval type (-1 or 0 or 1)
    // 2nd : Interval right boundary
    pair<int, int> *intervals = new pair<int, int>[n];

    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1])
            intervals[i].first = 1;    // Increasing
        else if (a[i] == a[i + 1])
            intervals[i].first = 0;    // Constant (don't care)
        else if (a[i] > a[i + 1])
            intervals[i].first = -1;   // Decreasing
    }

    intervals[n - 1].first  = intervals[n - 2].first;
    intervals[n - 1].second = n - 1;

    for (int i = n - 2; i >= 0; i--) {
        intervals[i].second = (intervals[i].first == intervals[i + 1].first) ? intervals[i + 1].second : i;
    }

    for (int i = 0; i < m; i++) {

        int l, r;
        cin >> l >> r;
        l--;
        r--;

        pair<int, int> interval_1 = get_interval(intervals, l, r);

        if (interval_1.second >= r - 1)
            cout << "Yes" << endl;
        else {
            pair<int, int> interval_2 = get_interval(intervals, interval_1.second + 1, r);
            cout << (interval_1.first == 1 && interval_2.second >= r - 1 ? "Yes" : "No") << endl;
        }

    }

    return 0;

}
```
