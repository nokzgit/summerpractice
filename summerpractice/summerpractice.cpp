/*
����: summerpractice.cpp
������ �������� 
�����: ����� �.�.
�������: ����������� ���������, ������� ������� ���� ������� � ��� � ������� �����
������� ASCII ��� ��������� 866.
���� ��������: 04.05.21
*/
//����������� ���������
#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() { // �������� ���������
	int choice; // ���� choice
	srand(time(0)); // ������
	printf("This program generates an array of 1000 random numbers and finds the largest number of consecutive zeros in it.");
	puts("Do you want to continue?\n1 - YES;\n2 - NO (The program will be stopped).");
	printf("your choice?: "); // ����� �� �����
	scanf_s("%d", &choice); // ���� ������3
	switch (choice) { // �������� ������ 
	case 1: random_arr(); // � ������ ������ �������� ������� ��������� ��������� ������� �� 1000 ���������.
		break;
	case 2: printf("You have chosen to stop the program."); // �� ������ ������ ������� ������������, ��� �� ����� ��������� ���������.
		return 0; // ��������� ���������
		break;
	default: printf("You have chosen the wrong option."); // � ������� ������ ������� ������������, ��� �� ������ �������� �������.
		return 0; // ��� �� ��������� ���������
		break;
	}
	puts(""); // ������� �� ����� ������
	printf("most consecutive zeros = %d ", zerocnt()); // ����� �-��� zerocnt, ������� ���������� ������������ ���-�� ������ ������ �����
	return 0; // ���������� ��������� 
}
