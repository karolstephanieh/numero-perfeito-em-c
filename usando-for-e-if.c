#include <stdio.h>

int main (){
	
	int n, i, soma;
	
	printf ("Insira um número:");
	scanf ("%d", &n);
	
	soma = 0;
		
	for (i = 1; i <= n/2; i++){
		
		if (n%i == 0){
		soma += i;
		}
	}
	
	if (soma == n){
		printf ("O número inserido é perfeito");
	} else {
		printf ("O número inserido não é perfeito");
	}
	
	return 0;
}

// lembrando que sem o locale, o programa não vai ler as acentuações, aqui está apenas para demonstração didática
