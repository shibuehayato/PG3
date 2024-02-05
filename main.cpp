#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;

int main()
{
	printf("%d\n", 1970);

	list<const char*> station{"Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
	"Uguisudani","Nippori","Tabata","Komagome","Sugamo",
	"Otsuka","IkeBukuro","Mejiro","Takadanobaba","Shin-Okubo",
	"Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
	"Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
	"Hamamatsucho","Shimbashi","Yurakucho"};

	for (auto itr = station.begin(); itr != station.end(); ++itr) {

		cout << *itr << "\n";
	}

	printf("%d\n", 2019);
	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = station.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	for (auto itr = station.begin(); itr != station.end(); ++itr) {

		cout << *itr << "\n";
	}

	printf("%d\n", 2022);
	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = station.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	for (auto itr = station.begin(); itr != station.end(); ++itr) {

		cout << *itr << "\n";
	}

	return 0;
}