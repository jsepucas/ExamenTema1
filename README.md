# ExamenTema1
https://github.com/jsepucas/ExamenTema1.git


------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Preguntas de opción múltiple: 

1. C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?

Respuesta: d. Todas las anteriores 

2. Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile? :

    Respuesta: b Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación.
   
3. En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?

   Respuesta: b. Variables que almacenan la dirección de otra variable.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Preguntas de desarrollo: 

8. La programación ha adoptado diferentes enfoques a lo largo del tiempo. Explica:
   - ¿Cómo la programación orientada a objetos difiere de la programación procedimental?
   - ¿Cómo C++ brinda soporte para ambos paradigmas?
  
  Respuesta 1: La programación orientada a objetos difiere de la programación procedimaental dado su estructura, donde la POO tiene un estilo que organiza el código 
  como objetos con atributos y métodos que pueden aplicarse a estos y pueden ser heredados por otros objetos, es decir, utiliza objetos para representar datos y 
  metódos. Se destaca a parte de la herencia la encapsulación abstracción y polimorfismo. En cambio, en la programación procedimental se basa en procedimientos los 
  cuales operan sobre datos y aquí contamos con que los datos y las funciones están separadas, el código se escribe como una secuencia de instrucciones y es más fácil  
  entender. 
  
 Respuesta 2: C++ brinda soporte para ambos paradigmas de manera en que C++ admite la programación orientada a objetos mediante clases, encapsulación, herencia, 
 polimorfismo y abstracción, permitiendo modelar entidades. También, soporta la programación procedimental con funciones independientes, variables globales, 
 estructuras de datos simples y control de flujo tradicional, lo que permite un enfoque más lineal y paso a paso para resolver problemas. Esta dualidad posibilita que 
 en C++ se mezclen ambos estilos según sea necesario, aprovechando la robustez de la POO y la simplicidad de la programación procedimental.

9. Las excepciones en C++ tienen un comportamiento específico. Describe:

¿Qué es la propagación de una excepción?
¿Qué ocurre si una excepción lanzada no es capturada por ningún bloque catch?

Respuesta 1: La propagación de una excepcion es cuando una excepción lanzada en un bloque de código no es manejada localmente y se pasa a través de la pila de llamadas buscando un bloque que pueda manejarla, donde si ninguna parte del código recibe la excepción, es posible que el programa de un mensaje de error

Respuesta 2: Si una excepción lanzada no es capturada por ningún bloque catch, el programa puede comportarse de varias maneras, dependiendo del lenguaje de programación y del entorno de ejecución como: Terminación del programa, llamada a un manejador de excepciones predeterminado, propagación de la excepción o estado indefinido

10. La gestión de recursos es un concepto crucial en la programación. Explica:

¿Qué se entiende por "Adquisición de Recursos" en el contexto de C++?
¿Por qué es importante y cómo se relaciona con la gestión de excepciones?

Respuesta 1: En C++, la Adquisición de Recursos se refiere a la obtención de recursos necesarios para un programa. El patrón RAII (Adquisición de Recursos es Inicialización) es una técnica central en C++ para manejar estos recursos. Con RAII, los recursos se adquieren durante la creación de un objeto y se liberan automáticamente cuando el objeto es destruido, así que no se produzcan fugas de recursos, incluso en caso de errores

Respuesta 2: El patrón RAII en C++ es crucial porque maneja la liberación automática de recursos como la memoria y conexiones de archivos, especialmente cuando ocurren excepciones. Esto asegura que los recursos siempre se liberen de manera adecuada, evitando fugas de memoria y otros errores de recursos, lo que hace que el código sea más seguro y fácil de mantener. RAII vincula el ciclo de vida de los recursos al ciclo de vida de los objetos, simplificando así la gestión de excepciones.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Bibliografía: 
   - https://www.programarya.com
   - https://blog-dev.educacionit.com/2018/05/21/programacion-orientada-a-objetos-vs-programacion-estructurada/
   - También he usado ChatGPT y Copilot
------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 
  









