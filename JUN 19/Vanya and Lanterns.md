# [Vanya and Lanterns](https://codeforces.com/contest/492/problem/B)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Easy       | 08/06/2019 | Java       | CodeForces | 140 ms     | 0 KB       |

```java
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int l = scanner.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }

        Arrays.sort(a);
        double max = Math.max(a[0], l - a[n - 1]);
        for (int i = 1; i < n; i++) {
            max = Math.max(max, (a[i] - a[i - 1]) / 2.0);
        }

        System.out.println(max);

    }

}
```
