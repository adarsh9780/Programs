#include<stdio.h>

void linkfloat();
int main(){

	struct book{
		char name;
        float price;
        int pages;
	};

    struct book b[2];
    int i;

    for(i=0; i<=2; i++){
        printf("Enter the name, price, pages of book in same order\n");
        scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }

    for(i=0; i<=2; i++){
        printf("%c %f %d\n", &b[i].name, &b[i].price, &b[i].pages);
    }

    return 0;
}

void linkfloat(){

    float a=0, *b;
    b = &a;
    a = *b;
}