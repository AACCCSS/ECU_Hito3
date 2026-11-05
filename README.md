# ECU_Hito3
Desarrollo de una simulación de ECU utilizando POO y otras herramientas

#Señales: 
Generación de señales
Estrucutra de señales
Rangos de señales
Validación de señales
ostrar señales
Ruido

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

