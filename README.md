# PILagrange
Librería Interpolación de lagrange

Pasos para la compilación y la ejecución:
gcc -c -Wall -Werror -fpic libpilagrange.c
gcc -shared -o libpilagrange.so libpilagrange.o
gcc -L/home/ubuntu/PILagrange/libshared -Wall -o ejecutable main.c -lpilagrange
sudo cp libpilagrange.so /usr/lib
sudo ldconfig
./ejecutable
