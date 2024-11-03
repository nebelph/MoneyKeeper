#include "utils.h"

static std::map<unsigned, std::string> months_names = {
	{1, "January"},
	{2, "February"},
	{3, "March"},
	{4, "April"},
	{5, "May"},
	{6, "June"},
	{7, "July"},
	{8, "August"},
	{9, "September"},
	{10, "October"},
	{11, "November"},
	{12, "December"},
};

std::shared_ptr<Month> createMonth(unsigned const& month_number) {
	return std::make_shared<Month>(11);
}
std::shared_ptr<Day> createDay(unsigned const& day, std::shared_ptr<Note> const& note) {
	std::shared_ptr<Day> new_day = std::make_shared<Day>(day);
	new_day->update(note);
	return new_day;
}
void print(std::shared_ptr<Month> month) {
	std::cout << months_names[month->info()["month"]] << std::endl;
	std::cout << "Sum:\t" << month->getSum() << std::endl;
	std::cout << "Food:\t" << month->getFood() << std::endl;
	std::cout << "Other:\t" << month->getOther() << std::endl << std::endl;
}
void print(std::shared_ptr<Day> day) {
	std::cout << "Day " << day->getDay() << std::endl;
	std::cout << "Sum:\t" << day->getSum() << std::endl;
	std::cout << "Food:\t" << day->getFood() << std::endl;
	std::cout << "Other:\t" << day->getOther() << std::endl << std::endl;
}