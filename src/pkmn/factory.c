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

#include "factory.h"

void add_pkmn_data(t_dictionary* data, char* species, t_pokemon_type type, t_pokemon_type second_type);

t_pkmn_factory* create_pkmn_factory() {
  t_pkmn_factory * factory = malloc(sizeof(t_pkmn_factory));
  factory->pkmn_data = dictionary_create();
  add_pkmn_data(factory->pkmn_data, "Bulbasaur", GRASS, POISON);
  add_pkmn_data(factory->pkmn_data, "Ivysaur", GRASS, POISON);
  add_pkmn_data(factory->pkmn_data, "Venusaur", GRASS, POISON);
  add_pkmn_data(factory->pkmn_data, "Charmander", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Charmeleon", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Charizard", FIRE, FLYING);
  add_pkmn_data(factory->pkmn_data, "Squirtle", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Wartortle", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Blastoise", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Caterpie", BUG, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Metapod", BUG, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Butterfree", BUG, FLYING);
  add_pkmn_data(factory->pkmn_data, "Weedle", BUG, POISON);
  add_pkmn_data(factory->pkmn_data, "Kakuna", BUG, POISON);
  add_pkmn_data(factory->pkmn_data, "Beedrill", BUG, POISON);
  add_pkmn_data(factory->pkmn_data, "Pidgey", NORMAL, FLYING);
  add_pkmn_data(factory->pkmn_data, "Pidgeotto", NORMAL, FLYING);
  add_pkmn_data(factory->pkmn_data, "Pidgeot", NORMAL, FLYING);
  add_pkmn_data(factory->pkmn_data, "Rattata", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Raticate", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Spearow", NORMAL, FLYING);
  add_pkmn_data(factory->pkmn_data, "Fearow", NORMAL, FLYING);
  add_pkmn_data(factory->pkmn_data, "Ekans", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Arbok", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Pikachu", ELECTRIC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Raichu", ELECTRIC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Sandshrew", GROUND, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Sandslash", GROUND, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Nidoran♀", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Nidorina", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Nidoqueen", POISON, GROUND);
  add_pkmn_data(factory->pkmn_data, "Nidoran♂", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Nidorino", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Nidoking", POISON, GROUND);
  add_pkmn_data(factory->pkmn_data, "Clefairy", FAIRY, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Clefable", FAIRY, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Vulpix", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Ninetales", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Jigglypuff", FAIRY, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Wigglytuff", FAIRY, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Zubat", POISON, FLYING);
  add_pkmn_data(factory->pkmn_data, "Golbat", POISON, FLYING);
  add_pkmn_data(factory->pkmn_data, "Oddish", GRASS, POISON);
  add_pkmn_data(factory->pkmn_data, "Gloom", GRASS, POISON);
  add_pkmn_data(factory->pkmn_data, "Vileplume", GRASS, POISON);
  add_pkmn_data(factory->pkmn_data, "Paras", BUG, GRASS);
  add_pkmn_data(factory->pkmn_data, "Parasect", BUG, GRASS);
  add_pkmn_data(factory->pkmn_data, "Venonat", BUG, POISON);
  add_pkmn_data(factory->pkmn_data, "Venomoth", BUG, POISON);
  add_pkmn_data(factory->pkmn_data, "Diglett", GROUND, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Dugtrio", GROUND, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Meowth", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Meowth", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Psyduck", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Golduck", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Mankey", FIGHT, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Primeape", FIGHT, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Growlithe", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Arcanine", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Poliwag", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Poliwhirl", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Poliwrath", WATER, FIGHT);
  add_pkmn_data(factory->pkmn_data, "Abra", PSYCHC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Kadabra", PSYCHC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Alakazam", PSYCHC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Machop", FIGHT, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Machoke", FIGHT, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Machamp", FIGHT, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Bellsprout", GRASS, POISON);
  add_pkmn_data(factory->pkmn_data, "Weepinbell", GRASS, POISON);
  add_pkmn_data(factory->pkmn_data, "Victreebel", GRASS, POISON);
  add_pkmn_data(factory->pkmn_data, "Tentacool", WATER, POISON);
  add_pkmn_data(factory->pkmn_data, "Tentacruel", WATER, POISON);
  add_pkmn_data(factory->pkmn_data, "Geodude", ROCK, GROUND);
  add_pkmn_data(factory->pkmn_data, "Graveler", ROCK, GROUND);
  add_pkmn_data(factory->pkmn_data, "Golem", ROCK, GROUND);
  add_pkmn_data(factory->pkmn_data, "Ponyta", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Rapidash", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Slowpoke", WATER, PSYCHC);
  add_pkmn_data(factory->pkmn_data, "Slowbro", WATER, PSYCHC);
  add_pkmn_data(factory->pkmn_data, "Magnemite", ELECTRIC, STEEL);
  add_pkmn_data(factory->pkmn_data, "Magneton", ELECTRIC, STEEL);
  add_pkmn_data(factory->pkmn_data, "Farfetch'd", NORMAL, FLYING);
  add_pkmn_data(factory->pkmn_data, "Doduo", NORMAL, FLYING);
  add_pkmn_data(factory->pkmn_data, "Dodrio", NORMAL, FLYING);
  add_pkmn_data(factory->pkmn_data, "Seel", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Dewgong", WATER, ICE);
  add_pkmn_data(factory->pkmn_data, "Grimer", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Muk", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Gastly", GHOST, POISON);
  add_pkmn_data(factory->pkmn_data, "Haunter", GHOST, POISON);
  add_pkmn_data(factory->pkmn_data, "Gengar", GHOST, POISON);
  add_pkmn_data(factory->pkmn_data, "Onix", ROCK, GROUND);
  add_pkmn_data(factory->pkmn_data, "Drowzee", PSYCHC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Hypno", PSYCHC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Krabby", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Kingler", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Voltorb", ELECTRIC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Electrode", ELECTRIC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Exeggcute", GRASS, PSYCHC);
  add_pkmn_data(factory->pkmn_data, "Exeggutor", GRASS, PSYCHC);
  add_pkmn_data(factory->pkmn_data, "Cubone", GROUND, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Marowak", GROUND, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Hitmonlee", FIGHT, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Hitmonchan", FIGHT, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Lickitung", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Koffing", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Weezing", POISON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Rhyhorn", GROUND, ROCK);
  add_pkmn_data(factory->pkmn_data, "Rhydon", GROUND, ROCK);
  add_pkmn_data(factory->pkmn_data, "Chansey", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Tangela", GRASS, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Kangaskhan", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Horsea", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Seadra", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Goldeen", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Seaking", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Staryu", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Starmie", WATER, PSYCHC);
  add_pkmn_data(factory->pkmn_data, "Mr. Mime", PSYCHC, FAIRY);
  add_pkmn_data(factory->pkmn_data, "Scyther", BUG, FLYING);
  add_pkmn_data(factory->pkmn_data, "Jynx", ICE, PSYCHC);
  add_pkmn_data(factory->pkmn_data, "Electabuzz", ELECTRIC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Magmar", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Pinsir", BUG, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Tauros", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Magikarp", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Gyarados", WATER, FLYING);
  add_pkmn_data(factory->pkmn_data, "Lapras", WATER, ICE);
  add_pkmn_data(factory->pkmn_data, "Ditto", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Eevee", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Vaporeon", WATER, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Jolteon", ELECTRIC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Flareon", FIRE, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Porygon", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Omanyte", ROCK, WATER);
  add_pkmn_data(factory->pkmn_data, "Omastar", ROCK, WATER);
  add_pkmn_data(factory->pkmn_data, "Kabuto", ROCK, WATER);
  add_pkmn_data(factory->pkmn_data, "Kabutops", ROCK, WATER);
  add_pkmn_data(factory->pkmn_data, "Aerodactyl", ROCK, FLYING);
  add_pkmn_data(factory->pkmn_data, "Snorlax", NORMAL, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Articuno", ICE, FLYING);
  add_pkmn_data(factory->pkmn_data, "Zapdos", ELECTRIC, FLYING);
  add_pkmn_data(factory->pkmn_data, "Moltres", FIRE, FLYING);
  add_pkmn_data(factory->pkmn_data, "Dratini", DRAGON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Dragonair", DRAGON, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Dragonite", DRAGON, FLYING);
  add_pkmn_data(factory->pkmn_data, "Mewtwo", PSYCHC, NO_TYPE);
  add_pkmn_data(factory->pkmn_data, "Mew", PSYCHC, NO_TYPE);
  return factory;
}

void destroy_pkmn_factory(t_pkmn_factory* factory) {
  void destroy_pkmn_data(void* data) {
    free(data);
  };

  dictionary_destroy_and_destroy_elements(factory->pkmn_data, destroy_pkmn_data);
}

void add_pkmn_data( t_dictionary* pkmn_database, char* species, 
                    t_pokemon_type type, t_pokemon_type second_type) {
  t_pokemon* data = malloc(sizeof(t_pokemon));
  data->type = type;
  data->second_type = second_type;
  dictionary_put(pkmn_database, species, data);
}

t_pokemon* create_pokemon(t_pkmn_factory* factory, char* species, t_level level) {
  t_pokemon* new_pkmn = NULL;
  t_pokemon* pkmn_types = dictionary_get(factory->pkmn_data, species);

  if(pkmn_types) {
    new_pkmn = malloc(sizeof(t_pokemon));
    new_pkmn->species = species;
    new_pkmn->type = pkmn_types->type;
    new_pkmn->second_type = pkmn_types->second_type;
    new_pkmn->level = level; 
  }
  return new_pkmn;
}


const char* Pokemon_Types_Names[] = {
  "",
  "Normal",
  "Fire",
  "Water",
  "Electric",
  "Grass",
  "Ice",
  "Fight",
  "Poison",
  "Ground",
  "Flying",
  "Psychc",
  "Bug",
  "Rock",
  "Ghost",
  "Dragon",
  "Dark",
  "Steel",
  "Fairy"
}; 

char * pkmn_type_to_string(t_pokemon_type type) {
  return strdup(Pokemon_Types_Names[type]);  
}
