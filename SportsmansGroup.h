#pragma once
#include <unordered_map>
#include <string>
#include <memory>
#include <vector>

#include "Sportsman.h"
#include "Footballer.h"

class SportsmansGroup
{
public:
	void AddSportsman();
	void AddFootballer();
	void ShowSportsmans() const;
	void Save(std::ofstream& fout) const;
	void Load(std::ifstream& fin);
	void Clear();
	bool ObjectExist() const;

private:
	std::vector<std::shared_ptr<Sportsman>> group;
};