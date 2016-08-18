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

#include <stdio.h>
#include <stdbool.h>
#include <pkmn/battle.h>


int main(int argc, char **argv) {
  t_pokemon * pikachu = malloc(sizeof(t_pokemon));
  pikachu->type = ELECTRIC;
  pikachu->is_dual_type = false;
  pikachu->level = 25;
  t_pokemon * groundon = malloc(sizeof(t_pokemon));
  groundon->type = GROUND;
  groundon->second_type = FIRE;
  groundon->is_dual_type = true;
  groundon->level = 24;
  printf("Tipo: %d\n", pkmn_battle(pikachu, groundon)->type);
  free(pikachu);
  free(groundon);
  return 0;
}