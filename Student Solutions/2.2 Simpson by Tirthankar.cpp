#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Problem 3 from the Extra Problems PDF
//Link: https://paramrathour.github.io/CS-101/Problems.pdf

long double f(long double x);

int main() {
	unsigned int n = 34; //Number of points to take

	long double a, b; //a = lower bound, b = upper bound
	a = 0.5;
	b = 1;

	long double step = (b - a) / n; //Stores the step size, which 
	//depends on the value of n

	long double ans = 0;

	for (int i = 0; i <= n; i++) {
		long double x = a + i * step;
		if (i == 0 || i == n) {
			ans += f(x);
		} else if (i % 2 == 0) {
			ans += 2 * f(x);	
		} else {
			ans += 4 * f(x);
		}
	}

	ans *= step / 3;
	
	cout << fixed << setprecision(8) << ans << endl;
}

long double f(long double x) {
	return sin(x) / x;
}
