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

#ifndef FACTORY_H_
#define FACTORY_H_

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
    char* species;
    char symbol;
    t_pokemon_type type;
    bool is_dual_type;
    t_pokemon_type second_type;
    t_level level;
  } t_pokemon;

 /*
  * Crear pokemon mediante el nombre y el nivel
  *
  * Mediante una cadena que con el nombre del pokemon, 
  * esta función devuelve un t_pokemon* con toda la información necesaria cargada
  * El nombre pasado debe encontrarse dentro de los primeros 151 pokémons.
  * @params el nombre de la especie(ej. "pikachu") y el nivel como número
  * @return un puntero a un t_pokemon con la información ya cargada.
  */
  t_pokemon* create_pkmn_from_string(char* species_name, t_level level);

#endif