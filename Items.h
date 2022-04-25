#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

class Item
{
private:
	string name;
	double hp_bonus;
	double energy_bonus;
	double attack_damage_bonus;
	double ability_power_bonus;
	double attack_speed_bonus;
	double armor_bonus;
	double magic_resist_bonus;
	double cd_reduction_bonus;
	double crit_rate_bonus;
	double crit_damage_bonus;
	double life_steal_bonus;
	double omni_vamp_bonus;
	double hp_regen_bonus;
	double energy_regen_bonus;
	double movement_speed_bonus;
public:
	Item(string _name);
};

Item create_new_item();