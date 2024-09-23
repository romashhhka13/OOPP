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

	friend class boost::serialization::access;

	template<class Archive>
	void serialize(Archive& ar, const unsigned int version) {
		ar& id;
		ar& surname;
		ar& name;
		ar& age;
		ar& height;
	}


	std::string surname;
	std::string name;
	int id;
	int age;
	int height;
	static int max_id;
};

//BOOST_CLASS_EXPORT(Sportsman)

