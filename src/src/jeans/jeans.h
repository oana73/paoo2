#pragma once
#include "clothes.h"
namespace Store{
class Jeans  : public Clothes{
    protected: int id;
    	       int price;
    	       bool stock;
               char* color;
    public: 
        Jeans();
        Jeans(const char* color,int id, int price, int stock);
        ~Jeans();
        Jeans(const Jeans& copy);
        Jeans(Jeans&& move);
        
        Jeans& operator=(const Jeans &copy);
        Jeans& operator=(Jeans &&move);
        

	void print() const override;
        void soldOut() const override;
        void setColor(const char* color);
        virtual void lastChance() const;
};
}

