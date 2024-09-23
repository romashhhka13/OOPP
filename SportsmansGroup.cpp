#include "SportsmansGroup.h"


using namespace std;
using namespace boost::archive;


BOOST_CLASS_VERSION(SportsmansGroup, 1);


void SportsmansGroup::AddSportsman(){
	shared_ptr<Sportsman> s = make_shared<Sportsman>();
	s->Input();
	group.push_back(s);
}


void SportsmansGroup::AddFootballer()
{
	shared_ptr<Footballer> f = make_shared<Footballer>();
	f->Input();
	group.push_back(f);
}


void SportsmansGroup::ShowSportsmans() const
{
	for (const auto& s : group)
		s->Output();
}

void SportsmansGroup::Save(ofstream& fout) const
{
	text_oarchive oa(fout);
	oa << *this;
	/*for (const auto& s : group)
		oa << *s;*/
}


void SportsmansGroup::Load(ifstream& fin)
{
	//int num_s;
	//Clear();
	//	
	//fin >> num_s;
	//for (int i = 0; i < num_s; i++) {
	//	shared_ptr<Sportsman> s = make_shared<Sportsman>();
	//	fin >> *s;
	//	group.push_back(s);
	//}
	text_iarchive ia(fin);
	ia >> *this;

	//while (fin.peek() != EOF) {  // Пока файл не закончился
	//	shared_ptr<Sportsman> s = make_shared<Sportsman>();
	//	ia >> s;  // Загружаем объект через указатель
	//	group.push_back(s);
	//}
}

void SportsmansGroup::Clear()
{
	Sportsman::ResetMaxID();
	group.clear();
}

bool SportsmansGroup::ObjectExist() const
{
	return !group.empty();
}

