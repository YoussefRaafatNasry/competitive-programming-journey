# [Way Too Long Words](https://codeforces.com/contest/71/problem/A)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Easy       | 09/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
#include <string>
using namespace std;

void main()
{

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

}
```