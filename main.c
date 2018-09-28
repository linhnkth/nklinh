#include <stdio.h>
#include <stdlib.h>

int conghaiso(int a, int b){
    return a + b;
}
int hieuhaiso(int a, int b){
    return a - b;
}
int tichhaiso(int a, int b){
    return a * b;
}

float thuonghaiso(int a, int b){
    if(b==0){
        printf("khong the chia cho 0");
        exit(1);
    }
    return(float) a / b;
}
void taoMenu(){
    printf("lua chon phep tinh: \n");
    printf("1. phep cong. \n");
    printf("2. phep tru. \n");
    printf("3. phep nhan. \n");
    printf("4. phep chia. \n");
    printf("5. thoat chuong trinh. \n");
    printf("nhap lua chon cua ban (1|2|3|4|5): \n");
}


int main() {
//    yeu cau ng dung nhap 2 so.
//    cho phep ng dung lua chon phep tinh.
//    lua chon phai la: +,-,*,/
//   int a, b;
//   printf("nhap so t1: \n");
//   scanf("%d", &b);
//   printf("nhap so t2: \n");
//   scanf("%d", &b);
//   // gerchar(); //stdin
//   fgetc(stdin);
//   // tflush(stdin);
//    char choice;
//    printf("enter your choice(+,-,*,/: ");
//    scanf ("%c", &choice);
//    switch (choice) {
//        case '+':
//            printf("do add");
//            break;
//        case '-':
//            printf("do sub");
//            break;
//        case '*':
//            printf("do no");
//            break;
//
//        default:
//            printf("wrong turn.");
//            return 0;
//
//
//    }

 int a, b, luachon;
 while(1==1) {
     taoMenu();
     scanf("%d", &luachon);
     printf("vui long nhap so thứ nhat: ");
     scanf("%d", &a);
     printf("vui long nhap so thu hai: ");
     scanf("%d", &b);

     scanf("%d", &luachon);
     switch (luachon) {
         case 1:
             printf("tong hai so %d và %d là %d", a, b, conghaiso(a, b));
             break;
         case 2:
             printf("hieu hai so %d và %d là %d", a, b, hieuhaiso(a, b));
             break;
         case 3:
             printf("tich hai so %d và %d là %d", a, b, tichhaiso(a, b));
             break;
         case 4:
             printf("thuong hai so %d và %d là %.2f", a, b, thuonghaiso(a, b));
             break;
         case 5:
             printf("hen gap lai");
             exit(1);
         default:
             printf("lua chon sai");
             break;
     }
     printf("\n");
 }
         return 0;

     }
