#include <iostream>
#include "HQ.cpp"


namespace mytask1 {

	float* IN_array(const size_t size) {
		float* array = new float[size];
		if (array)
		{
			for (size_t i = 0; i != size; i++)
			{
				array[i] = (float)(rand() % 20000) / 100 - 100;
				std::cout << array[i] << " ";
			}
			std::cout << std::endl;
			return array;
		}
		else
		{
		
			return nullptr;
		}
	}
	void Prinе_Array(const float* array, const size_t size,size_t otricat,size_t positive) {
		for (size_t i = 0; i != size; i++)
		{
			if (array[i] < 0) {
				otricat++;
			}
			else
			{
				positive++;
			}
		}
		std::cout << "Отрицательных чисел :" << otricat << std::endl;
		std::cout << "Польлжительных чисел :" << positive << std::endl;

	}
	size_t input(size_t size) {
		std::cout << "Введите количество элементов массива:" << std::endl;
		std::cin >> size;
		return size;
	} 
}

namespace mytask2 {
	
	size_t input1(size_t a) {
		std::cout << "Введите первое значение :" << std::endl;
		std::cin >> a;
		return a;
	}
	
}

