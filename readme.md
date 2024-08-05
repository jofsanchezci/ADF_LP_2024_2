
# Ejercicio: Implementación de un Autómata Finito Determinista (DFA) en C

## Objetivo
Desarrollar un programa en lenguaje C que implemente un Autómata Finito Determinista (DFA). El autómata debe ser configurable a través de un archivo de texto que especificará los estados, el alfabeto, las transiciones, el estado inicial y los estados de aceptación.

## Descripción del problema

Un DFA está definido por una 5-tupla (Q, Σ, δ, q0, F) donde:
- **Q**: Conjunto finito de estados.
- **Σ**: Conjunto finito de símbolos (alfabeto).
- **δ**: Función de transición (Q × Σ → Q).
- **q0**: Estado inicial (q0 ∈ Q).
- **F**: Conjunto de estados de aceptación (F ⊆ Q).

## Archivo de Configuración

El archivo de texto de configuración tendrá el siguiente formato:

1. Primera línea: conjunto de estados (Q), separados por comas.
2. Segunda línea: alfabeto (Σ), separado por comas.
3. Tercera línea: estado inicial (q0).
4. Cuarta línea: estados de aceptación (F), separados por comas.
5. Las siguientes líneas: transiciones en el formato `estado_actual,símbolo,estado_siguiente`.

### Ejemplo de archivo de configuración

```
q0,q1,q2
a,b
q0
q2
q0,a,q1
q1,b,q2
q2,a,q0
q2,b,q1
```

## Requisitos del Programa

1. **Lectura del Archivo de Configuración**:
   - Utiliza funciones de C para abrir y leer el archivo de configuración.
   - Extrae los estados, alfabeto, estado inicial, estados de aceptación y transiciones.
   - Guarda esta información en estructuras de datos adecuadas.

2. **Implementación del DFA**:
   - Define estructuras para representar los estados, transiciones y el DFA en general.
   - Implementa la función de transición que toma un estado y un símbolo, y devuelve el estado siguiente.

3. **Procesamiento de la Cadena de Entrada**:
   - Solicita al usuario que introduzca una cadena.
   - Procesa la cadena carácter por carácter utilizando la función de transición.
   - Al final de la cadena, verifica si el estado actual es uno de los estados de aceptación.

4. **Salida del Programa**:
   - Muestra un mensaje indicando si la cadena fue aceptada o rechazada.

## Consideraciones Adicionales
- Maneja errores de lectura del archivo.
- Valida que las transiciones especificadas en el archivo de configuración sean correctas.
- Asegúrate de liberar cualquier memoria dinámica utilizada.

## Ejemplo de Ejecución

```
Ingrese el nombre del archivo de configuración: config.txt
Ingrese la cadena de entrada: abab

Resultado: La cadena fue aceptada.
```

## Puntos de Evaluación

1. Corrección y robustez en la lectura del archivo de configuración.
2. Correcta implementación de la función de transición.
3. Precisión en la evaluación de la cadena de entrada.
4. Calidad del código (estructuración, comentarios, manejo de errores).

## Carpeta AFD
1. En la carpeta AFD encuentra un ejemplo de la implementación
2. Recomendación: hacer funcionar el ejemplo.
