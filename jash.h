int power(int B,int P)
{

    int null=1;
    for(int i=0; i<P; i++)
    {

        null*=B;

    }
    return null;
}

int nod(int num)
{

    int temp=0;
    while(num>0)
    {

        num/=10;
        temp++;
    }
    return temp;

}


int rev(int num)
{
    int temp=0,x;
    while(num>0)
    {
        x=num%10;
        num/=10;
        temp*=10;
        temp+=x;

    }

return temp;
}

int fact(int x)
{
    int i,f=1;
    for(i=1; i<=x; i++)
    {
        f*=i;
    }
    return f;
}



void palindromeChecker(char demo[]){
int i,len=0,mid=0;
len=strlen(demo);
    mid=len/2;
    int flag=0;
    for(i=0; i<mid; i++)
    {
        if(demo[i]!=demo[len-1-i])
        {
            flag=1;
                 break;
        }
    }
    if(flag==0)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
}


int pow(int b,int d)
{
    if(d==0)
    {
        return 1;

    }
    return pow(b,d-1)*b;
}



int fact(int x)
{
    if(x==1){
        return 1;
    }
return x*fact(x-1);
}
