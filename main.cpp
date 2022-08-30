#include<iostream>
#include"logic.h"

int main(){
	Logic obj1;
	obj1.setName();
	Logic obj2("Prasad");
	if(obj1 < obj2)
		std::cout<<"obj1 is smaller";
	else if(obj1 > obj2)
		std::cout<<"obj 1 is bigger";
	else if(obj1 == obj2)
		std::cout<<"Both are equal";
		
	return 0;
}
