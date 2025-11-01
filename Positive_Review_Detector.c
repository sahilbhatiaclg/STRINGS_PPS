#include <stdio.h>

int main() {
    char str[201], word[50];
    int i = 0, j = 0;
    int good = 0, excellent = 0, satisfied = 0;

    // Input sentence
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    i = 0; // reset i for main loop

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; // end of one word

            if (j > 0) {
                // check if word == "good"
                if (word[0] == 'g' && word[1] == 'o' && word[2] == 'o' && word[3] == 'd' && word[4] == '\0')
                    good++;

                // check if word == "excellent"
                else if (word[0]=='e' && word[1]=='x' && word[2]=='c' && word[3]=='e' && word[4]=='l' && 
                         word[5]=='l' && word[6]=='e' && word[7]=='n' && word[8]=='t' && word[9]=='\0')
                    excellent++;

                // check if word == "satisfied"
                else if (word[0]=='s' && word[1]=='a' && word[2]=='t' && word[3]=='i' && word[4]=='s' && 
                         word[5]=='f' && word[6]=='i' && word[7]=='e' && word[8]=='d' && word[9]=='\0')
                    satisfied++;
            }

            j = 0; // reset for next word
        }

        if (str[i] == '\0')  // end of sentence
            break;

        i++;
    }

    printf("good: %d\n", good);
    printf("excellent: %d\n", excellent);
    printf("satisfied: %d\n", satisfied);

    return 0;
}
