#include "day.h"

Day::Day(unsigned day) {
	if (day > 0 && day < 32)
		m_day = day;
	else {
		std::cout << "day is invalid\n";
		m_day = 0;
	}
}
std::map<std::string, unsigned> Day::info() const {
	std::map<std::string, unsigned> temp{
		{"day", m_day},
		{"sum", m_sum},
		{"food", m_food},
		{"other", m_other},
	};
	return temp;
}
void Day::update(std::shared_ptr<Note> note) {
	m_sum = note->getSum();
	m_food = note->getFood();
	m_other = note->getOther();

}
unsigned Day::getDay() const {
	return m_day;
}