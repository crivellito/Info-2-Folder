//En este caso se debe crear la biblioteca estática con el comando:

ar

ar cr 
//crea el archivo e inserta miembros (reemplaza si ya existen)

ar cr libsaludo.a hola.c adios.c  
//Crea la biblioteca libsaludo.a con los binarios de esos codigos


//luego se los linkea con el main o programa que hace uso de esas funciones hola y adios con:


gcc -static saludo.c /libsaludo.a

Especificando que el liqueo es estático y la direccion en la que la biblioteca se encuentre
