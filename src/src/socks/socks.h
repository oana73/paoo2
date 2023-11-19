#pragma once
#include "clothes.h"
namespace Store{
class Socks : public Clothes{
     private: int id;
     	      int price;
     	      char* color;
     public:
        Socks(const char* color,int id, int price);
        ~Socks();
        void print() const override;
        void soldOut() const override;
        void onSale();
        };
}
