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
  #include "factory.h"

 /*
  * Batalla Pokémon
  *
  * Realiza la simulacion de batallan entre 2 pokémons 
  * según sus tipos y niveles
  * El valor de retorno será el pokemon que haya perdido la batalla.
  * En caso de empate, perderá el que menor nivel tenga
  * o el segundo en caso del empate de nivel.
  *
  * @params 2 pokémons que tengan al menos nivel y tipo
  * @return  El t_pokemon* del pokémon perdedor
  */
  t_pokemon* pkmn_battle(t_pokemon* first_pokemon, t_pokemon* second_pokemon);

#endif
