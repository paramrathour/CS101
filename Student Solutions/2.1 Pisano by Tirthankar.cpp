#include <iostream>

//Using the ideas discussed with my TA (Param Rathour)
//(I was unable to come up with the solution myself)

using namespace std;

int main() {
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		int n;
		cin >> n;

		unsigned long int f_prev = 0, f_curr = 1, f_next = 1;
		unsigned int counter = 1;

		while (f_curr != 0 || f_next != 1) {
			//The key idea is that when the two numbers become 0 and 1,
			//the entire sequence restarts
			f_prev = f_curr;
			f_curr = f_next % n;
			f_next = (f_prev + f_curr) % n;
			counter++;	
		}
		cout << counter << endl;
	}
}
