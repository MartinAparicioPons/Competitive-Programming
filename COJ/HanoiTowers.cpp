#include <iostream>
using namespace std;

int tot = 0;

void hanoi(int n, char s, char d, char h) {
    if (n == 1) {
        cout << "Move ring from stick " << s << " to stick " << d << ".\n";
		tot++;
    } else {
        hanoi(n - 1, s, h, d);
        cout << "Move ring from stick " << s << " to stick " << d <<  ".\n";
        hanoi(n - 1, h, d, s);
		tot++;
    }
}

int main() {
    int n;
    cin >> n;
    hanoi(n, '1', '3', '2');
	cout << "You needs " << tot << " moves.\n";
}
