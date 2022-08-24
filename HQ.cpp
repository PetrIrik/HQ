#include <iostream>
#include "mylib.h"





int main (){
	setlocale(LC_ALL, "rus");
	size_t size{ };
	size_t otricat{ 0 };
	size_t positive{ 0 };
	float* ptr = mytask1::IN_array(size);

	mytask1::input(size);
	mytask1::IN_array(size);
	mytask1::Prinе_Array(ptr, size, otricat, positive);
	
	return 0;
}