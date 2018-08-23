#!/bin/sh
gcc -c main.c -o main.o
gcc -c filaDePrioridade.c -o filaDePrioridade.o
gcc -c fila.c -o fila.o
gcc -c no.c -o no.o
gcc main.o filaDePrioridade.o fila.o no.o -o executavel
exit
