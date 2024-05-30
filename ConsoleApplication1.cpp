#include <regex>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isComplete(const int& num) {
	int sum = 0; // переменная для суммы делителей
	// перебор делителей от 1 до корня числа num
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) { // если нашли делитель i
			sum += i; // добавляем в сумму делитель
			if (sum > num) { // если текущая сумма больше числа, 
				return false; // то сразу возвращаем false
			} // чтобы не прогонять цикл дальше и не делать лишнюю работу
		}
	}
	return sum == num; // возвращаем, совершенное ли число
}

int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) { // проход по каждому тесту
		int N, temp; cin >> N; // ввод количества чисел для текущего теста
		bool hasCompleteNumber = false;
		for (int j = 0; j < N; j++) { // ввод чисел для текущего теста
			cin >> temp;
			if (isComplete(temp)) { // если число совершенное
				cout << temp << endl; // то выводим его
				hasCompleteNumber = true; // отметим в переменной, что в данном тесте нашли хотя бы одно совершенное число
			}
		}
		if (!hasCompleteNumber) cout << -1 << endl; // Выводим -1, если не нашли хотя бы одно совершенное число в текущем тесте
	}
	cout << "nkuihoinhop";
	cout << "lihoii";
}


