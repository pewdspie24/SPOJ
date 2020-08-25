#include<stdio.h>
#include<conio.h>
 
int main()
{
    int n;
 
    // yeu cau nguoi dung nhap vao do dai chuoi n
    printf("Nhap vao do dai day nhi phan : ");
    scanf("%d", &n);
 
 
    // khoi tao mang n phan tu va gan cac phan tu cua mang bang 0
    int mang[n];
 
    int i;
    for(i = 0; i < n; i++)
    {
        mang[i] = 0;
    }
 
 
    // in ra cau hinh dau
    for(i = 0; i < n; i++)
    {
        printf("%d", mang[i]);
    }
    printf("\n");
 
 
    //xu ly
    for(i = n - 1; i >= 0; i--)
    {
        if(mang[i] == 0)  // neu gap phan tu 0 dau tien
        {
            mang[i] = 1;  // gan no lai thanh 1
 
            int j;
            for(j = i + 1; j < n; j++)  // gan toan bo phan tu phia sau no thanh 0
            {
                mang[j] = 0;
            }
 
            // in ra day so moi
            for(j = 0; j < n; j++)
            {
                printf("%d", mang[j]);
            }
            printf("\n");
 
            i = n;  // gan i = n de khi het vong lap i-- nen i se = n - 1, tu do chay lai tu vi tri cuoi.
                    // gan i = n - 1 la sai vi khi het vong lap hien tai i-- se thanh n - 2.
        }
    }
 
    getch();
    return 0;
}
