#pragma once
#include "note.h"
#include "day.h"
class Month : public Note {
	unsigned m_month;
	std::vector<std::shared_ptr<Day>> m_calendar;
public:
	Month(unsigned);
	std::map<std::string, unsigned> info() const override;
	void update(std::shared_ptr<Day>);
	unsigned getMonth() const;
};

