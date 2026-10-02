#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int usage[MAX_SIZE] = {120, 250, 180, 95, 310};
	int n = 5;
	int choice;
	
	do{
		printf("==============================================");
		printf(" \nCHUONG TRINH QUAN LY DIEN NANG SAO MAI\n");
		printf("==============================================\n");
		printf("1. Them chi so dien tieu thu\n");
		printf("2. Sua chi so dien tieu thu\n");
		printf("3. Xoa chi so dien tieu thu\n");
		printf("4. Tim Kiem chi so dien tieu thu\n");
		printf("0. Thoat Chuong Trinh\n");
		printf("==============================================\n");
		printf("Vui long nhap lua chon cua ban (0-4): ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:{
				int pos = 1;
				int value;
				
				if (n == MAX_SIZE){
					printf("Mang da day, khong the them");
					break;
				}
					
				printf("Nhap gia tri can them(value): ");
				scanf("%d", &value);
					
				printf("Nhap vi tri can them(pos): ");
				scanf("%d", &pos);
					
				if (pos < 1 || pos > n + 1){
					printf("Vi tri chen khong hop le");
					break;
				}
					
				for (int i = n; i >= pos; i--){
					usage[i] = usage[i - 1];
				}
					
				usage[pos - 1] = value;
				n++;
					
				printf("Mang sau khi them: ");
				for (int i = 0; i < n; i++){
					printf("%d ", usage[i]);
				}
					
				printf("\n");
						
				break;
			}
			
			case 2:{
    			int pos, newValue;

   				printf("Nhap vi tri can sua: ");
    			scanf("%d", &pos);

    			printf("Nhap gia tri moi: ");
    			scanf("%d", &newValue);

    			if (pos < 1 || pos > n) {
        			printf("Vi tri sua khong hop le!\n");
        			break;
    			}

				if (newValue < 0) {
					printf("Chi so dien khong hop le!\n");
					break;
    			}

    			usage[pos - 1] = newValue;

			    printf("Mang sau khi sua: ");
			    for (int i = 0; i < n; i++) {
			        printf("%d ", usage[i]);
			    }
			    printf("\n");
			    
				break;
			}
			
	
			case 3: {
    			int pos;

			    if (n == 0) {
			        printf("Mang rong, khong the xoa!\n");
			        break;
			    }

			    printf("Nhap vi tri de xoa: ");
			    scanf("%d", &pos);
			
			    if (pos < 1 || pos > n) {
			        printf("Vi tri xoa khong hop le!\n");
			        break;
			    }
			
			    for (int i = pos - 1; i < n - 1; i++) {
			        usage[i] = usage[i + 1];
			    }
			
			    n--;
			
			    printf("Mang sau khi xoa: ");
			    for (int i = 0; i < n; i++) {
			        printf("%d ", usage[i]);
			    }
			    printf("\n");
			
			    break;
			}
			
			case 4: {
			    int target;
			    int count = 0;
			
			    printf("Nhap gia tri can tim: ");
			    scanf("%d", &target);
			
			    printf("Tim thay tai vi tri: ");
			
			    for (int i = 0; i < n; i++) {
			        if (usage[i] == target) {
			            printf("%d ", i + 1);
			            count++;
			        }
			    }
			
			    if (count == 0) {
			        printf("\nKhong tim thay gia tri trong mang!\n");
			    } else {
			        printf("\nTong so lan xuat hien: %d\n", count);
			    }

				break;
			}
			
			case 0: {
				printf("Thoat chuong trinh.......");
				break;
			}
			default:{
				printf("Lua chon khong hop le!!!\n");
				break;
			}

		}
			
	}while(choice != 0);
	return 0;
}
