# Sisop Pokémon Utils
=================

En este repositorio encontrarán varias utilidades para crear y efectuar batallas con "Pokémons", diseñado para el TP del 2° Cuatrimestre del 2016.

## Biblioteca compartida
La biblioteca cuenta con dos grandes funcionalidades:

1. `battle.h`: El *el simulador de batalla* propiamente, que dados 2 pokémons, devuelve el pokémon victorioso de los que se pasaron por parámetro
2. `factory.h`: Un conjunto de funciones para construir Pokémons de forma sencilla.

### Guía de Instalación
1. Instalar la biblioteca compartida *commons* ([Guía de Instalación](https://github.com/sisoputnfrba/so-commons-library#gu%C3%ADa-de-instalaci%C3%B3n))
2. `cd src`: Ir al directorio de la biblioteca compartida
3. `make all`: Compilar la biblioteca compartida *(de no utilizar nuestro makefile, recordar linkear con la biblioteca de commons)*
4. `ls build/`: Revisar que exista el archivo *libpkmn-battle.so* dentro del directorio `build/`
5. `sudo make install`: Instala la biblioteca, para que todos tengan acceso a la misma

   `sudo make uninstall`: Desinstala la biblioteca

### Guía para el uso:
Linkear con `-lpkmn-battle`, o lo que es lo mismo, desde Eclipse:

1. Click derecho sobre el proyecto en el *Proyect Explorer*
2. *Properties*
3. *C/C++ General*
4. *Paths and Symbols*
5. *Libraries*
6. *Add...*
7. Escribir `pkmn-battle` (sin el *-l* delante)

Para usarla en un .c/.h debería incluirse de la siguiente forma: `pkmn/battle.h` o `pkmn/factory.h`

Por ejemplo:

```
#include <pkmn/battle.h>
#include <pkmn/factory.h>
```

## Ejemplo de implementación
1. `cd test`: Ir al directorio del ejemplo
2. `make all`: Compilar el ejemplo (puede requerir permisos de super usuario, revisar si se muestra el mensaje 'Permiso Denegado')
3. `ls build/`: Revisar que exista el archivo *so-pkmn-battle-test* dentro del directorio `build/`
4. `./build/so-pkmn-battle-test`: Ejecutar el programa recien compilado

Se espera el siguiente output por pantalla:

```
El Pokémon MissingNo no existe! El puntero de retorno de la factory fue: (nil)
========Batalla!========
Primer Pokemon: Pikachu[Electric/] Nivel: 30
Segundo Pokemon: Rhyhorn[Ground/Rock] Nivel: 6
El Perdedor es: Pikachu
```
