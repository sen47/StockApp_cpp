#include"Detail.h"

//////////////////////////////////////////////////////////////////////////// Private
////////////////////////////////////////////// Func

void Detail::checkSizeAndWrite(const char* intput, char* internal)
{
	int newNameSize(std::strlen(intput));
	if (newNameSize <= MAX_STRING_SIZE)
		for (int i = 0; i < newNameSize; ++i)
			internal[i] = intput[i];
	else
		throw(std::exception("String it too long, max length is 25 chars"));
}

//////////////////////////////////////////////////////////////////////////// Friend func

std::ostream& operator<<(std::ostream& os, const Detail& detail)
{
	os << "Name: " << detail.m_name
		<< "\tManufactured: " << detail.m_manufactured
		<< "\tinPrice: " << detail.m_inPrice
		<< "\toutPrice: " << detail.m_outPrice;

	return os;
}

//////////////////////////////////////////////////////////////////////////// Public
////////////////////////////////////////////// Ctor

Detail::Detail(const char* name)
	:m_name{ '\0' }, m_manufactured{ '\0' }, m_inPrice(0), m_outPrice(0)
{
	checkSizeAndWrite(name, m_name);
}


///////////////////////////////////////////// Func

void Detail::setInPrice(const float price) { m_inPrice = price; }

void Detail::setOutPrice(const float price) { m_outPrice = price; }

void Detail::setManufactured(const char* name) { checkSizeAndWrite(name, m_manufactured); }
