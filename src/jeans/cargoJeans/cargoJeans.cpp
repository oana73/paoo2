#include "cargoJeans.h"
#include <iostream>
#include <cstring> 

using namespace Store; 

CargoJeans::CargoJeans(const char* color,int id, int price,int stock, int size) : Jeans(color, id, price, stock),size(size){};

CargoJeans::~CargoJeans() {
    if(this->color){
    	std::cout<<"Destructor CargoJeansID "<< this->id<< std::endl;
    }else{
    	std::cout<<"Deleted"<<std::endl;}
 }
 
void CargoJeans::print() const{
    if(stock)
        std::cout<<"JeansID "<< id << " costs " << price << "$ for size " << size << ", color"<< color << " on stock " << std::endl;
    else 
        std::cout<<"JeansID "<< id << " costs " << price << "$ for size " << size << ", color"<< color << " 0 stock " << std::endl;
}

void CargoJeans::soldOut() const{
    std::cout << "This pair of cargo jeans is sold out" << std::endl;
}

void CargoJeans::lastChance() const {
    std::cout<<"Last pair of cargo jeans " << id << ", color: "<< color<< ", for size "<< size <<" at " << price/2 << "$" << std::endl;}
    
void CargoJeans::setColor(const char* color) {
    
    delete[] this->color;
    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);
    }
