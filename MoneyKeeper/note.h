#pragma once
#include <iostream>
#include <map>
#include <vector>
class Note {
protected:
	unsigned m_sum;
	unsigned m_food;
	unsigned m_other;
public:
	Note();
	explicit Note(unsigned);
	Note(unsigned, unsigned);
	Note(unsigned, unsigned, unsigned);
	virtual std::map<std::string, unsigned> info() const;
	unsigned getSum() const;
	unsigned getFood() const;
	unsigned getOther() const;
};

