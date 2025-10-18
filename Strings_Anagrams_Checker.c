

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}; 
    int count2[256] = {0};

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams\n");
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Strings are not anagrams\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");
    return 0;
}
