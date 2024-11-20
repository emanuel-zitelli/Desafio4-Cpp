# Implementación de los Principios SOLID en C++

## Descripción general del ejercicio y propósito.

El objetivo de este proyecto es aplicar los principios SOLID en el diseño de un sistema en C++. A través de ejemplos prácticos, se ilustra cómo cada principio contribuye a un código más limpio, fácil de mantener y preparado para futuros cambios. El proyecto está diseñado para mostrar cómo una buena arquitectura puede resolver problemas comunes en desarrollos a largo plazo.

## Explicación de cada principio SOLID, cómo se implementó y cómo mejora el diseño del software.
1. Single Responsibility Principle (SRP)
Cada clase debe tener una única responsabilidad.

Implementación: La clase "Vehiculo" se encarga exclusivamente de almacenar información básica de un vehículo, como marca y modelo. Y la clase "serviciosVehiculo" se encarga de llevar a cabo la accion de cargar combustible. Cada clase tiene una tarea en especifica, sin tareas adicionales. Hacen lo que su nombre indica y nada más.

Beneficio: Facilita la modificación y mantenimiento de funcionalidades específicas sin afectar otras partes del sistema.

2. Open/Closed Principle (OCP)
Las clases deben estar abiertas a la extensión, pero cerradas a la modificación.

Implementación: Se utiliza una jerarquía de clases basada en herencia y métodos virtuales. En este caso se extiende la clase vehiculo al hacer clases "hijas" lamadas Auto, Moto y Camion. Nuevas clases, que representen otros tipos de vehiculo, pueden añadirse sin necesidad de modificar el código base en Vehiculo.

Beneficio: Permite la evolución del sistema sin introducir errores en el código existente.

3. Liskov Substitution Principle (LSP)
Las clases derivadas deben ser reemplazables por sus clases base sin alterar la funcionalidad.

Implementación: Las clases "hijas" Auto, Moto y Camion son utilizadas por métodos y funciones que esperan un objeto de tipo "Vehiculo" y de igual manera funciona, ya que son una extensión de esta clase base.

Beneficio: Asegura que funciones o métodos que dependen de las clases base no necesiten cambios al usar implementaciones derivadas.

4. Interface Segregation Principle (ISP)
Las clases no deben ser forzadas a depender de métodos que no utilizan.

Implementación: Se dividen las funcionalidades en interfaces especializadas como "iMovil" (mover) e "iMantenimiento" (gestión de combustible). Cada clase implementa solo las interfaces relevantes. Por ejemplo, un remolque no tiene motor, por lo que no necesita de la interfaz "iMantenimiento"

Beneficio: Reduce la sobrecarga de métodos y asegura que las clases tengan solo lo necesario.

5. Dependency Inversion Principle (DIP)
Las clases de alto nivel no deben depender de clases concretas, sino de abstracciones (interfaces).

Implementación: La clase FlotaControl depende de la interfaz iVehiculoBase en lugar de depender directamente de implementaciones específicas como Camion o Moto.

Beneficio: Permite la flexibilidad para añadir nuevas clases de vehículos sin alterar FlotaControl.

## Desafíos y decisiones tomadas durante la implementación.


**Desafío 1:** Asegurar que cada clase tenga una única responsabilidad y que el sistema sea extensible.
Lo que más tiempo me llevó fue el primer principio. Ya que, según mi visión inicial, ciertas responsabilidades secundarias eran clave, pero realmente extendía la cantidad de tareas de cada clase. Entonces tuve que reordenar cada clase varías veces hasta que conseguí que llevaran a cabo el mínimo de problemas.

**Desafío 2:** Acceder a métodos específicos de las interfaces en objetos de tipo genérico.
Al momento de implementar las interfaces, que fue algo sencillo, me di cuenta que el compilador solo accede a métodos establecidos en la clase base (ya que el vector de vehículos era de tipo "Vehiculo) y debí reordenar el código para que funcione correctamente con **dynamic_cast** (aprendido en el desafío 1 de C++) y poder identificar las herencias que tenía cada clase, y saber a qué métodos podía acceder.

## Guía para ejecutar cada sección del ejercicio y cualquier configuración adicional necesaria.
Para ejecutar cada sección del ejercicio se debe desplazarse a la carpeta que desea probar. Ejecute los siguientes comandos:

"cd carpeta_principio"
"g++ main.cpp functions.cpp -o main"
"./main"

Si luego quiere cambiar de carpeta, vuelva una carpeta atras y repita los comandos anteriores, de la siguiente manera:

"cd .."
