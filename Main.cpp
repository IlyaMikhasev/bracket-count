#include <iostream>
#include <string>
#include <vector>
int main() {
	setlocale(LC_ALL, "Russian");
	std::string str;
	int countBr=0,count_sym=0;
	std::vector<int>  vecSym;
	std::cout << "Введите строку со скобками () \n->";
	getline(std::cin, str);
	for (int i = 0; i < str.length(); i++)	{
		if (str[i] == '(')
			countBr++;
		else
			if (str[i] == ')') {
				vecSym.push_back(count_sym);
				count_sym = 0;
			}
			else
				count_sym++;
	}
	std::cout << "Количество скобок = " << countBr << '\n';
	for (auto el : vecSym)
		std::cout << el << ' ';
	return 0;
}