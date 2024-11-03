#include "utils.h"

std::shared_ptr<Month> createMonth(unsigned const& month_number) {
	return std::make_shared<Month>(11);
}
std::shared_ptr<Day> createDay(unsigned const& day, unsigned const& sum, unsigned const& food, unsigned const& other) {
	std::shared_ptr<Day> new_day = std::make_shared<Day>(day);
	new_day->update(std::make_shared<Note>(sum, food, other));
	return new_day;
}