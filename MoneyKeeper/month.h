#pragma once
#include "note.h"
#include "day.h"
class Month : public Note {
	unsigned m_month;
	std::vector<Day*> m_calendar;
public:
	Month(unsigned);
	std::map<std::string, unsigned> info() const override;
	void update(Day*);
	unsigned getMonth() const;
	~Month();
};

