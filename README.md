# PILagrange
Librería Interpolación de lagrange

Pasos para la compilación y la ejecución:
gcc -c -Wall -Werror -fpic libinvops.c
gcc -shared -o libinvops.so libinvops.o
nm -a libinvops.so
gcc -L/home/ubuntu/pi_io/libgrafosbi -Wall -o ejecutable main.c -linvops
sudo cp libinvops.so /usr/lib
sudo ldconfig
./ejecutable
