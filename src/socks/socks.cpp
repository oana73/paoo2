#include "socks.h"
#include <iostream>
#include <cstring> 

using namespace Store; 

Socks::Socks(const char* color,int id, int price){
    this->id = id;
    this->price = price;

    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);
}
Socks::~Socks() {
    std::cout<<"Destructor Socks "<< this->id << std::endl;
    delete[] color;
}
void Socks::print() const{
    std::cout<<"SocksID "<< id << " color: "<< color <<", cost "<< price <<"$ "<< std::endl;
}

void Socks::soldOut() const{
    std::cout << "Always on stock! " << std::endl;
}
 
 
void Socks::onSale() {
    std::cout << "Socks on sale! " << (price)/2 << std::endl; 
}
