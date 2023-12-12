#pragma once

#include<cstring>
#include<exception>
#include<iostream>

class Detail
{
	friend std::ostream& operator<<(std::ostream& os, const Detail& detail);
	void checkSizeAndWrite(const char* intput, char* internal);

	constexpr static int MAX_STRING_SIZE = 25;
	char m_name[MAX_STRING_SIZE + 1], m_manufactured[MAX_STRING_SIZE + 1];
	float m_inPrice,m_outPrice;

public:

	Detail(const char* name);

	void setInPrice(const float price);
	void setOutPrice(const float price);
	void setManufactured(const char* name);
};