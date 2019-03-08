# [Word Capitalization](https://codeforces.com/contest/281/problem/A)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Easy       | 08/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
#include <string>
using namespace std;

void main()
{
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;
}
```