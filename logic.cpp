#include"logic.h"
#include<iostream>
#include<cstring>

void Logic :: setName(){
	std::cin>>name;
}

Logic :: Logic(){
	int size;
	std::cout<<"Enter size: ";
	std::cin>>size;
	name = new char[size];
}

Logic :: Logic(const char* str){
	name= new char[strlen(str)+1];
	strcpy(name,str);
}

bool Logic :: operator<(const Logic& obj){
	if(strcmp(name,obj.name) < 0)
		return true;
	else 
		return false;
}

bool Logic :: operator>(const Logic& obj){
	if(strcmp(name,obj.name) > 0)
		return true;
	else 
		return false;
}

bool Logic :: operator==(const Logic& obj){
	if(strcmp(name,obj.name) == 0)
		return true;
	else 
		return false;
}

Logic :: ~Logic(){
	delete name;
}


