#pragma once
#include "note.h"
#include "day.h"
#include "month.h"

std::shared_ptr<Month> createMonth(unsigned const&);
std::shared_ptr<Day> createDay(unsigned const&, std::shared_ptr<Note> const&);