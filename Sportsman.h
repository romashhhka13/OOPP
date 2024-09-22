#pragma once

#include <string>
#include <iostream>
#include <fstream>

#include "Addition.h"

class Sportsman
{
public:
	
	static void ResetMaxID();
	int GetID() const;
	virtual void Input();
	virtual void Output() const;

	Sportsman();
	/*friend std::istream& operator >> (std::istream& in, Sportsman& s);
	friend std::ostream& operator << (std::ostream& out, const Sportsman& s);*/
	friend std::ifstream& operator >> (std::ifstream& fin, Sportsman& s);
	friend std::ofstream& operator << (std::ofstream& fout, const Sportsman& s);

private:
	std::string surname;
	std::string name;
	int id;
	int age;
	int height;
	static int max_id;
};



