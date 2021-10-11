#define MAXPILHA 30

struct TpPilhaM2
{
	int BASE[MAXPILHA], TOPO[MAXPILHA], QTP,cont[10];
	char Pilha[MAXPILHA];
};

//Operações Associadas

void Inicializar(TpPilhaM2 &PM, int QTP)
{
	int QtdeElem = MAXPILHA / QTP;
	
	PM.cont[0]=0;
	PM.QTP = QTP;
	PM.BASE[0] = 0;
	PM.TOPO[0] = -1;	
	for(int i = 1 ; i < QTP ; i++)
	{
		PM.BASE[i] = PM.BASE[i - 1] + QtdeElem;
		PM.TOPO[i] = PM.TOPO[i - 1] + QtdeElem;
		PM.cont[i]=0;
	}			
}

char Vazia(TpPilhaM2 PM, int NP)
{
	return PM.TOPO[NP] == PM.BASE[NP] - 1;
}

char Cheia(TpPilhaM2 PM, int NP)
{
	return PM.TOPO[NP] == PM.BASE[NP] + PM.QTP - 1;
}

void Inserir(TpPilhaM2 &PM, int NP, char Elem)
{
	PM.cont[NP]++;
	PM.Pilha[++PM.TOPO[NP]] = Elem;
}

char Retirar(TpPilhaM2 &PM, int NP)
{
	PM.cont[NP]--;
	return PM.Pilha[PM.TOPO[NP]--];
}

char ElemTopo(TpPilhaM2 PM, int NP)
{
	return PM.Pilha[PM.TOPO[NP]];
}

void Exibe(TpPilhaM2 PM, int NP)
{
	while(!Vazia(PM,NP))
		printf("%c\n",Retirar(PM,NP));
}

