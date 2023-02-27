//Write a C code to swap two numbers without using a third variable

int main(int argc, char const *argv[])
{
    int first=1, second=2;
    printf("\nAntes de cambiar el valor de cada varaible: \nPrimera= %d\nSegunda= %d",first, second);
    first=first+second;
    second=first-second;
    first=first-second;
    printf("\nDespues de cambair los valores de cada variable \nPrimera= %d\nSegunda= %d",first,second);

    return 0;
}
