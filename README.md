# ECU_Hito3
Desarrollo de una simulación de ECU utilizando POO y otras herramientas

#Señales: 
Generación de señales
Estrucutra de señales
Rangos de señales
Validación de señales
ostrar señales

Ruido

├─ La generación de ruido viene según el tipo de sensor :
   
Señal:
RPM - Limites: 2,000 a 7,000 RMP - Variación: +-20
Velocidad - Limites: 0 a 300 - Variación: 1-3
Temperatura - Limits: -60 a 340 - variación: 1-3
Bateria - Limites: 8 a 14 - Variación: 0.1 - 0.5 
Presion aceite - Limites: 0 a 2.6 - Variación: 0.1 - /0.2


# Estados: 
Estados
Condiciones de estados
Mostrar estados

# Estructura de archivos: 
include
src
Uso de cmake para compilación
Modular
Opoeraciones en POO

# Clases: 
## Sensor
### Atributos publicos: 
Nombre
Unidad
Valor
Minimo
Máximo
timeout

### Metodos publicos: 
Generar valor()
Actualizar valor()
obtener informacion()

## Dashboard
### Metodos publicos
Mostrar dashboard

## ECU Gateway
### Atributos privados: 
Tabla definida de rangos
Rango de sensores
Timeout = 500ms
### Metodos publicos: 
validar señal (#argumento ingreso de clase) 
### Atributos publicos: 
Estado de sensores ['nombre de sensor', estado]

## Ecu Control:
### Atributos Publicos: 
estados de la ecu // init, test, operational, etc. 

### Métodos publicos 
Actualizar estado




# Lista de trabajo: 
1.-Creación de la clase sensor - Que contenga las señaes 


2.- Creación de la clase simulator - Que funcione como el generador de valores con los ruidos especificos para cada sensor. 
    2.1 - Encapsulación de la función de random sobre la clase simulator. 

3.- Implementación de Cmake file para encontrar los headers 


# Ahoramismo: 
    Practicando la instanciación y asignación de valores de sensores usando las clases  - ok
    Buscar hacer el make file y proceder con los headers. (3.0) - WIP

