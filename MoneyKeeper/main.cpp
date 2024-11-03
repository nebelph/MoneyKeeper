#include <iostream>
#include "note.h"
#include "day.h"
#include "month.h"
#include "utils.h"

int main() {
	std::shared_ptr<Month> october = createMonth(11);

	std::shared_ptr<Note> note0 = std::make_shared<Note>(1000);
	try {
		std::shared_ptr<Day> d0 = createDay(0, note0);
		print(d0);
		october->update(d0);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::shared_ptr<Note> note1 = std::make_shared<Note>(1000, 500);
	std::shared_ptr<Day> d1 = createDay(1, note1);
	print(d1);
	october->update(d1);

	std::shared_ptr<Note> note2 = std::make_shared<Note>(1000, 400, 600);
	std::shared_ptr<Day> d2 = createDay(2, note2);
	print(d2);
	october->update(d2);
	
	print(october);

	return 0;
}