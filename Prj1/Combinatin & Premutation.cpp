#include <iostream>
using namespace std;
int tarkib(int a, int b) {
	if (b == a || b == 0) {
		return 1;
	}
    return tarkib(a-1, b)+ tarkib(a - 1, b-1);
}
int main() {
	int n, m;
	cin >> n;
	cin >> m;
	cout << tarkib(n, m);
}