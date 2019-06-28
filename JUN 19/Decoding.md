# [Decoding](https://codeforces.com/contest/746/problem/B)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 29/06/2019 | C++        | CodeForces | 31 ms      | 200 KB     |

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    string decoded;
    int shift = n % 2;
    for (int i = shift; i < n + shift; i++) {
        decoded = i % 2 ? decoded + s[i - shift] : s[i - shift] + decoded;
    }

    return puts(decoded.data());

}
```
