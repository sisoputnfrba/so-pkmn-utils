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
#include <pkmn/factory.h>
#include <pkmn/battle.h>


int main(int argc, char **argv) {
  t_pkmn_factory* pokemon_factory = create_pkmn_factory(); 
  t_pokemon * pikachu = create_pokemon(pokemon_factory, "Pikachu", 30);
  t_pokemon * rhyhorn = create_pokemon(pokemon_factory, "Rhyhorn", 6);

  printf("========Battle Royale!========\n");
  printf("Primer Pokemon: %s[%s/%s] Nivel: %d\n", 
    pikachu->species, pkmn_type_to_string(pikachu->type), 
    pkmn_type_to_string(pikachu->second_type), pikachu->level);
  printf("Segundo Pokemon: %s[%s/%s] Nivel: %d\n",
    rhyhorn->species, pkmn_type_to_string(rhyhorn->type),
    pkmn_type_to_string(rhyhorn->second_type), rhyhorn->level);

  t_pokemon * winner = pkmn_battle(pikachu, rhyhorn);

  printf("El Ganador es: %s\n", winner->species);

  free(pikachu);
  free(rhyhorn);
  destroy_pkmn_factory(pokemon_factory);
  return 0;
}