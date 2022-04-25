#include "Champ class.h"
#include "Items.h"
#include "Spells.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

champion::champion(string _name): name(_name) {
	attack_damage = 100;
	ability_power = 0;
	armor = 25;
	magic_resist = 30;
	attack_speed = 0.625;
	hit_point = 2000;
	energy = 1000;
	hp_regen = 10;
	energy_regen = 5;
	cd_reduction = 0;
	crit_rate = 0;
	crit_damage = 1.75;
	movement_speed = 340;
	attack_range = 125;
	life_steal = 0;
	spell_vamp = 0;
	omni_vamp = 0;
}

vector<champion> create_champ_list(){
	vector<champion> list;
	champion caitlyn("Caitlyn"); list.push_back(caitlyn);
	champion lee_sin("Lee Sin"); list.push_back(lee_sin);
	return list;
}

void champion::buy_new_item() {
	Item new_item = create_new_item();
	item_list.push_back(new_item);
}

//we need a sell item function

void print_list(vector<champion> list) {
	for (unsigned int i = 0; i < list.size(); i++) {
		cout << "Champion: " << list[i].name << endl
			<< "Attack Speed: " << list[i].getAS() << endl;
	}
}