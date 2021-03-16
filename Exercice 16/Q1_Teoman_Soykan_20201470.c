int longeur_chaine(char s[]) {

   int chr = 0;

   while (s[chr] != '\0')
      chr++;

   return chr;
}
/*
Ici, la boucle while qui va compter le nombre de caratere. != signifie qu'il doit etre different de \0. "chr++" va compter le nombre de caractere.
À la fin de la boucle, on va renvoyer le nombre de charactere.
*/
