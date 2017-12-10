#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m=0,i,t;
	int *a;
    scanf("%d",&n);
    a = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0,t=0;
	while(i<n){
		if(a[t]>=a[i]){
			i++;
		}
		else{
			t++;
		}
	}
	t = a[t];
	for(i=0;i<n;i++){
		if(t == a[i]){
			m++;
		}
	}

	printf("%d",m);
	return 0;
}