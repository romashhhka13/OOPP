#pragma once

#include <string>
#include <iostream>
#include <fstream>

#include "Addition.h"

class Sportsman
{
public:
	
	int GetID();
	static void ResetMaxID();

	friend std::istream& operator >> (std::istream& in, Sportsman& s);
	friend std::ostream& operator << (std::ostream& out, const Sportsman& s);
	friend std::ifstream& operator >> (std::ifstream& fin, Sportsman& s);
	friend std::ofstream& operator << (std::ofstream& fout, const Sportsman& s);

	Sportsman();

private:
	std::string surname;
	std::string name;
	int id;
	int age;
	int weight;
	static int max_id;
};

