#include <iostream>
#include "mylib.h"





int main (){
	setlocale(LC_ALL, "rus");
	size_t size{ };
	size_t otricat{ 0 };
	size_t positive{ 0 };
	std::cout << "Введите количество элементов массива:" << std::endl;
	std::cin >> size;
	float* ptr = mytask1::IN_array(size);;
	/*mytask1::input(size); хочю сделать функцию на ввод но с ней прога не работает */
	mytask1::IN_array(size);
	mytask1::Prinе_Array(ptr, size, otricat, positive);
	
	return 0;
}