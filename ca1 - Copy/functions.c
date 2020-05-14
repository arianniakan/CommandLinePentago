void turn_right(char arr[3][4])
{
    int i;
    int j;
    {
    char arr_copy[3][4];
        for(i=0;i<3;i+=1)
    {
        for(j=0;j<3;j+=1)
        {
            arr_copy[i][j]=arr[i][j];
        }
    }


    for(i=0;i<=2;i+=1)
    {
        for(j=0;j<=2;j+=1)
        {

            arr[i][j]=arr_copy[2-j][i];
        }
    }
    }
    }

    void turn_left(char arr[3][4])
    {
    int i;
    int j;
    {
    char arr_copy[3][4];
        for(i=0;i<3;i+=1)
    {
        for(j=0;j<3;j+=1)
        {
            arr_copy[i][j]=arr[i][j];
        }
    }


    for(i=0;i<3;i+=1)
    {
        for(j=0;j<3;j+=1)
        {

            arr[i][j]=arr_copy[j][2-i];
        }
    }
    }
    }
void show(
char arr_1[3][4]
,char arr_2[3][4]
,char arr_3[3][4]
,char arr_4[3][4]
)
{

    char space[]="     ";
    char spac[]="    ";
    char sspace[]="   ";

    printf(" %s1%s2%s3%s|%s4%s5%s6%s \n",space ,space ,space ,sspace ,sspace ,space ,space ,sspace );
    printf("1%s%c%s%c%s%c%s|%s%c%s%c%s%c \n\n",space,arr_1[0][0],space,arr_1[0][1],space,arr_1[0][2],sspace,sspace,arr_2[0][0],space,arr_2[0][1],space,arr_2[0][2]);
    printf("2%s%c%s%c%s%c%s|%s%c%s%c%s%c \n\n",space,arr_1[1][0],space,arr_1[1][1],space,arr_1[1][2],sspace,sspace,arr_2[1][0],space,arr_2[1][1],space,arr_2[1][2]);
    printf("3%s%c%s%c%s%c%s|%s%c%s%c%s%c \n\n",space,arr_1[2][0],space,arr_1[2][1],space,arr_1[2][2],sspace,sspace,arr_2[2][0],space,arr_2[2][1],space,arr_2[2][2]);
    printf("--%s--%s--%s-- %s--%s--%s--\n\n",spac,spac,spac,space,spac,spac,spac);
    printf("4%s%c%s%c%s%c%s|%s%c%s%c%s%c \n\n",space,arr_3[0][0],space,arr_3[0][1],space,arr_3[0][2],sspace,sspace,arr_4[0][0],space,arr_4[0][1],space,arr_4[0][2]);
    printf("5%s%c%s%c%s%c%s|%s%c%s%c%s%c \n\n",space,arr_3[1][0],space,arr_3[1][1],space,arr_3[1][2],sspace,sspace,arr_4[1][0],space,arr_4[1][1],space,arr_4[1][2]);
    printf("6%s%c%s%c%s%c%s|%s%c%s%c%s%c \n\n",space,arr_3[2][0],space,arr_3[2][1],space,arr_3[2][2],sspace,sspace,arr_4[2][0],space,arr_4[2][1],space,arr_4[2][2]);
}

void trn(
int side
,int dir
,char arr_1[3][4]
,char arr_2[3][4]
,char arr_3[3][4]
,char arr_4[3][4]
)
{
    if (side==1)
    {
        if (dir==1)
        {
            turn_right(arr_1);
        }
        else if (dir==2)
        {
            turn_left(arr_1);
        }
    }
    else if (side==2)
    {
        if (dir==1)
        {
            turn_right(arr_2);
        }
        else if (dir==2)
        {
            turn_left(arr_2);
        }
    }
    else if (side==3)
    {
        if (dir==1)
        {
            turn_right(arr_3);
        }
        else if (dir==2)
        {
            turn_left(arr_3);
        }
    }
    else if (side==4)
    {
        {
        if (dir==1)
        {
            turn_right(arr_4);
        }
        else if (dir==2)
        {
            turn_left(arr_4);
        }
        }
    }
}
char get(
int i
,int j
,char arr_1[3][4]
,char arr_2[3][4]
,char arr_3[3][4]
,char arr_4[3][4]

)
{

    if (i<=3&&j<=3)
        {
            return arr_1[i-1][j-1];
        }
    else if(i<=3&&j>3)
        {
            return arr_2[i-1][j-4];
        }
    else if(i>3&&j<=3)
        {
            return arr_3[i-4][j-1];
        }
    else if(i>3&&j>3)
        {
            return arr_4[i-4][j-4];
        }

}
int check_cor(
int i
,int j
,char arr_1[3][4]
,char arr_2[3][4]
,char arr_3[3][4]
,char arr_4[3][4])
{
    if (get(i,j,arr_1,arr_2,arr_3,arr_4)=='.')
    {
        return 1;
    }
    else if (get(i,j,arr_1,arr_2,arr_3,arr_4)=='b'||get(i,j,arr_1,arr_2,arr_3,arr_4)=='w')
    {
        printf("that spots taken! try again!\n");
        return 0;
    }
    if (!(0<j&&j<7))
    {
        printf("\ninvalid vertical co-ordinates!");
        return 0;
    }
    else if (!(0<i&&i<7))
    {
        printf("\ninvalid horizontal co-ordinates!");
        return 0;
    }

}

