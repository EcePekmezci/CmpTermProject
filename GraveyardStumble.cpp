#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <vector>
#include "Skills.h"
#include "AttackSkill.h"
#include "GraveyardStumble.h"


GraveyardStumble::GraveyardStumble(){}

void GraveyardStumble::GraveyardStumbleAttack(Hero &H, int damage){
 //   cout << "Hero hp was: " << H.HP << endl;
H.setHP( H.getHP() - damage);
    cout << H.getName()  << " hp reduced to: " << H.getHP() << "\n";
                if (H.getHP() <= 0) {H.setDeathDoorState(true);
     cout  << "--" << H.getName() << " is in Death's Door!\n"; }
};





