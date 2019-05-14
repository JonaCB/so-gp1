# Objetivo
Hacer un spike sobre hilos, semáforos y locks

# Herramientas
+ git
+ gcc

# Conceptos:

+ Hilos
  + Es un proceso ligero que solo cosnta de un stack. Y el código y el heap los comparte con el proceso principal.
  + Pueden ejecutar funciones diferentes.
  
+ Semáforos
  + Es una variable global.
  + Soporta dos operaciones
    ++ Incrementar (sem_post) siempre incrementa en uno.
    ++ Decrementar (sem_wait) si el valor del semáforo es mayor que 0 decrementa, si es igual que cero se suspende
  + Controlar acceso a recursos
+ Lock
  + Es una variable global.
  + Soporta dos operaciones
    ++ lock (bloqueo) adquirir el lock. Si el lock ya está tomado, el hilo/proceso se suspende.
    ++ unlock (desbloquear) liberar el lock.
  + Secciones críticas.
  
# ¿Qué aprendí?
+ Cómo funcionan los hilos
+ cómo se instancian programas para crear hilos
+ Cuáles son los beneficios de usar multithreading en un sistema
# URL del commit
https://github.com/JonaCB/so-gp1/commit/7aeec7322d74aa3ac340f0f8ad0ae9ae59f2e9a5
    
