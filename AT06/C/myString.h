void strcpy_and_strncpy(){
    char x[] = "parabens ai pro amigo vai ganhar sempre, parado de 12 na base";
    char y[25] = "";
    char z[15] = "";

    for (int i = 0; i != '\0'; i++){
        y[i] = x[i];

        if(y[i] == y[25]){
            break;
        }
    } 
    for (int j = 0; j <= 15; j++){
        z[j] = x[j];
    }
    z[14] = '\0';
    printf("Texto normal: %s\n", x);
    printf("Strcpy: %s\n", y);
    printf("Strncpy: %s\n\n\n\n\n", z);
}
void strcat_and_strncat(){
    char s1[20] = "Feliz ";
    char s2[] = "Ano Novo ";
    char s3[40] = "";
    int c, d;
    c = 0;
    while (s1[c] != '\0') {c++;}
    d = 0;
    while (s2[d] != '\0') {
        s1[c] = s2[d];
        d++;
        c++;    
    }
    s1[c] = '\0';
    
    printf("Strcat: %s\n", s1);
    printf("Strncat: %s\n", s2);
}

void strcmp_and_strncmp(){
    const char *sar1 = "Feliz Ano Novo";
    const char *sar2 = "Feliz Ano Novo";
    const char *sar3 = "Boas Férias";
}