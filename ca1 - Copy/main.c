#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    char arr_1[3][4]= {
                       {"..."},
                       {"..."},
                       {"..."},
                       };
    char arr_2[3][4]={
                      {"..."},
                      {"..."},
                      {"..."},
                      };
    char arr_3[3][4]={
                      {"..."},
                      {"..."},
                      {"..."},
                      };
    char arr_4[3][4]={
                      {"..."},
                      {"..."},
                      {"..."},
                      };
    int i;
    int j;
    int turn=1;
    int cor_check=0;
    int dir_check=0;
    int side_check=0;
    int game=1;
    int dir;
    int side;
    char c[6][7];
    show(arr_1,arr_2,arr_3,arr_4);


while (game==1)
{
        if (turn==1&&game==1)
        {
            printf("\n\nblack players turn!\n\n\n");
            while (cor_check==0)
            {
            checkr(arr_1,arr_2,arr_3,arr_4,c);
            game = check_end(c);
            if (game==0)
            {
                show(arr_1,arr_2,arr_3,arr_4);
                printf("white player has won!\n!!!!!!!!!!!!!!!!");
                break;
            }
                printf("\nenter a number for horizontal row: ");
                scanf("%d", &i);
                printf("\nenter a number for vertical row: ");
                scanf("%d", &j);
                cor_check=check_cor(i,j,arr_1,arr_2,arr_3,arr_4);

            }
            cor_check=0;
            set_b(i,j,arr_1,arr_2,arr_3,arr_4);
            checkr(arr_1,arr_2,arr_3,arr_4,c);
            game = check_end(c);
            if (game==0)
            {
                show(arr_1,arr_2,arr_3,arr_4);
                printf("black player has won!\n!!!!!!!!!!!!!!!!");
                break;
            }
            show(arr_1,arr_2,arr_3,arr_4);
            while (side_check==0)
            {
               printf("Choose the side you want to turn: \n");
               printf("\n1 | 2\n----\n3 | 4\n\n\n");
               scanf("%d", &side);
               if (side>=1 && side<=4)
               {
                 side_check = 1;
               }
            }
            side_check=0;
            while (dir_check==0)
            {
                printf("choose a direction to turn the side;\n\nenter 1 to turn right!\n\nenter 2 to turn left!\n");
                scanf("%d", &dir);
                if (dir==1 || dir==2)
                {
                    dir_check=1;
                }
            }
            dir_check=0;
            trn(side,dir,arr_1,arr_2,arr_3,arr_4);
            turn=0;
            show(arr_1,arr_2,arr_3,arr_4);
            checkr(arr_1,arr_2,arr_3,arr_4,c);
            game = check_end(c);
            if (game==0)
            {
                show(arr_1,arr_2,arr_3,arr_4);
                printf("black player has won!\n!!!!!!!!!!!!!!!!");
                break;
            }


        }






        if (turn==0&&game==1)
        {
            printf("\n\nwhite players turn!\n\n\n");
            while (cor_check==0)
            {
            checkr(arr_1,arr_2,arr_3,arr_4,c);
            game = check_end(c);
            if (game==0)
            {
                show(arr_1,arr_2,arr_3,arr_4);
                printf("black player has won!\n!!!!!!!!!!!!!!!!");
                break;
            }
                printf("\nenter a number for horizontal row: ");
                scanf("%d", &i);
                printf("\nenter a number for vertical row: ");
                scanf("%d", &j);
                cor_check=check_cor(i,j,arr_1,arr_2,arr_3,arr_4);

            }
            cor_check=0;
            set_w(i,j,arr_1,arr_2,arr_3,arr_4);
            checkr(arr_1,arr_2,arr_3,arr_4,c);
            game = check_end(c);
            if (game==0)
            {
                show(arr_1,arr_2,arr_3,arr_4);
                printf("white player has won!\n!!!!!!!!!!!!!!!!");
                break;
            }
            show(arr_1,arr_2,arr_3,arr_4);
            while (side_check==0)
            {
               printf("Choose the side you want to turn: \n");
               printf("\n1 | 2\n----\n3 | 4\n\n\n");
               scanf("%d", &side);
               if (side>=1 && side<=4)
                {
                    side_check =1;
                }
            }
            side_check=0;
            while (dir_check==0)
            {
                printf("\n\nchoose a direction to turn the side;\n\nenter 1 to turn right!\n\nenter 2 to turn left!\n");
                scanf("%d", &dir);
                if (dir==1 || dir==2)
                {
                    dir_check=1;
                }
            }
            dir_check=0;
            trn(side,dir,arr_1,arr_2,arr_3,arr_4);
            turn=1;
            show(arr_1,arr_2,arr_3,arr_4);
            checkr(arr_1,arr_2,arr_3,arr_4,c);
            game = check_end(c);
            if (game==0)
            {
                show(arr_1,arr_2,arr_3,arr_4);
                printf("white player has won!\n!!!!!!!!!!!!!!!!");
                break;
            }


        }




}
}
