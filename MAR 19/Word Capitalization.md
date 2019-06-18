# [Word Capitalization](https://codeforces.com/contest/281/problem/A)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 08/03/2019 | C++        | CodeForces | 60 ms      | 0 KB       |

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;
    return 0;

}
```
