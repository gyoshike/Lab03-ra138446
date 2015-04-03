int main()
{
    char a[100], b[100];

    /*
    Getting the strings
    */
    printf("Enter the first string\n");
    gets(a);
    printf("Enter the second string\n");
    gets(b);

    /*
    Comparing strings.
    */
    if (strcmp(a,b) == 0)
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");

    return 0;
}
