#include <iostream>
#include <math.h>
using namespace std;
int power(int a, int b) {
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a;
	}
	return pow(a, b);
}
int main() {
	int n, m;
	cin >> n >> m;
	cout << power(n, m);
}
