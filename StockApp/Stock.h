#pragma once

#include<list>

#include"Detail.h"

#define DEBUG

class Stock
{
	std::list<Detail*>details;

public:
	Stock();
	~Stock();

	void addDetail(const char* name);
	void showDetails();
};