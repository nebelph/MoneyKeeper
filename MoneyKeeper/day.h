#pragma once
#include "note.h"

class Day : public Note {
	unsigned m_day;
public:
	Day(unsigned);
	std::map<std::string, unsigned> info() const override;
	void update(std::shared_ptr<Note>);
	unsigned getDay() const;
};

