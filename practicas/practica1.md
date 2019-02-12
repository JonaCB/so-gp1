## Objetivo
Crear dos llamadas a sistema con sus respectivos comandos para apagar y reiniciar.

## Herramientas

make

gcc

git

## Conceptos
1) Llamadas a sistema

+ Se usan para acceder al HW
+  Desde el comando, son una interrupción
+  Desde el Kernel son el código del HW específico

2) Modo kernel
+ Bit que se activa para acceder al HW
+ Se prende cuando se ejecuta el kernel

3) Interrupciones
+ Como el HW interactúa con el CPU

4) Interrupciones vía software (trap)
+ Software comunica con el kernel, SW --> CPU --> KERNEL

## Que aprendí
Que se debe hacer llamadas al sistema para ejecutar un comando de sistema. En este caso se genera una interrupcion que soluciona el Sistema Operativo 
Cómo se da de alta una llamada al sistema y los files que se tienen que editar para esto mismo

##URL del commit
https://github.com/JonaCB/so-gp1/commit/63133a59bbf61362d1dc495b08198ef74cbe194f
