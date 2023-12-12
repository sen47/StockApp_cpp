#include<iostream>
#include<vector>
#include<fstream>
#include<string>

#include"Stock.h"

#define DEBUG

enum Actions { EXIT, ADD, EDIT, SHOW, SAVE, LOAD };

int Menu();
int getAnswer(std::string output, const int max, const int min = 0);

int main()
{
	const std::string filePath{ "Details.txt" };;

	Stock stock;

	std::fstream file;
	file.open(filePath, std::fstream::in | std::fstream::out | std::fstream::app);

	int answer;

	do
	{
		answer = Menu();

		switch (answer)
		{
		case Actions::ADD:
		{
			std::string name;
			std::cout << "Enter name: ";
			std::cin >> name;
			stock.addDetail(name.c_str());
			break;
		}
		case Actions::EDIT:

			break;
		case Actions::SHOW:
			stock.showDetails();
			break;
		case Actions::SAVE:

			break;
		case Actions::LOAD:

			break;
		}

	} while (answer);

	file.close();

	return 0;
}

int Menu()
{
	std::string menuOptions{ "1 - add new detail"
		"\n2 - edit detail info"
		"\n3 - to show details"
		"\n4 - save details to file"
		"\n5 - load details from file"
		"\n0 - to exit" };

	return getAnswer(menuOptions, 5);
}

int getAnswer(std::string output, const int max, const int min)
{
	int answer;
	while (true)
	{
		std::cout << output
			<< "\nEnter answer: ";
		std::cin >> answer;
		if (answer >= min && answer <= max)
			return answer;
		std::cout << "Error, try again!\n";
	}
}