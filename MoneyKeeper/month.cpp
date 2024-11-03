#include "month.h"

Month::Month(unsigned month) : m_month(month), Note(0) {
	for (int i = 0; i < 31; i++) {
		m_calendar.push_back(nullptr);
	}
}
std::map<std::string, unsigned> Month::info() const {
	std::map<std::string, unsigned> temp{
		{"month", m_month},
		{"sum", m_sum},
		{"food", m_food},
		{"other", m_other},
	};
	return temp;
}
void Month::update(Day* day) {
	if (unsigned temp_day = day->getDay()) {
		m_calendar.at(temp_day - 1) = day;
		m_sum += day->getSum();
		m_food += day->getFood();
		m_other += day->getOther();
	}
}
unsigned Month::getMonth() const {
	return m_month;
}
Month::~Month() {
	for (int i = 0; i < 31; i++) {
		delete m_calendar.at(i);
	}
}