#include <stdio.h>

//penggunaan struct untuk data hp
struct data_hp{
	char namahp[50];
	int harga;
};
typedef struct data_hp hp;

int main() {
	//inisialisasi variabel
	int y,z;
	hp list[y];	
	
	//input banyaknya data hp
	printf("Masukkan banyaknya data hp yang akan diinput : ");
	scanf("%d", &y);
	
	//proses input data hp
	for(z=0;z<y;z++){
		printf("\n\nList HP ke - %d\n",z+1);
		printf("\n\n #Nama Handphone : ");
		scanf(" %[^\n]%*c",&list[z].namahp);
		printf("\n\n #Harga : ");
		scanf("%d",&list[z].harga);
	}
	
	//hasil inputan data hp
	printf("\nDaftar List HP : \n\n");
	
	for(z=0;z<y;z++){
		printf("%d. \t%s = \t%d\t \n",z+1,list[z].namahp,list[z].harga);
	
	}
}
