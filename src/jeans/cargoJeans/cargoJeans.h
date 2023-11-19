#pragma once
#include "jeans.h"
namespace Store{
 class CargoJeans : public Jeans{
 	private: int size;

 	public: 
 	CargoJeans(const char* color,int id, int price,int stock, int size);
 	~CargoJeans();
 	
 	void setColor(const char* color);
 	void print() const override;
 	void soldOut() const override;
 	void lastChance() const override;
 };
 }

