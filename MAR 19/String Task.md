# [String Task](https://codeforces.com/contest/118/problem/A)

| Difficulty | Solved on  | Language   | Platform   |
| :--------: | :--------: | :--------: | :--------: |
| Easy       | 08/03/2019 | C#         | CodeForces |

### Solution:

```c#
using System;

namespace String_Task
{
    class Program
    {
        static void Main(string[] args)
        {
            string word = Console.ReadLine();

            for (int i = 0; i < word.Length; i++)
            {
                char temp = Char.ToLower(word[i]);
                if (temp != 'a' && temp != 'e' && temp != 'i' &&
                    temp != 'o' && temp != 'u' && temp != 'y')
                    Console.Write("." + temp);
            }
        }
    }
}
```