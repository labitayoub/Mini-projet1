#include <stdio.h>
#include <math.h>
//Mini projet de calculatrice
int main() {
    int op, n, i;
    float num, result, a;
    int operation = 1;

    while (operation) {
         printf("\t Menu De Calculatrice\n");
        printf("1. Addition \n");
        printf("2. Soustraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Moyenne \n");
        printf("6. Valeur absolue \n");
        printf("7. Exponentiation \n");
        printf("8. Racine carree \n");
        printf("9. Quitter \n");
        printf("\n");
        printf("Entrez votre choix: ");
        scanf("%d", &op);


        switch (op) {
            case 1: { // Addition
                float sum = 0;
                printf("Combien de nombres ? ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Entrez un nombre: ");
                    scanf("%f", &num);
                    sum += num;
                }
                printf("Le resultat de l'addition est: %.2f\n", sum);
                break;
            }
            case 2: { // Soustraction
                printf("Entrez le premier nombre: ");
                scanf("%f", &result);
                printf("Entrez le deuxieme nombre: ");
                scanf("%f", &num);
                result -= num;
                printf("Le resultat de la soustraction est: %.2f\n", result);
                break;
            }
            case 3: { // Multiplication
                result = 1;
                printf("Combien de nombres ? ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Entrez un nombre: ");
                    scanf("%f", &num);
                    result *= num; 
                }
                printf("Le resultat de la multiplication est: %.2f\n", result);
                break;
            }
            case 4: { // Division
                printf("Entrez le dividende: ");
                scanf("%f", &result);
                printf("Entrez le diviseur: ");
                scanf("%f", &num);
                if (num == 0) {
                    printf("Erreur: Division par zéro impossible!\n");
                } else {
                    result /= num;
                    printf("Le resultat de la division est: %.2f\n", result);
                }
                break;
            }
            case 5: { // Moyenne
                float sum = 0;
                printf("Combien de nombres ? ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Entrez un nombre: ");
                    scanf("%f", &num);
                    sum += num;
                }
                printf("La moyenne est: %.2f\n", n > 0 ? sum / n : 0);
                break;
            }
            case 6: { // Valeur absolue
                printf("Entrez un nombre: ");
                scanf("%f", &num);
                result = fabs(num);
                printf("La valeur absolue est: %.2f\n", result);
                break;
            }
            case 7: { // Exponentiation
                printf("Entrez la base: ");
                scanf("%f", &num);
                int exponent;
                printf("Entrez l'exposant (entier): ");
                scanf("%d", &exponent);
                result = 1;
                for (i = 0; i < exponent; i++) {
                    result *= num; // Multiply base by itself
                }
                printf("Le resultat de l'exponentiation est: %.2f\n", result);
                break;
            }
            case 8: { // Racine carrée
                printf("Entrez un nombre positif: ");
                scanf("%f", &num);
                if (num < 0) {
                    printf("Erreur: Impossible de calculer la racine carree d'un nombre negatif!\n");
                } else {
                    result = sqrt(num);
                    printf("La racine carree est: %.2f\n", result);
                }
                break;
            }
            case 9: // Quitter
                printf("Au revoir!\n");
                operation = 0;
                break;

            default:
                printf("Choix invalide! Veuillez essayer à nouveau.\n");
                break;
        }
    }

    return 0;
}