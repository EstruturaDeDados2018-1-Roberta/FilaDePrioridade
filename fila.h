typedef struct Fila fila;
typedef struct No no;
struct Fila {
	no *cabeca;
	no *cauda;
	int tamanho;
};

int vazia(fila* fila);
int tamanho(fila *fila);
fila* criaFila();
void enfileira(int item, int prioridade, fila *fila);
int desenfileira(fila *fila);
int proximo(fila *fila);
