#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;
	cout << "Введите размеры матрица m и n(от 2 до 10):";
	cin >> m >> n ;
	
	if (m < 2 || m > 10 || n < 2 || n > 10) {
		cout << "Неверный размер матрицы";
		return 0;
	}
	double matrix[10][10]{};
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	double minznach = matrix[0][0];
	for (int i = 0; i < m; i++) {
		if (matrix[i][0] > minznach)
			minznach = matrix[i][0];
	}
	for (int j = 0; j < n; j++) {
		double maxznach = matrix[0][j];
		for (int i = 0; i < m; i++) {
			if (matrix[i][j] > maxznach) 
				maxznach = matrix[i][j];
			
		}
		if (minznach > maxznach)
			minznach = maxznach;
	}
	cout << "Минимальное значение из максимальных значений столбцов:" << minznach << endl;
}