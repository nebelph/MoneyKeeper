#include <iostream>
#include "note.h"
#include "day.h"
#include "month.h"
#include "utils.h"

int main() {
	std::shared_ptr<Day> d0 = createDay(0, 1000);
	for (auto const& i : (*d0).info()) {
		std::cout << i.first << " : " << i.second << ",\t";
	}
	std::cout << std::endl;

	std::shared_ptr<Day> d1 = createDay(1, 1000, 500);
	for (auto const& i : (*d1).info()) {
		std::cout << i.first << " : " << i.second << ",\t";
	}
	std::cout << std::endl;

	std::shared_ptr<Day> d2 = createDay(0, 1000, 400, 600);
	for (auto const& i : (*d2).info()) {
		std::cout << i.first << " : " << i.second << ",\t";
	}
	std::cout << std::endl;

	std::shared_ptr<Month> october = createMonth(11);
	october->update(d0);
	october->update(d1);
	october->update(d2);
	for (auto const& i : (*october).info()) {
		std::cout << i.first << " : " << i.second << ",\t";
	}
	std::cout << std::endl;

	return 0;
}