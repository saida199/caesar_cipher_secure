#include <stdio.h>
#include <string.h>

void caesarEncrypt(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + shift) % 26) + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + shift) % 26) + 'A';
        }
        text[i] = c;
    }
}

void caesarDecrypt(char *text, int shift) {
    caesarEncrypt(text, 26 - (shift % 26));
}

int main() {
    char message[256];
    int originalKey, enteredKey;

    printf("=== 🔐 Chiffrement César avec clé ===\n");

    //chiffrement
    printf("\n🔏 Entrez le message à chiffrer : ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    printf("🔑 Entrez la clé de chiffrement (nombre entre 1 et 25) : ");
    scanf("%d", &originalKey);

    caesarEncrypt(message, originalKey);
    printf("\n✅ Message chiffré : %s\n", message);

    //déchiffrement avec vérification
    printf("\n🔐 Pour déchiffrer le message, entrez la clé : ");
    scanf("%d", &enteredKey);

    if (enteredKey == originalKey) {
        caesarDecrypt(message, enteredKey);
        printf("🔓 Message déchiffré : %s\n", message);
    } else {
        printf("❌ Clé incorrecte. Impossible de déchiffrer le message.\n");
    }

    return 0;
}