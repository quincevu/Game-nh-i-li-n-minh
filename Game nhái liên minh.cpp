#include "Champ class.h"
#include "Items.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <string>

using namespace std;



int main() {
	vector<champion> champ_list = create_champ_list();
	print_list(champ_list);

	cout << "HELLO MTHFKER!";
	return 0;
}