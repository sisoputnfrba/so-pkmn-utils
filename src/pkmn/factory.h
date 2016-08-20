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
  #include <stdint.h>
  #include <string.h>
  #include <ctype.h>
  #include <commons/collections/dictionary.h>

  //Tipos de datos
  typedef int t_level;

  typedef enum {
    NO_TYPE   = 0,
    NORMAL    = 1,
    FIRE      = 2,
    WATER     = 3,
    ELECTRIC  = 4,
    GRASS     = 5,
    ICE       = 6,
    FIGHT     = 7,
    POISON    = 8,
    GROUND    = 9,
    FLYING    = 10,
    PSYCHC    = 11,
    BUG       = 12,
    ROCK      = 13,
    GHOST     = 14,
    DRAGON    = 15,
    DARK      = 16,
    STEEL     = 17,
    FAIRY     = 18
  } t_pokemon_type;

  typedef struct {
    char* species;
    t_pokemon_type type;
    t_pokemon_type second_type;
    t_level level;
  } t_pokemon;

  typedef struct {
    t_dictionary* pkmn_data;
  } t_pkmn_factory;

 /*
  * Crea una factory que crea pokémons
  * La fábrica solamente es capaz de crear pokémons de primera generación.
  *
  */

  t_pkmn_factory* create_pkmn_factory();

 /*
  * Destruye una factory de pokémons y libera todos los recursos utilizados
  *
  */
  void destroy_pkmn_factory(t_pkmn_factory* factory);

 /*
  * Crear pokemon mediante el nombre y el nivel en una fábrica
  *
  * Mediante una cadena que con el nombre del pokemon.
  * El mismo debe comenzar con mayúscula y encontrarse bien escrito. 
  * Esta función devuelve un t_pokemon* con toda la información necesaria cargada
  * @params la fábrica desde donde construir, el nombre de la especie(ej. "pikachu") y el nivel como número
  * @return un puntero a un t_pokemon con la información ya cargada.
  */
  t_pokemon* create_pokemon(t_pkmn_factory* factory, char* species, t_level level);

 /*
  * Pkmn Type a String
  *
  * Devuelve el nombre del tipo pasado por parámetro
  * Tener en cuenta que el valor de retorno deberá ser liberado tras usarse
  * mediante free()
  * @params t_pokemon_type
  * @return string que representa el nombre del tipo
  */
  char * pkmn_type_to_string(t_pokemon_type type);

#endif