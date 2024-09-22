#pragma once
#include <unordered_map>
#include <string>
#include <memory>
#include <vector>

#include "Sportsman.h"

class SportsmansGroup
{
public:
	void AddSportsman();
	void ShowSportsmans();
	void Save();
	void Load();
	void Clear();

	~SportsmansGroup();

private:
	std::vector<std::shared_ptr<Sportsman>> group;

};