#include <stdio.h>
#include <stdlib.h>
#include "filaDePrioridade.h"
#include "fila.h"
#include "no.h"

void enfileiraP(int item, int prioridade, fila *filaP) {
	if(vazia(filaP)) {
		enfileira(item, prioridade, filaP);
	} else {
		fila *filaAuxiliar = criaFila();
		int posicao = 0;
		while(!vazia(filaP)) {
			if(filaP->cabeca->prioridade < prioridade) {
				posicao++;
			}
			enfileira(filaP->cabeca->item, filaP->cabeca->prioridade, filaAuxiliar);
			desenfileira(filaP);
		}
		while(!vazia(filaAuxiliar)) {
			if(posicao == 0) {
				enfileira(item, prioridade, filaP);
			}
			enfileira(filaAuxiliar->cabeca->item, filaAuxiliar->cabeca->prioridade, filaP);
			desenfileira(filaAuxiliar);
			posicao--;
		}
		if(posicao == 0) {
			enfileira(item, prioridade, filaP);
		}
	}
}
