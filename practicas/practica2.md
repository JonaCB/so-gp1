## Objetivo
Modificar el programa init para imprimir un mensaje de bienvenida.
Modificar al programa sh para ejecutar el programa anterior.

## Herramientas

make

gcc

git

## Conceptos

1) Proceso

+ Instancia de un programa
+ Está compuesto de 3 partes:
++ stack: variables y funciones. Está limitado. Crece de arriba hacia abajo.
++ heap: área de memoria dinámica = RAM + SWAP
++ código: segmentado, ie es una parte del código.

+ Tiene estados

+ Se crean mediante dos llamadas a sistema:
++ fork: clone
++ exec: cambia código

+ Hay un proceso padre
++ init

## Que aprendi
+ Cómo funciona un parser dentro del sistema operativo
+ La importancia del wait en el main del sh.c
+ Como se ejecutan procesos hijos
+ Cómo se copia entre dos buffers

## URL del commit
https://github.com/JonaCB/so-gp1/commit/c72cf9de27355410e88a97634ea3afc3f73899a7
