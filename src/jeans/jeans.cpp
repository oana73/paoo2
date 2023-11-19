#include "jeans.h"
#include <iostream>
#include <cstring> 

using namespace Store; 
Jeans::Jeans() {
    id=0;
    price = 0;
    stock = false;
    color = nullptr;
    
}

Jeans::Jeans(const char* color,int id, int price, int stock){

    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);
    
    this->id=id;
    this->price = price;
    this->stock = stock;
}

Jeans::~Jeans() {

    std::cout<<"Destructor JeansID "<< this->id << std::endl;
    delete[] color;
}
    
Jeans& Jeans::operator=(const Jeans &copy){
    if(this != &copy){
    	std::cout<< "Copy assignment"<< std::endl;
    	this->id = copy.id;
        this->price = copy.price;
        this->stock = copy.stock;

        delete[] this -> color;
        this->color = new char[strlen(copy.color) + 1];
        strcpy(this->color, copy.color);

    }
    return *this;
}

Jeans& Jeans::operator=(Jeans &&move){
 if(this != &move){
 	std::cout<< "Move assignment"<< std::endl;
    	this->id = move.id;
        this->price = move.price;
        this->stock = move.stock;
	this->color = move.color;
	
	move.id=0;
	move.price=0;
	move.stock = false;
	move.color=nullptr;

    }
    return *this;
}

Jeans::Jeans(const Jeans &copy) {
    std::cout<<"Copy constructor"<<std::endl;
    this->id = copy.id;
    this->price = copy.price;
    this->stock = copy.stock;
    
    this->color = new char[strlen(copy.color) + 1];
    strcpy(this->color, copy.color);
    
}

Jeans::Jeans(Jeans &&move) {
    std::cout<<"Move constructor"<<std::endl;
    this->id = move.id;
    this->price = move.price;
    this->stock = move.stock;
    
    this->color = new char[strlen(move.color) + 1];
    strcpy(this->color, move.color);

    move.id=0;
    move.price = 0;
    move.stock = false;
    move.color = nullptr;
}

void Jeans::setColor(const char* color) {
    
    delete[] this->color;
    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);
    }
 
void Jeans::soldOut() const{
    std::cout << "This pair of jeans is sold out" << std::endl;
}

void Jeans::print() const{
    if(stock)
        std::cout<<"JeansID "<< id << " costs " << price << "$, color: "<< color << " on stock " << std::endl;
    else 
        std::cout<<"JeansID "<< id << " costs " << price << "$, color: "<< color << " 0 stock " << std::endl;
}

void Jeans::lastChance() const {
    std::cout<<"Last pair of jeans " << id << ", color : "<< color<< " at " << price/0.2 << "$" << std::endl;}
