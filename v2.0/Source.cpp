#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//Ввывод массива
void showArr(int arr[], int size) {
	cout << "[";
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]";
}
//Меняет местами четный и не четный элемент массива
void z1_2(int arr[],int length) {
	for (int i = 0; i < length; i++) {
		if (*(arr + i) % 2 == 0)
			swap(*(arr + i), *(arr + i - 1));
	}
}
//Функция возведения в степень числа
void func(int*num1, int num) {
	int n = 1;
	for (int i = 0; i < num; i++) 
		n *= *num1;
		  *num1=n;
}


int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//Задача 1
	cout << "Задача 1\n";
	int z1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Изначальный массив:\n";
	showArr(z1, 10);
	cout << endl;
	z1_2(z1, 10);
	cout << "Итоговый массив:\n";
	showArr(z1, 10);
	cout << endl;
	//Задача 2
	cout << "Задача 2\n";
	int n = 10;
	func(&n, 3);
	cout << n << endl;




	return 0;

}