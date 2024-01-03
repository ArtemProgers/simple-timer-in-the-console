#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#pragma warning(suppress : 4996)

using namespace std;

unsigned int h = 0, m = 0 , s = 0;

static void display() {
	system("cls");
	cout << setfill(' ') << setw(54) << "\n";
	cout << setfill(' ') << setw(53) << "------------------------\n";
	cout << setfill(' ') << setw(29);
	cout << "| " << setfill('0') << setw(2) << h << " hrs |";
	cout << setfill('0') << setw(2) << m << " min |";
	cout << setfill('0') << setw(2) << s << " sec |" << endl;
	cout << setfill(' ') << setw(53) << "------------------------\n";
}

static void timer() {
	while (true) {
		display();
		Sleep(1000);
		s++;
		if (s == 60) {
			m++;
			if (m == 60) {
				h++;
				m = 0;
			}
			s = 0;
		}
	}
}

int main() {
	timer();
	return 0;
}