#include "cargoJeans.h"
#include "socks.h"
#include <iostream>
#include <string>

using namespace Store;
int main() {

    Jeans Jeans1("babyblue",1,20, true);
    Jeans Jeans2("white",2,40, true);
    Jeans1.print();
    Jeans2.print();
    std::cout<<std::endl;
    
    Jeans copyJeans1 = Jeans1;//copy constructor 
    copyJeans1.setColor("black"); 
    copyJeans1.print();
    copyJeans1.lastChance();
    std::cout<<std::endl;
    
    
    Jeans Jeans3("darkblue",3,14, false);
    Jeans Jeans4;
    Jeans4 = Jeans3;//copy assignment
    Jeans4.print();
    std::cout<<std::endl;
    
    
    Jeans Jeans5 = Jeans("gray",5 ,25, true);//move constructor
    Jeans moveJeans5(std::move(Jeans5));
    moveJeans5.print();
    std::cout<<std::endl;
    
    
    Jeans Jeans6;
    Jeans6 = Jeans("lightblue",6 ,15,true);//move assigment
    Jeans6.print();
    Jeans6.soldOut();
    std::cout<<std::endl;
    
    
    Socks socks1("pink",1,5);
    socks1.print();
    socks1.soldOut();
    std::cout << std::endl;
    
    
    CargoJeans CargoJeans("black",1,80,true,38);
    CargoJeans.print();
    CargoJeans.lastChance();
    std::cout << std::endl;
    
    
    }

