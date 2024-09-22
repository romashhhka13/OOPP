#pragma once
#include <string>
#include <iostream>

#include "Sportsman.h"
#include "Addition.h"

class Footballer : public Sportsman
{
public:
	void Input() override;
	void Output() const override;

private:
	std::string position;
	int number;
};