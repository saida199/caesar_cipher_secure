# caesar_cipher_secure

Projet : Chiffrement César Sécurisé en C
> Description
Ce projet est une implémentation du chiffre de César en langage C, avec une fonctionnalité de vérification de clé. L’utilisateur peut chiffrer un message avec une clé secrète, et le destinataire doit entrer la bonne clé pour pouvoir le déchiffrer. Ce projet illustre les bases de la cryptographie symétrique et la logique de sécurité par mot de passe.

> Fonctionnalités
- Chiffrement de texte avec le chiffre de César
- Déchiffrement uniquement si la clé correcte est fournie
- Interface en console simple et intuitive
- Gestion des majuscules/minuscules
- Protection contre les clés incorrectes

> Technologies utilisées
- Langage : C
- Librairies standard : stdio.h, string.h

> Installation et exécution
1. Cloner le dépôt
git clone https://github.com/saida199/secure_caesar_cipher.git
cd secure_caesar_cipher


2. Compiler le programme
gcc caesar_cipher_secure.c -o caesar_cipher_secure


3. Lancer le programme
./caesar_cipher_secure



> Exemple d’utilisation
=== 🔐 Chiffrement César avec clé ===

🔏 Entrez le message à chiffrer : bonjour sai
🔑 Entrez la clé de chiffrement (nombre entre 1 et 25) : 5

✅ Message chiffré : gtsnuzw xfn

🔐 Pour déchiffrer le message, entrez la clé : 5
🔓 Message déchiffré : bonjour sai



> Structure du projet
caesar_cipher_secure.c     → Code source principal
README.md                  → Documentation du projet



👤 Auteur
Saida
📍 Marseille, France
📧 Contact : saidakc70@icloud.com
🔗 GitHub : github.com/saida199

