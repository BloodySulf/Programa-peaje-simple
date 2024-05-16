<h1>Ejercicio Control de Peajes</h1>
<p>Se desea efectuar un programa para una estación de peaje.</p>
<p>El programa deberá solicitar al operador de la cabina de peaje la categoría del vehículo, el día de la 
semana, el horario, y el importe de dinero entregado por el conductor del vehículo.</p>
<p>- Categorías de vehículo: moto, auto, camioneta y camión.</p>
<p>- Días de la semana: 1 (lunes), 2 (martes), 3 (miércoles), 4 (jueves), 5 (viernes), 6 (sábado), 7 
(domingo).</p>
<p>- Horario: a (pico), b (no pico)</p>
<p>- Importes a cobrar:
</p>

| Categoria del vehiculo | Valor base de calculo | Lunes a Viernes horario pico | Lunes a viernes horarios no pico|
| ---                    | ---                   | ---                          | ---                             |
| Moto                   |  5                    |   +%20                       |    -%20                         |
| Auto                   | 10                    |   +%20                       |    -%20                         |
| Camioneta              | 15                    |   +%20                       |    -%20                         |      
| Camion                 | 20                    |   +%20                       |    -%20                         |

<p></p>

<p>El programa le deberá devolver al operador de la cabina de peaje el importe a cobrar (dependiendo 
de la categoría del vehículo, del día de la semana y del horario), y el vuelto a entregar al conductor 
del vehículo (dependiendo del importe de dinero entregado por el conductor del vehículo). 
Luego de cada venta, el programa debe preguntarle al operador si desea continuar vendiendo ó no.</p>
<p>Notas:</p>
<p>- El importe a cobrar será obtenido por el programa principal a través una función que reciba 
el valor base del cálculo, el día, y el horario.</p>
<p>- El vuelto será obtenido por el programa principal a través de una función que reciba el 
importe a cobrar y el importe de dinero entregado por el conductor del vehículo.</p>
<p>- Para informar el importe a cobrar y el vuelto se debe efectuar mediante una función que 
primero limpie la pantalla y luego los informe.</p>
Todos los mensajes que se muestren por pantalla deben estar prolijamente ordenados y distribuidos.
Cuando el operador decida terminar de vender, el programa deberá informar lo siguiente: 
<p>Cantidad de ventas de categoría auto en horario pico.</p>
<p>Total de pases vendidos y total recaudado.</p>
<p>No se pide:</p>
<p>Validación de entradas, asumimos que el operador ingresa todos los datos de forma correcta.</p>
