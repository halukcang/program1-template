#include<stdlib>
#include<iostream>
#include<Vector.h>
Vector::Vector(){
	int size;
	Vector ** Planet = new Vector*[size];
	}
Vector::~Vector(){
	delete[] this->Planet;
	}
void Vector::insert(int index, Planet*p){
	if (;index<size;){
		//for(int i; i<size; i++){
			//Planet*p = new Planet[i];
		Planet.resize(size+1);//http://www.cplusplus.com/reference/list/list/resize/
		}
	Planet*p = new Planet[index];
	this ->size++;
	}
PLanet*Vector::read(int index){				
	return this->Planet*[index];
	this->size++;
	}
bool Vector::remove(int index){
	this->Planet.erase(index);
	return true;
	}
unsigned Vector::size(){
	return this->Planet.size() //size method:http://www.cplusplus.com/reference/vector/vector/size/
	}


