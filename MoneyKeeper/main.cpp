#include <iostream>
#include "note.h"
#include "day.h"
#include "month.h"
#include "utils.h"

int main() {
	std::shared_ptr<Day> d0 = std::make_shared<Day>(0);
	d0->update(std::make_shared<Note>(1000));
	for (auto const& i : (*d0).info()) {
		std::cout << i.first << " : " << i.second << ",\t";
	}
	std::cout << std::endl;

	std::shared_ptr<Day> d1 = std::make_shared<Day>(1);
	d1->update(std::make_shared<Note>(1000, 500));
	for (auto const& i : (*d1).info()) {
		std::cout << i.first << " : " << i.second << ",\t";
	}
	std::cout << std::endl;

	std::shared_ptr<Day> d2 = std::make_shared<Day>(2);
	d2->update(std::make_shared<Note>(1000, 400, 600));
	for (auto const& i : (*d2).info()) {
		std::cout << i.first << " : " << i.second << ",\t";
	}
	std::cout << std::endl;

	Month* m = new Month(11);
	m->update(d0);
	m->update(d1);
	m->update(d2);
	for (auto const& i : (*m).info()) {
		std::cout << i.first << " : " << i.second << ",\t";
	}
	std::cout << std::endl;

	return 0;
}