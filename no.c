#include <stdio.h>
#include <stdlib.h>
#include "no.h"

no* criaNo(int item, int prioridade) {
	no *novoNo = (no*)malloc(sizeof(no));
	novoNo->item = item;
	novoNo->prioridade = prioridade;
	novoNo->proximo = NULL;
	return novoNo;
}