char set_b(
int i
,int j
,char arr_1[3][4]
,char arr_2[3][4]
,char arr_3[3][4]
,char arr_4[3][4]
)
{

    if (i<=3&&j<=3)
        {
            arr_1[i-1][j-1]= 'b';
        }
    else if(i<=3&&j>3)
        {
            arr_2[i-1][j-4]= 'b';
        }
    else if(i>3&&j<=3)
        {
            arr_3[i-4][j-1]= 'b';
        }
    else if(i>3&&j>3)
        {
            arr_4[i-4][j-4]= 'b';
        }

}
char set_w(
int i
,int j
,char arr_1[3][4]
,char arr_2[3][4]
,char arr_3[3][4]
,char arr_4[3][4]
)
{

    if (i<=3&&j<=3)
        {
            arr_1[i-1][j-1]= 'w';
        }
    else if(i<=3&&j>3)
        {
            arr_2[i-1][j-4]= 'w';
        }
    else if(i>3&&j<=3)
        {
            arr_3[i-4][j-1]= 'w';
        }
    else if(i>3&&j>3)
        {
            arr_4[i-4][j-4]= 'w';
        }

}
void checkr(
char arr_1[3][4]
,char arr_2[3][4]
,char arr_3[3][4]
,char arr_4[3][4]
,char c[6][7]
)
{
    int i;
    int j;
    for(i=0;i<6;i+=1)
    {
        for(j=0;j<6;j+=1)
        {
            if (i<3&&j<3)
        {
            c[i][j]=arr_1[i][j];
        }
            else if(i<3&&j>2)
        {
            c[i][j]=arr_2[i][j-3];
        }
            else if(i>2&&j<3)
        {
            c[i][j]=arr_3[i-3][j];
        }
            else if(i>2&&j>2)
        {
            c[i][j]=arr_4[i-3][j-3];
        }
        }
    }
}
int check_end(char c[6][7])
{
    int i;
    int j;
    for (i=0;i<6;i+=1)
    {
        for (j=0;j<6;j+=1)
        {
            if (c[i][j]=='b'||c[i][j]=='w')
            {
                if ((c[i][j]==c[i+1][j]&&c[i][j]==c[i+2][j]&&c[i][j]==c[i+3][j])&&(c[i][j]==c[i][j-1]||c[i][j]==c[i][j+1]||c[i][j]==c[i+3][j+1]||c[i][j]==c[i+3][j-1]))
                {
                    return 0;
                }
                else if ((c[i][j]==c[i][j+1]&&c[i][j]==c[i][j+2]&&c[i][j]==c[i][j+3])&&(c[i][j]==c[i-1][j]||c[i][j]==c[i+1][j]||c[i][j]==c[i+1][j+3]||c[i][j]==c[i-1][j+3]))
                {
                    return 0;
                }
                else if ((c[i][j] == c[i + 1][j + 1] && c[i][j] == c[i + 2][j + 2] && c[i][j] == c[i + 3][j + 3]) && (c[i][j] == c[i + 2][j + 4] || c[i][j] == c[i + 4][j + 2] || c[i][j] == c[i - 1][j + 1] || c[i][j] == c[i + 1][j - 1]))
                {
                    return 0;
                }
                else if ((c[i][j] == c[i + 1][j - 1] && c[i][j] == c[i + 2][j - 2] && c[i][j] == c[i + 3][j - 3]) && (c[i][j] == c[i + 4][j - 2] || c[i][j] == c[i + 2][j - 4] || c[i][j] == c[i - 1][j - 1] || c[i][j] == c[i + 1][j + 1]))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}
