#include <iostream>

using namespace std;

int ackermann(int m, int n) {
	if (m == 0) return n + 1;
	else if (n == 0) return ackermann(m - 1, 1);
	else {
		return ackermann(m - 1, ackermann(m, n - 1));
	}
}

int main() {
	int k;
	cin >> k;

	for (int i = 0; i < k; i++) {
		int m, n;
		cin >> m >> n;
		
		cout << ackermann(m, n) << endl;
	}
}
