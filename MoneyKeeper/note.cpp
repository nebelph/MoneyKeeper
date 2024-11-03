#include "note.h"
Note::Note() : m_sum(0), m_food(0), m_other(0) {}
Note::Note(unsigned sum): m_sum(sum), m_food(0), m_other(0) {}
Note::Note(unsigned sum, unsigned food) {
	if (sum >= food) {
		m_sum = sum;
		m_food = food;
		m_other = sum - food;
	}
	else {
		std::cout << "invalid bills\n";
		m_sum = 0;
		m_food = 0;
		m_other = 0;
	}
}
Note::Note(unsigned sum, unsigned food, unsigned other) {
	if (sum == food + other) {
		m_sum = sum;
		m_food = food;
		m_other = other;
	}
	else {
		std::cout << "invalid bills\n";
		m_sum = 0;
		m_food = 0;
		m_other = 0;
	}
}
std::map<std::string, unsigned> Note::info() const {
	std::map<std::string, unsigned> temp{
		{"sum", getSum()},
		{"food", getFood()},
		{"other", getOther()},
	};
	return temp;
}
unsigned Note::getSum() const {
	return m_sum;
}
unsigned Note::getFood() const {
	return m_food;
}
unsigned Note::getOther() const {
	return m_other;
}