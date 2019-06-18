# [Igor In the Museum](https://codeforces.com/contest/598/problem/D)

| Difficulty | Solved on  | Language   | Platform   | Time       | Memory     |
| :--------: | :--------: | :--------: | :--------: | :--------: | :--------: |
| Medium     | 29/03/2019 | C++        | CodeForces | 467 ms     | 58500 KB   |

```c++
#include <iostream>
using namespace std;

struct cell {

    char type;
    bool isVisited = false;
    int numberOfPictures = 0;
    cell* adjacentCells[4];
    cell* parentCell;

};

int CalculateTotalPictures(cell* currentCell, cell* grandCell) {

    // First parent cell passed to the function before
    // any recursion will be called "Grand Cell".
    // The Grand Cell contain the total number of pictures of
    // all adjacent cells and their adjacent cells etc.

    // Example:
    // ** ** ** ** ** ** **  | - The parent cell of all ".." cells
    // ** G1 .. ** G2 •• **  |   will point to Grand Cell "G1".
    // ** .. .. ** •• •• **  | - The parent cell of all "••" cells
    // ** ** ** ** ** ** **  |   will point to Grand Cell "G2".

    // Assign Grand Cell to current cell's parent cell
    currentCell->parentCell = grandCell; 

    // Mark current cell as Visited
    currentCell->isVisited = true;

    for (int i = 0; i < 4; i++) {
        if (currentCell->adjacentCells[i]->type == '.' && !currentCell->adjacentCells[i]->isVisited)
            currentCell->numberOfPictures += CalculateTotalPictures(currentCell->adjacentCells[i], grandCell);
        else if (currentCell->adjacentCells[i]->type == '*')
            currentCell->numberOfPictures++;
    }

    return currentCell->numberOfPictures;

}

int main() {

    int n, m, k;
    cin >> n >> m >> k;

    cell** museum = new cell*[n];
    for (int i = 0; i < n; i++)
        museum[i] = new cell[m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> museum[i][j].type;
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) continue;
            if (museum[i][j].type == '.') { // Connect cell to its adjacent cells
                museum[i][j].adjacentCells[0] = &museum[i - 1][j];
                museum[i][j].adjacentCells[1] = &museum[i][j + 1];
                museum[i][j].adjacentCells[2] = &museum[i + 1][j];
                museum[i][j].adjacentCells[3] = &museum[i][j - 1];
            }
        }
    }

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        if (museum[x][y].isVisited)
            cout << museum[x][y].parentCell->numberOfPictures << endl;
        else
            cout << CalculateTotalPictures(&museum[x][y], &museum[x][y]) << endl;
    }

    return 0;

}
```
