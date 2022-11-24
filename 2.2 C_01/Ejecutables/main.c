/* ex00 */
int main(void)
{
    int b;
    int *nbr;

    nbr = &b;
    ft_ft(nbr);
    printf("%d", b);
}

/*ex01 */
int main(void)
{
    int b;
    int *nbr9;
    int **nbr8;
    int ***nbr7;
    int ****nbr6;
    int *****nbr5;
    int ******nbr4;
    int *******nbr3;
    int ********nbr2;
    int *********nbr;

    nbr9 = &b;
    nbr8 = &nbr9;
    nbr7 = &nbr8;
    nbr6 = &nbr7;
    nbr5 = &nbr6;
    nbr4 = &nbr5;
    nbr3 = &nbr4;
    nbr2 = &nbr3;
    nbr = &nbr2;

    ft_ultimate_ft(nbr);
    printf("%d", b);
}

/* ex02 */
int main(void)
{
    int aa;
    int bb;
    int *a;
    int *b;

    ft_swap(*a, *b);
    printf("%d", aa, bb);  
}

/* ex03 */
int     main(void);
{
    int a;
    int b;
    int resultdiv;
    int resultmod;
    int *div;
    int *mod;

    a = 453;
    b = 13;
    *div = resultdiv;
    *mod = resultmod;
    ft_div_mod(a, b, div, mod);
    printf("%d", resultdiv, resultmod);
}

/* ex04 */
int main(void)
{
    int aa;
    int bb;
    int *a;
    int *b;

    aa = 789;
    bb = 102;
    a = &aa;
    b = &bb;
    ft_ultimate_div_mod(a, b);
    printf("La división es %d.\n", *a);
    printf("el resto es %d.\n", *b);
}

/* ex05 */
int main(void)
{
    char    text[8];
    char    *str;

    text = "Felipés";
    str = &text[0];
    ft_putstr(str);
}

/* ex06 */
int main(void)
{
    char a[8];
    char *str;

    a = "FELIPES";
    str = &a;
    ft_strlen(str);
    printf("El número de caracteres es %d.\n", nc);
}

/* ex07 */
void array_printer(int a[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", a[i]);
    printf("%d\n", a[size - 1]);
}

int	main (void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size;
	
	size = 5;

	printf("in: ");
	array_printer(tab, size);
	
	ft_rev_int_tab(tab, size);

	printf("out: ");
	array_printer(tab, size);
}

/* ex08 */
void array_printer(int a[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", a[i]);
    printf("%d\n", a[size - 1]);
}

int	main (void)
{
	int tab[] = {4, 15, 2, 18, 7, 9, 6, 1};
	int size;
	
	size = 8;

	printf("in: ");
	array_printer(tab, size);
	
	ft_sort_int_tab(tab, size);

	printf("out: ");
	array_printer(tab, size);
}
