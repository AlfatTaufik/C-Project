#include <stdio.h>

int main(void) {
    int num1, num2, denom1, denom2;
//    int result_num, result_denom;
    double a, b;
    char ch;
    
    a = 0.0f; 
	b = 0.0f;
    printf("Masukan pecahan pertama i/j :");
    scanf("%d/%d", &num1, &denom1);
    printf("Masukan pecahan kedua i/j :d");
    scanf("%d/%d", &num2, &denom2);
    
    printf("Masukan operasi yang ingin anda lakukan (+, -, /, * )");
    ch = getchar();
    while(getchar() != '\n'){
    	
    	ch = getchar();
    	a = (double)num1/denom1;
    	b = (double)num2/denom2;
    	switch (ch){
    		case '+' :
    			printf("Hasil penjumlahan keduanya adalah : %lf\n", a + b);
				break;
			case '-' :
				printf("Hasil pengurangan keduanya adalah : %lf\n", a - b);
				break;
			case '/' :
				printf("Hasil pembagian keduanya adalah : %lf\n", a / b);
				break;
			case '*' :
				printf("Hasil perkalian keduanya adalah : %lf\n", a * b);
				break;
			default :
				printf("Operasi tidak benar");
				break;
			}
		}
    return 0;
	}
