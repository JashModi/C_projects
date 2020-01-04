#include<stdio.h>
#include<string.h>
struct product
{
    int product_id;
    char product_name[20];
};
void addProduct(struct product p[])
{
    for(int i=0; i<3; i++)
    {
        printf("Enter id and name\n");
        scanf("%d %s",&p[i].product_id,&p[i].product_name);
    }
}
void display(struct product p)
{
    printf("Product : %d %s",p.product_id,p.product_name);
}
void search(struct product p[])
{
    int id,flag=0;
    printf("Enter id of product to be searched\n");
    scanf("%d",&id);
    for(int i=0; i<3; i++)
    {
        if(id==p[i].product_id)
        {
            display(p[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Not Found");
    }

}

main()
{
    struct product item[3];
    addProduct(item);
    search(item);

}
