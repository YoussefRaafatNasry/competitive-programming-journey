# [Way Too Long Words](https://codeforces.com/contest/71/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 09/03/2019 | C++        | CodeForces | 31 ms      | 0 KB       |

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int wordLength = s.length();
        if (wordLength > 10)
            cout << s[0] << wordLength - 2 << s[wordLength - 1] << endl;
        else
            cout << s << endl;
    }

    return 0;
}
```
