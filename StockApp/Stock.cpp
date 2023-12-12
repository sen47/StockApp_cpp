#include"Stock.h"

///////////////////////////////////////////////////////////////////// Public
///////////////////////////////////////////////// Ctor

Stock::Stock()
{
#ifdef DEBUG
	details.push_back(new Detail("Detail_1"));
	/*details.begin()->setInPrice(100);
	details[0].setOutPrice(150);
	details[0].setManufactured("Zavod");*/

	details.push_back(new Detail("Detail_2"));
	/*details[1].setInPrice(200);
	details[1].setOutPrice(250);
	details[1].setManufactured("Zavod");*/

	details.push_back(new Detail("Detail_3"));
	/*details[2].setInPrice(300);
	details[2].setOutPrice(450);
	details[2].setManufactured("Zavod");*/
#endif // DEBUG
}

///////////////////////////////////////////////// Dtor

Stock::~Stock()
{
	for (auto& el : details)
		delete el;
}

///////////////////////////////////////////////// Func

void Stock::addDetail(const char* name)
{
	try
	{
		details.push_back(new Detail(name));
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

void Stock::showDetails()
{
	for (const auto& el : details)
		std::cout << (*el) << std::endl;
}