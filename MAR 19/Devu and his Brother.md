# [Devu and his Brother](https://codeforces.com/contest/439/problem/D)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Medium     | 15/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
vector<int> b;

long long f(int k) {

    // Function f(k) = cost needed to make vector a elements >= k
    //               + cost needed to make vector b elements <= k

    long long total_cost = 0;

    for (int i = 0; i < a.size(); i++)
        if (a[i] < k) total_cost += abs(k - a[i]);

    for (int i = 0; i < b.size(); i++)
        if (b[i] > k) total_cost += abs(k - b[i]);

    return total_cost;

}

long long ternarySearch(int start, int end) {

    int left = start;
    int right = end;

    while (right - left > 3) {

        int interval_length = right - left;
        int mid1 = left  + interval_length / 3;
        int mid2 = right - interval_length / 3;

        if (f(mid1) < f(mid2))
            right = mid2;
        else
            left = mid1;

    }

    long long answer = f(left);

    for (int i = left; i <= right; i++)
        if (answer > f(i))
            answer = f(i);

    return answer;

}

void main() {

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        a.push_back(number);
    }

    for (int i = 0; i < m; i++) {
        int number;
        cin >> number;
        b.push_back(number);
    }

    cout << ternarySearch(1, 1e9);

}
```