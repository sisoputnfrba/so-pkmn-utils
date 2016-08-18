#include "comparator.h"

typedef enum {
  NORMAL_DAMAGE = 0,
  DOUBLE_DAMAGE = 5,
  HALF_DAMAGE   = -5,
  NO_DAMAGE     = -20
} t_type_chart_damage;

t_type_chart_damage type_chart[18][18];

t_result_compare so_compare_pokemon(t_pokemon* first_pokemon, t_pokemon* second_pokemon) {
  t_nivel first_lvl = first_pokemon->nivel;
  t_nivel second_lvl = second_pokemon->nivel;

  // TODO: Comparate nivel * attack_type <> nivel * defense_type

  return 0;
}

t_type_chart_damage type_chart[18][18] = {
  { //Normal Attack
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
