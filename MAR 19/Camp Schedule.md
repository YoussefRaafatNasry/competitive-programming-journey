# [Camp Schedule](https://codeforces.com/contest/1138/problem/D)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Hard       | 25/03/2019 | C++        | CodeForces |

### Solution:

```c++
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int largest_prefix_suffix(string &pattern, int length) {

    int *lps = new int[length];
    lps[0] = 0;

    int i = 1;
    int len = 0;

    while (i < length) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) len = lps[len - 1];
            else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps[length - 1];

}

int main() {

    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string s, t;
    cin >> s >> t;

    int s_zerosCount = count(s.begin(), s.end(), '0');
    int s_onesCount  = s.length() - s_zerosCount;
    int t_zerosCount = count(t.begin(), t.end(), '0');
    int t_onesCount  = t.length() - t_zerosCount;

    // If there isn't enough zeros/ones in s to alter it to t
    if (s_zerosCount < t_zerosCount || s_onesCount < t_onesCount)
        return puts(s.c_str());

    cout << t;
    s_zerosCount -= t_zerosCount;
    s_onesCount  -= t_onesCount;

    // Calculate largest prefix suffix for t then update t
    t = t.substr(largest_prefix_suffix(t, t_zerosCount + t_onesCount));
    t_zerosCount = count(t.begin(), t.end(), '0');
    t_onesCount  = t.length() - t_zerosCount;

    // Loop as long as there is enough zeros/ones in s
    while (s_zerosCount >= t_zerosCount && s_onesCount >= t_onesCount) {
        cout << t;
        s_zerosCount -= t_zerosCount;
        s_onesCount  -= t_onesCount;
    }

    // Print remaining zeros/ones
    cout << string(s_zerosCount, '0') << string(s_onesCount, '1');
    return 0;

}
```