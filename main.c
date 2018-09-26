#include <stdio.h>
void sayHello(){
    printf("hello");

}
int conghaiso(int a, int b){
    return a + b;
}
int hieuhaiso(int a, int b){
    return a - b;
}
int tichhaiso(int a, int b){
    return a * b;
}
int thuonghaiso(int a, int b){
    return a / b;
}
int main() {
    int a, b, ketqua, luachon;
    printf("vui long nhap so thứ nhat: ");
    scanf("%d", &a);
    printf("vui long nhap so thu hai: ");
    scanf("%d", &b);
    printf("lua chon phep tinh: \n");
    printf("1. phep cong. \n");
    printf("2. phep tru. \n");
    printf("3. phep nhan. \n");
    printf("4. phep chia. \n");
    printf("nhap lua chon cua ban (1|2): \n");
    scanf("%d", &luachon);
    //
    if (luachon == 1) {
        //
        ketqua = conghaiso(a, b);
    printf("tong cua %d và %d là %d", a, b, ketqua);
    } else if(luachon==2) {
        //
        printf("chon phep tru.");
        ketqua = hieuhaiso(a, b);
        printf("hieu cua %d và %d là %d", a, b, ketqua);
    } else if(luachon==3){
        //
        printf("chon phep nhan.");
        ketqua = hieuhaiso(a, b);
        printf("tich cua %d và %d là %d", a, b, ketqua);
    } else if(luachon==4){

    }
    else {
        printf("lua chon sai.");
    }


    return 0;
}