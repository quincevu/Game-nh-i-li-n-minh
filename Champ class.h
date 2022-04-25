#pragma once
#include "Items.h"
#include "Spells.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <string>

using namespace std;
class champion {
private:
	double hit_point;
	double energy;
	double attack_damage;
	double ability_power;
	double armor;
	double magic_resist;
	double cd_reduction;
	double crit_rate;
	double crit_damage;
	double movement_speed;
	double attack_range;
	double hp_regen;
	double energy_regen;
	double attack_speed;
	double life_steal;
	double spell_vamp;
	double omni_vamp;
public:
	string name;
	string title;
	string motto;
	vector<Item> item_list;
	vector<Spells> spell_list;
	champion(string _name);
	void buy_new_item();
	double getAS() const { return attack_speed; }//for testing only -> worked as intended
};

vector<champion> create_champ_list();
void print_list(vector<champion> list);