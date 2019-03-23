# [Chess For Three](https://codeforces.com/contest/893/problem/A)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Easy       | 08/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    bool match[] = { true, true, false }; // Alex, Bob, Carl

    for (int i = 0; i < n; i++) {
        int winner;
        cin >> winner;
        winner--; // make it zero-based

        if (match[winner]){
            if (winner == 0)
                swap(match[1], match[2]);
            else if (winner == 1)
                swap(match[0], match[2]);
            else
                swap(match[0], match[1]);
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;

}
```