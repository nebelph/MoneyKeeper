#include "utils.h"

std::shared_ptr<Month> createMonth(unsigned const& month_number) {
	return std::make_shared<Month>(11);
}
std::shared_ptr<Day> createDay(unsigned const& day, std::shared_ptr<Note> const& note) {
	std::shared_ptr<Day> new_day = std::make_shared<Day>(day);
	new_day->update(note);
	return new_day;
}