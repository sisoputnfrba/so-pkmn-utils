/*
 * Copyright (C) 2016 Sistemas Operativos - UTN FRBA. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "battle.h"

typedef enum {
  NORMAL_DAMAGE = 0,
  DOUBLE_DAMAGE = 5,
  HALF_DAMAGE   = -5,
  NO_DAMAGE     = -20
} t_type_chart_damage;

typedef enum {
  DRAW          = 0,
  FIRST_PKMN    = 1,
  SECOND_PKMN   = -1,
} t_result_pkmn_battle;

t_type_chart_damage type_chart[19][19];

int extra_damage(t_pokemon* attacker, t_pokemon* defender);
int signum(int number);


t_pokemon* pkmn_battle(t_pokemon* first_pokemon, t_pokemon* second_pokemon) {
  t_pokemon* loser;

  t_result_pkmn_battle result = 
      (first_pokemon->level + extra_damage(first_pokemon, second_pokemon)) 
    - (second_pokemon->level + extra_damage(second_pokemon, first_pokemon));

  switch(signum(result)) {

    case DRAW:
      if(first_pokemon->level >= second_pokemon->level)
          loser = second_pokemon;
      else
          loser = first_pokemon;
      break;
    case FIRST_PKMN:
      loser = second_pokemon;
      break;
    case SECOND_PKMN:
      loser = first_pokemon;
      break;
  }
  return loser;
}

//Private functions

int extra_damage(t_pokemon* attacker, t_pokemon* defender) {
    t_type_chart_damage damage, alt_damage;

    damage = type_chart[attacker->type][defender->type];
    alt_damage = type_chart[attacker->type][defender->second_type];

    if(damage == NO_DAMAGE || alt_damage == NO_DAMAGE)
        return NO_DAMAGE;
    return damage + alt_damage;
}

int signum(int number) {
  if (number > 0) return 1;
  if (number < 0) return -1;
  return 0;
}

//[Attack_Type][Landing Type]
t_type_chart_damage type_chart[19][19] = {
  { //No Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    NORMAL_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    NORMAL_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    NORMAL_DAMAGE, //Dragon
    NORMAL_DAMAGE, //Dark
    NORMAL_DAMAGE, //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Normal Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    NORMAL_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    NORMAL_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    HALF_DAMAGE,   //Rock
    NORMAL_DAMAGE, //Ghost
    NORMAL_DAMAGE, //Dragon
    NORMAL_DAMAGE, //Dark
    NO_DAMAGE,     //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Fire Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    HALF_DAMAGE,   //Fire
    HALF_DAMAGE,   //Water
    NORMAL_DAMAGE, //Electric
    DOUBLE_DAMAGE, //Grass
    DOUBLE_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    DOUBLE_DAMAGE, //Bug
    HALF_DAMAGE,   //Rock
    NORMAL_DAMAGE, //Ghost
    HALF_DAMAGE,   //Dragon
    NORMAL_DAMAGE, //Dark
    DOUBLE_DAMAGE, //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Water Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    DOUBLE_DAMAGE, //Fire
    HALF_DAMAGE,   //Water
    NORMAL_DAMAGE, //Electric
    HALF_DAMAGE,   //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    DOUBLE_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    DOUBLE_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    HALF_DAMAGE,   //Dragon
    NORMAL_DAMAGE, //Dark
    NORMAL_DAMAGE, //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Electric Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    NORMAL_DAMAGE, //Fire
    DOUBLE_DAMAGE, //Water
    HALF_DAMAGE,   //Electric
    HALF_DAMAGE,   //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    NO_DAMAGE,     //Ground
    DOUBLE_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    HALF_DAMAGE,   //Dragon
    NORMAL_DAMAGE, //Dark
    NORMAL_DAMAGE, //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Grass Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    HALF_DAMAGE,   //Fire
    DOUBLE_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    HALF_DAMAGE,   //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    HALF_DAMAGE,   //Poison
    DOUBLE_DAMAGE, //Ground
    HALF_DAMAGE,   //Flying
    NORMAL_DAMAGE, //Psychc
    HALF_DAMAGE,   //Bug
    DOUBLE_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    HALF_DAMAGE,   //Dragon
    NORMAL_DAMAGE, //Dark
    HALF_DAMAGE,   //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Ice Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    HALF_DAMAGE,   //Fire
    HALF_DAMAGE,   //Water
    NORMAL_DAMAGE, //Electric
    DOUBLE_DAMAGE, //Grass
    HALF_DAMAGE,   //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    DOUBLE_DAMAGE, //Ground
    DOUBLE_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    DOUBLE_DAMAGE, //Dragon
    NORMAL_DAMAGE, //Dark
    HALF_DAMAGE,   //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Fight Attack
    NORMAL_DAMAGE, //No Type
    DOUBLE_DAMAGE, //Normal
    NORMAL_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    NORMAL_DAMAGE, //Grass
    DOUBLE_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    HALF_DAMAGE,   //Poison
    NORMAL_DAMAGE, //Ground
    HALF_DAMAGE,   //Flying
    HALF_DAMAGE,   //Psychc
    HALF_DAMAGE,   //Bug
    DOUBLE_DAMAGE, //Rock
    NO_DAMAGE,     //Ghost
    NORMAL_DAMAGE, //Dragon
    DOUBLE_DAMAGE, //Dark
    DOUBLE_DAMAGE, //Steel
    HALF_DAMAGE    //Fairy
  },
  { //Poison Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    NORMAL_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    DOUBLE_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    HALF_DAMAGE,   //Poison
    HALF_DAMAGE,   //Ground
    NORMAL_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    HALF_DAMAGE,   //Rock
    HALF_DAMAGE,   //Ghost
    NORMAL_DAMAGE, //Dragon
    NORMAL_DAMAGE, //Dark
    NO_DAMAGE,     //Steel
    DOUBLE_DAMAGE  //Fairy
  },
  { //Ground Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    DOUBLE_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    DOUBLE_DAMAGE, //Electric
    HALF_DAMAGE,   //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    DOUBLE_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    NO_DAMAGE,     //Flying
    NORMAL_DAMAGE, //Psychc
    HALF_DAMAGE,   //Bug
    DOUBLE_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    NORMAL_DAMAGE, //Dragon
    NORMAL_DAMAGE, //Dark
    DOUBLE_DAMAGE, //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Flying Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    NORMAL_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    HALF_DAMAGE,   //Electric
    DOUBLE_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    DOUBLE_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    DOUBLE_DAMAGE, //Bug
    HALF_DAMAGE,   //Rock
    NORMAL_DAMAGE, //Ghost
    NORMAL_DAMAGE, //Dragon
    NORMAL_DAMAGE, //Dark
    NORMAL_DAMAGE, //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Psychc Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    NORMAL_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    NORMAL_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    DOUBLE_DAMAGE, //Fight
    DOUBLE_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    HALF_DAMAGE,   //Psychc
    NORMAL_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    NORMAL_DAMAGE, //Dragon
    NO_DAMAGE,     //Dark
    HALF_DAMAGE,   //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Bug Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    HALF_DAMAGE,   //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    DOUBLE_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    HALF_DAMAGE,   //Fight
    HALF_DAMAGE,   //Poison
    NORMAL_DAMAGE, //Ground
    HALF_DAMAGE,   //Flying
    DOUBLE_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    HALF_DAMAGE,   //Ghost
    NORMAL_DAMAGE, //Dragon
    DOUBLE_DAMAGE, //Dark
    HALF_DAMAGE,   //Steel
    HALF_DAMAGE    //Fairy
  },
  { //Rock Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    DOUBLE_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    NORMAL_DAMAGE, //Grass
    DOUBLE_DAMAGE, //Ice
    HALF_DAMAGE,   //Fight
    NORMAL_DAMAGE, //Poison
    HALF_DAMAGE,   //Ground
    DOUBLE_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    DOUBLE_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    NORMAL_DAMAGE, //Dragon
    NORMAL_DAMAGE, //Dark
    HALF_DAMAGE,   //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Ghost Attack
    NORMAL_DAMAGE, //No Type
    NO_DAMAGE,     //Normal
    NORMAL_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    NORMAL_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    DOUBLE_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    DOUBLE_DAMAGE, //Ghost
    NORMAL_DAMAGE, //Dragon
    HALF_DAMAGE,   //Dark
    NORMAL_DAMAGE, //Steel
    NORMAL_DAMAGE  //Fairy
  },
  { //Dragon Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    NORMAL_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    NORMAL_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    DOUBLE_DAMAGE, //Dragon
    NORMAL_DAMAGE, //Dark
    HALF_DAMAGE,   //Steel
    NO_DAMAGE      //Fairy
  },
  { //Dark Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    NORMAL_DAMAGE, //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    NORMAL_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    HALF_DAMAGE,   //Fight
    NORMAL_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    DOUBLE_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    DOUBLE_DAMAGE, //Ghost
    DOUBLE_DAMAGE, //Dragon
    HALF_DAMAGE,   //Dark
    NORMAL_DAMAGE, //Steel
    HALF_DAMAGE    //Fairy
  },
  { //Steel Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    HALF_DAMAGE,   //Fire
    HALF_DAMAGE,   //Water
    HALF_DAMAGE,   //Electric
    NORMAL_DAMAGE, //Grass
    DOUBLE_DAMAGE, //Ice
    NORMAL_DAMAGE, //Fight
    NORMAL_DAMAGE, //Poison
    NORMAL_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    DOUBLE_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    NORMAL_DAMAGE, //Dragon
    NORMAL_DAMAGE, //Dark
    HALF_DAMAGE,   //Steel
    DOUBLE_DAMAGE  //Fairy
  },
  { //Fairy Attack
    NORMAL_DAMAGE, //No Type
    NORMAL_DAMAGE, //Normal
    HALF_DAMAGE,   //Fire
    NORMAL_DAMAGE, //Water
    NORMAL_DAMAGE, //Electric
    NORMAL_DAMAGE, //Grass
    NORMAL_DAMAGE, //Ice
    DOUBLE_DAMAGE, //Fight
    HALF_DAMAGE,   //Poison
    NORMAL_DAMAGE, //Ground
    NORMAL_DAMAGE, //Flying
    NORMAL_DAMAGE, //Psychc
    NORMAL_DAMAGE, //Bug
    NORMAL_DAMAGE, //Rock
    NORMAL_DAMAGE, //Ghost
    DOUBLE_DAMAGE, //Dragon
    DOUBLE_DAMAGE, //Dark
    HALF_DAMAGE,   //Steel
    NORMAL_DAMAGE  //Fairy
  }
};
