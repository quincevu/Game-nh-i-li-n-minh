#include "Items.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

Item::Item(string _name): name(_name) {
	//null initialize everything, then add the really changed ones 
	attack_damage_bonus = 0;
	attack_speed_bonus = 0;
	ability_power_bonus = 0;
	armor_bonus = 0;
	magic_resist_bonus = 0;
	crit_damage_bonus = 0;
	crit_rate_bonus = 0;
	life_steal_bonus = 0;
	omni_vamp_bonus = 0;
	hp_bonus = 0;
	hp_regen_bonus = 0;
	energy_bonus = 0;
	energy_regen_bonus = 0;
	cd_reduction_bonus = 0;
	movement_speed_bonus = 0;
	//end of null initialization
	if (_name.compare("Infinity Edge")) {
		attack_damage_bonus = 70;
		crit_rate_bonus = 20;
		crit_damage_bonus = 0.35;//this is unique per champ
	}
	if (_name.compare("Rabadon Deathcap")) {
		ability_power_bonus = 120;
		//missing the passive +40% ability power
	}
	if (_name.compare("Sterak Gauge")) {
		hp_bonus = 400;
		attack_damage_bonus = 50;
		//missing the stacking regen passive and the shield passive
	}
	if (_name.compare("Trinity Force")) {
		attack_damage_bonus = 35;
		attack_speed_bonus = 0.30;
		cd_reduction_bonus = 20;
		hp_bonus = 200;
		//missing passives
	}
	if (_name.compare("Galeforce")) {
		attack_damage_bonus = 60;
		attack_speed_bonus = 0.2;
		movement_speed_bonus = 50;
		//mythic passive added to main stats for compensation
		//missing dashing passive
	}
	if (_name.compare("Warmog's Armor")) {
		hp_bonus = 800;
		hp_regen_bonus = 40;//compensated
		//missing healing passive
	}
}

Item create_new_item() {
	cout << "What do you want to buy?";
	string new_item_name; cin >> new_item_name;
	Item new_item(new_item_name);
	return new_item;
}