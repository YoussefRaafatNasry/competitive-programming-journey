# [Anton and Danik](https://codeforces.com/contest/734/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 19/06/2019 | C++        | CodeForces | 15 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a_count = 0, d_count = 0;
    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        x == 'A' ? a_count++ : d_count++;
    }

    if (a_count == d_count)
        cout << "Friendship";
    else
        cout << (a_count > d_count ? "Anton" : "Danik");

    return 0;

}
```
