# [Team](https://codeforces.com/contest/231/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 19/06/2019 | C++        | CodeForces | 62 ms      | 0 KB       |

```c++
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int problems_count = 0;
    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2)
            problems_count++;
    }

    cout << problems_count;
    return 0;

}
```
