#include <iostream>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;

	int *scores = new int[n];
	for (int i = 0; i < n; i++)
		cin >> scores[i];

	int winnerScore = scores[k - 1];
	int winners = 0;
	for (int i = 0; i < n; i++) {
		if (scores[i] >= winnerScore && scores[i] > 0)
			winners++;
	}

	cout << winners;

	return 0;
}