typedef struct No no;
struct No {
	int item;
	int prioridade;
	no *proximo;
};

no* criaNo(int item, int prioridade);
