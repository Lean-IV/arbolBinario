Este trabajo presenta la implementación de recorridos secuenciales y concurrentes (PreOrder, InOrder y PostOrder) en un árbol binario de búsqueda, utilizando la biblioteca pthread.h para gestionar la concurrencia.
Se desarrolla un generador de árboles con datos aleatorios únicos y se evalúa el rendimiento mediante funciones artificiales.
La comparación entre ambas versiones se realiza midiendo el tiempo de ejecución con clock() en árboles de diferentes tamaños.
Se controla la cantidad de hilos en ejecución de forma adaptativa según los núcleos disponibles. 
La estructura de datos se encapsula mediante getters y setters para asegurar buenas prácticas de diseño modular.
El algoritmo concurrente fue desarrollado por el autor como parte del trabajo práctico final de Programación Concurrente.
