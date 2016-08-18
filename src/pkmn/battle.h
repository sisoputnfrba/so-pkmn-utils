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

#ifndef BATTLE_H_
#define BATTLE_H_

  #include <stdio.h>
  #include <stdlib.h>
  #include <stdbool.h>
  #include <stdint.h>

  //Tipos de datos
  typedef int t_level;

  typedef enum {
    NORMAL    = 0,
    FIRE      = 1,
    WATER     = 2,
    ELECTRIC  = 3,
    GRASS     = 4,
    ICE       = 5,
    FIGHT     = 6,
    POISON    = 7,
    GROUND    = 8,
    FLYING    = 9,
    PSYCHC    = 10,
    BUG       = 11,
    ROCK      = 12,
    GHOST     = 13,
    DRAGON    = 14,
    DARK      = 15,
    STEEL     = 16,
    FAIRY     = 17
  } t_pokemon_type;

  typedef struct {
    char* especies;
    char symbol;
    t_pokemon_type type;
    bool is_dual_type;
    t_pokemon_type second_type;
    t_level level;
  } t_pokemon;

 /*
  * Comparar Pokémons
  *
  * Realiza la comparación entre 2 pokémons según sus tipos y niveles
  * El valor de retorno será el pokemon que más peso tenga en la comparación.
  * En caso de empate, ganará el que mayor nivel tenga
  * o el primero en caso del empate de nivel.
  *
  * @params 2 pokémons que tengan al menos nivel y tipo
  * @return  El t_pokemon victorioso
  */
  t_pokemon* pkmn_battle(t_pokemon* first_pokemon, t_pokemon* second_pokemon);

#endif