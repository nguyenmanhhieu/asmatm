//
//  main.c
//  assignment code atm
//
//  Created by Hiếu Hee on 25/06/2022.
//
/*
#include <stdio.h>

int main(){
    int username,password,menu,nguoinhan=022631;
    int nhaplai=0;
    int sodu=1000000,xemsotien,ruttien,chuyentien,soducuoi;
    int sotiencuahieu=2000000;
    do{
        printf("\t\t chao mung ban den ngan hang hieu hee \n");
        printf("\t\t   moi ban nhap username va password: \n");
        printf(" nhap username: ");
        scanf("%d",&username);
        printf("\n nhap password: ");
        scanf("%d", &password);
        if(username==14092001 && password==140901){
            printf("\n dang nhap thanh cong \n");
            do{
                printf("\n moi ban lua chon: \n");
                printf(" 1: xem so tien ");
                printf(" 2: rut tien \n");
                printf(" 3: chuyen tien ");
                printf(" 4: exit \n");
                scanf("%d",&menu);
                switch (menu) {
                    case 1:
                        printf(" so du cua ban la: ");
                        printf(" so du %d: ",sodu);
                        break;
                    case 2:
                        printf("\t\t moi ban rut tien \n" );
                        printf(" nhap so tien muon rut: \n");
                        scanf("%d",&ruttien);
                        sodu=sodu-ruttien;
                        if(ruttien<=sodu){
                            printf(" rut tien thanh cong \n");
                            printf(" so du cua ban la %d",sodu);
                        
                        }
                        else{
                            printf(" so du cua ban ko du \n");
                            printf(" moi ban nhap lai so tien \n");
                        }
                        break;
                    case 3:
                        printf(" nhap so tai khoan nguoi nhan \n");
                        scanf("%d", &nguoinhan);
                        printf(" nguoi nhan: Nguyen Manh Hieu %d \n",nguoinhan);
                        printf(" so du cua Nguyen Manh Hieu la: %d \n", sotiencuahieu);
                        printf(" Nhap so tien can chuyen \n");
                        scanf("%d", &chuyentien);
                        if(chuyentien<=sodu){
                            sodu=sodu-chuyentien;
                            printf(" so du cua ban la %d \n",sodu);
                            printf(" chuyen khoan thanh cong \n");
                            printf(" so du cua Nguyen Manh Hieu la: ");
                            sotiencuahieu=sodu+sotiencuahieu;
                            printf("%d \n",sotiencuahieu);
                        }
                        else
                            printf(" so tien nhap vuot qua so du \n");
                            
                        break;
                    case 4:
                        printf("exit");
                
                }
            }while(menu<4);
            
        }
        else{
            nhaplai++;
            printf(" nhap lai mat khau \n");
        }
    }while(nhaplai<=3);
        printf(" ban da bi khoa tai khoa \n");
    
}
*/
#include <stdio.h>
// khai báo hàm
int loggin(int username, int password);
int withdraw(int tienhientai);
int transfer(int id, int tienhientai);
int check(int tienhientai);
int menu();
int thoat();

// hàm main

int main(){
    int username,password,tienhientai=3000000,id,sodem,i;
char c;
    do{
        printf(" nhap username \n");
        scanf("%d",&username);
        printf(" nhap password \n");
        scanf("%d",&password);
        if (loggin(username, password)==1){
            printf(" ban nhap dung mat khau \n");
        }
        else{
            sodem++;
            printf(" vui long nhap lai mat khau \n");
        }
        }while(sodem<=3);
    
    do{
        menu();
        printf("moi ban lua chon \n");
        scanf("%d",&i);
    
    switch (i) {
        case 1:
           tienhientai = withdraw(tienhientai);
            break;
        case 2:
            tienhientai = transfer(id, tienhientai);
            break;
        case 3:
            tienhientai = check(tienhientai);
            break;
        case 4:
            thoat();
            break;
    }
        printf(" lua chon y hoac Y de tiep tuc: ");
        fflush(stdin);
        c=getchar();
    }while(c=='y'||c=='Y');
      
}

// hàm in giá trị

int loggin(int username, int password){
    if (username==14092001 && password==140901)
         return 1;
    else return 0;
}
int withdraw(int tienhientai){
    int ruttien;
    do{
        printf(" nhap so tien can rut: ");
        scanf("%d",&ruttien);
        if(ruttien>50000 && ruttien<3000000){
            printf("\n rut tien thanh cong \n");
            tienhientai=tienhientai-ruttien;
            printf(" so tien con lai la: %d \n",tienhientai);
            break;
        }else{
            printf("\n rut tien that bai \n");
        }
    }while(1);
    return tienhientai;
}
int transfer(int id, int tienhientai){
    int tienchuyenkhoan;
    int id_nguoinhan;
    int dongy;
    int tiencuahieu=1000000;
    do{
        printf(" nhap so tai khoan ngươi nhan \n");
        scanf("%d",&id_nguoinhan);
        printf(" chủ TK Hieu Hee \n");
        printf(" so du tai khoan Hieu Hee la: 1000000 \n");
        printf(" xac nhan chuyen den tai tk Hieu Hee \n");
        printf(" an 1 de tiep tuc \n");
        printf(" an 2 de quay lai  \n");
        scanf("%d",&dongy);
    }while(dongy==2);
        if (dongy==1)
        printf(" nhap so tien can chuyen \n");
        scanf("%d",&tienchuyenkhoan);
        tienhientai=tienhientai-tienchuyenkhoan;
        printf(" chuyen khoan thanh cong \n");
        printf(" so tien con lai cua quy khach la: %d \n",tienhientai);
        printf(" so tien cua nguyen manh hieu la: \n");
        tiencuahieu=tiencuahieu+tienchuyenkhoan;
        printf("%d",tiencuahieu);
    return tienhientai;
    }
int check(int tienhientai){
    printf("so tien con lai la: %d \n", tienhientai);
    return tienhientai;
}
int thoat(){
    printf("thoat chuong trinh \n");
    return 0;
}
int menu (){
    printf("1: rut tien \n");
    printf("2: chuyen tien \n");
    printf("3: xem so tien \n");
    printf("4: thoat chuong trinh \n");
    return 0;
}
