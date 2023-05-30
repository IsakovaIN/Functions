#include<iostream>

//Введение в функции.
void hi() { //процедурная функция, функция типа void, не возвращающая в программу никаких значений
	std::cout << "Hello world!\n";
	std::cout << "Bye world!\n";
}

int sum(int num1, int num2) {//функция типа int, возвращающая в программу целое число, являющееся суммой двух переданных в нее чисел
	//int result = num1 + num2;//необязательно, тк посчитать сумму можно через return
	return num1 + num2;
}

//Функция выводящая переданный массив arr длиною в переданное число length в консоль
//             массив   и    длина
void print_arr(int arr[], const int length) {//запомнить и записать, везде будем использовать
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}

//функция, считающая сумму всех элементов массива
int sum_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return sum;//возврат найденной суммы всех элементов массива
}

//функция выводящая все элемент массива большие чем число num
void greater_arr(int arr[], const int length, int num) {
	for (int i = 0; i < length; i++)
		if (arr[i] > num)
			std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	
	//Простые функции.
	/*hi();
	hi();
	hi();


	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;
	std::cout << sum(5, 7) << std::endl;*/
	

	//функции при работе с массивами
	/*//length можно заменить size и будет работать
	const int size = 5;
	int arr[size]{ 10, 5, 7, 0, -4 };
	std::cout << "Изначальный массив:\n";
	print_arr(arr, size); //вызов функции, выводящий массив в консоль

	std::cout << "Сумма всех элементов массива: " << sum_arr(arr, size) << std::endl;*/

	//Задача 2. Элементы большие, чем число
	std::cout << "Задача 2.\nМассив:\n";
	const int size2 = 7;
	int arr2[size2]{ 1, 2, 7, 4, 8, 10, 6 };
	print_arr(arr2, size2);
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << "Элементы большие, чем " << n << ":\n";
	greater_arr(arr2, size2, n);
	std::cout << std::endl;



	return 0;
}