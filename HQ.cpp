#include <iostream>
#include "mylib.h"

#define NUM(a, b) ( a >= 0 && a < b ? "true": "folse" )

#define SIZE 10

#define SwapINT(x, y) int a = x; x = y; y = a




int main (){
	setlocale(LC_ALL, "rus");
// 1 Пункт============================= (0w0)/ =================================
	size_t size{ };
	size_t otricat{ 0 };
	size_t positive{ 0 };

	size = mytask1::input(size);

	float* ptr = mytask1::IN_array(size);

	mytask1::Prinе_Array(ptr, size, otricat, positive);
// 2 Пункт ============================ (U.U) =====================================
	size_t a{0};
	size_t b{ 20 };

	a = mytask2::input1(a);

	std::cout << NUM(a, b) << std::endl;
// 3 Пуект ============================ (@_@)" ===================================
	int array[SIZE] = {};
	std::cout << "Введите " << SIZE << "чисел для инициализации массива :" << std::endl;

	std::cout << "Введите подряд " << SIZE << " элементов массива:" << std::endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		std::cin >> array[i];
	}

	for (size_t i = 0; i < SIZE - 1; i++)
		for (size_t j = 0; j < SIZE - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				SwapINT(array[j], array[j + 1]);
			}
	

	return 0;
}