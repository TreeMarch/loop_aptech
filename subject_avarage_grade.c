#include <stdio.h>

int subject_avarage_grade(){
//    int main () {
        char subject[50];
        float grade ;
        char answer;
        float total = 0;
        int count = 0;

//        printf("nhap mo hoc cua ban : ");
//        scanf("%s", &subject);
//        printf("nhap diem cua ban : ");
//        scanf("%f", &grade);

        do {
            printf("nhap mo hoc cua ban : ");
            scanf("%s", subject);
            printf("nhap diem cua ban : ");
            scanf("%f", &grade);
            total += grade;
            count++;
            printf("ban co muon tiep tuc hay khong (y/n) : ");
            scanf(" %c", &answer);

        }
        while(answer == 'Y' || answer == 'y');

            if(count > 0){
                double  avarage = total/count;
                printf("diem trung binh cua ban la : %.2lf", avarage);
            }
            else{
                printf("khong co mon hoc nao duoc nhap vao.\n");

            }
    return  0;

}
//}