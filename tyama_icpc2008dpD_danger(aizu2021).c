D[100][100],F[100],I=1<<29,N,M,L,K,A,H,i,j,k;
W(){for(k=0;k<N;k++)for(i=0;i<N;i++)for(j=0;j<N;j++)if(D[i][j]>D[i][k]+D[k][j])D[i][j]=D[i][k]+D[k][j];}
main(l){for(;scanf("%d%d%d%d%d%d",&N,&M,&L,&K,&A,&H),N;){
	for(memset(D,i=0,sizeof(D));i<N;i++)for(j=i+1;j<N;j++)D[i][j]=D[j][i]=I;
	for(memset(F,i=0,sizeof(F));i<L;i++)scanf("%d",&j),F[j]=1;
	F[A]=F[H]=1;
	for(i=0;i<K;i++)scanf("%d%d%d",&j,&k,&l),D[j][k]=D[k][j]=l;
	W();
	for(i=0;i<N;i++)for(j=0;j<N;j++)if(!F[i]||!F[j]||D[i][j]>M)D[i][j]=I;
	W();
	l=D[A][H];
	printf(l==I?"Help!\n":"%d\n",2*l-(l<M?l:M));
}exit(0);}