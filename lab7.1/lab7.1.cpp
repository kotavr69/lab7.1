/*Вариант 11
Написать разные варианты программ с функциями индивидуального варианта,
в которых организовать возврат значений с использованием:
оператора return,указателя и ссылки.
Написать функцию n(x), значение которой равно 0,
если x>0, и единице во всех остальных случаях.
Вычислить для чисел A,B,C n(A)+n(B)+n(C).
*/
#include <iostream>

using namespace std;

int return_n(int x);
void pointer_n(int* x);
void link_n(int& x);

int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c, sum, num;
	while (true) {
		cout << "Введите 1 для возврат значений с return" << endl
			<< "Введите 2 для возврат значений указателем" << endl
			<< "Введите 3 для возврат значений ссылкой" << endl;
		cin >> num;
		if ((num < 1) || (num > 3)) {
			cerr << "Ошибка!!! Такого нет в списке." << endl;
			return 0;
		}
		cout << "Введите a, b, c: " << endl;
		cin >> a >> b >> c;
		cout << "Ваши числа: " << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
		if (num == 1) {
			sum = return_n(a) + return_n(b) + return_n(c);
		}
		else if (num == 2) {
			pointer_n(&a);
			pointer_n(&b);
			pointer_n(&c);
			sum = a + b + c;
		}
		else if (num == 3) {
			link_n(a);
			link_n(b);
			link_n(c);
			sum = a + b + c;
		}
		cout << "Ваши числа из функции: " << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
		cout << "Сумма: " << sum << endl << endl;
	}
	return 0;
}

int return_n(int x) {
	if (x > 0) {
		return 0;
	}
	return 1;
}

void pointer_n(int* x) {
	if (*x > 0) {
		*x = 0;
	}
	else {
		*x = 1;
	}
}

void link_n(int& x) {
	if (x > 0) {
		x = 0;
	}
	else {
		x = 1;
	}
}
