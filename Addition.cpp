#include "Addition.h"


using namespace std;


int ChooseActionMenu(std::vector<std::string>& menu, bool with_exit)
{
	if (menu.size() < 1)
		return -1;

	int i = 1;
	for (auto& s : menu)
		cout << std::format("{}. {}", i++, s) << "\n";
	if (with_exit)
		cout << "0. Выход\n";

	cout << "Выберете действие: ";

	return GetCorrectNumber<int>(0, menu.size());
}
