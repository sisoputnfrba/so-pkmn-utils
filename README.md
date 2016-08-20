# Sisop Pokémon Comparator
=================

En este repositorio encontrarán el comparador de pokémons para poder efectuar decidir el resultado de una batalla entre ellos.

## Biblioteca compartida
La biblioteca cuenta con dos grandes funcionalidades:

1. `so_compare_pokemon`: El *comparador* propiamente, que dados 2 pokémons, devuelve un valor cuantificable de cual del resultado de la batalla
2. `????*factory*`: TBA

### Guía de Instalación
1. Instalar la biblioteca compartida *commons* ([Guía de Instalación](https://github.com/sisoputnfrba/so-commons-library#gu%C3%ADa-de-instalaci%C3%B3n))
2. `cd parser`: Ir al directorio de la biblioteca compartida
3. `make all`: Compilar la biblioteca compartida *(de no utilizar nuestro makefile, recordar linkear con la biblioteca de commons)*
4. `ls build/`: Revisar que exista el archivo *libparser-ansisop.so* dentro del directorio `build/`
5. `sudo make install`: Instala la biblioteca, para que todos tengan acceso a la misma

   `sudo make uninstall`: Desinstala la biblioteca

### Guía para el uso:
Linkear con `-lpkmn-battle-comp`, o lo que es lo mismo, desde Eclipse:

1. Click derecho sobre el proyecto en el *Proyect Explorer*
2. *Properties*
3. *C/C++ General*
4. *Paths and Symbols*
5. *Libraries*
6. *Add...*
7. Escribir `pkmn-battle-comp` (sin el *-l* delante)

Para usarla en un .c/.h debería incluirse de la siguiente forma: `pkmn/comparator.h`

Por ejemplo:

```
#include <pkmn/comparator.h>
```

## Ejemplo de implementación
1. `cd test`: Ir al directorio del ejemplo
2. `make all`: Compilar el ejemplo (puede requerir permisos de super usuario, revisar si se muestra el mensaje 'Permiso Denegado')
3. `ls build/`: Revisar que exista el archivo *so-pkmn-battle-comparator-test* dentro del directorio `build/`
4. `./build/so-pkmn-battle-comparator-test`: Ejecutar el programa recien compilado

Se espera el siguiente output por pantalla:

```
========Battle Royale!========
Primer Pokemon: Pikachu[Electric/] Nivel: 30
Segundo Pokemon: Rhyhorn[Ground/Rock] Nivel: 6
El Ganador es: Rhyhorn
```