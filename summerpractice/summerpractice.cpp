/*
Файл: summerpractice.cpp
Летняя практика 
Автор: Быков М.М.
Задание: Разработать программу, которая выводит Вашу фамилию и имя с помощью кодов
таблицы ASCII для кодировки 866.
Дата создания: 04.05.21
*/
//подключение библиотек
#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() { // основная программа
	int choice; // ввод choice
	srand(time(0)); // рандом
	printf("This program generates an array of 1000 random numbers and finds the largest number of consecutive zeros in it.");
	puts("Do you want to continue?\n1 - YES;\n2 - NO (The program will be stopped).");
	printf("your choice?: "); // пригл ко вводу
	scanf_s("%d", &choice); // ввод выбора3
	switch (choice) { // оператор выбора 
	case 1: random_arr(); // в первом случае вызываем функцию рандомной генерации массива из 1000 элементов.
		break;
	case 2: printf("You have chosen to stop the program."); // во втором случае говорим пользователю, что он решил завершить программу.
		return 0; // завершаем программу
		break;
	default: printf("You have chosen the wrong option."); // в третьем случае говорим пользователю, что он выбрал неверный вариант.
		return 0; // так же завершаем программу
		break;
	}
	puts(""); // переход на новую строку
	printf("most consecutive zeros = %d ", zerocnt()); // вывод ф-ции zerocnt, которая подсчитает максимальное кол-во идущих подряд нулей
	return 0; // завершение программы 
}
