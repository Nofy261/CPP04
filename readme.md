     FT_IRC
     



# ✅ TODO – Création du Serveur IRC (`ft_irc` – 42)

## 🎯 Objectif

Construire un **serveur IRC** en C++98, capable de gérer plusieurs clients en parallèle et d'interpréter les commandes du protocole IRC (RFC 1459/2812). Ce to-do couvre **exclusivement la partie serveur**, rien de plus.

---

## 🧩 PARTIE 1 – Mise en place de la base réseau

> L’objectif ici est de mettre en place un socket TCP non bloquant qui écoute les connexions entrantes.

- [ ] **Inclure les bons headers**
  - Tu dois inclure ceux qui te permettent d’utiliser `socket()`, `bind()`, `listen()`, `accept()`, `poll()`, `fcntl()`, etc.
  - Exemples : `<sys/socket.h>`, `<netinet/in.h>`, `<fcntl.h>`, `<unistd.h>`, etc.

- [ ] **Créer le socket serveur**
  - Utilise `socket(AF_INET, SOCK_STREAM, 0)`
  - Vérifie que le `fd` retourné est valide (≠ -1)

- [ ] **Rendre l'adresse réutilisable**
  - Avec `setsockopt()` et l’option `SO_REUSEADDR`, pour éviter les erreurs du type "address already in use"

- [ ] **Rendre le socket non-bloquant**
  - Grâce à `fcntl()`, pour que ton serveur puisse gérer plusieurs clients sans être bloqué par un seul

- [ ] **Remplir la structure d'adresse `sockaddr_in`**
  - Spécifie : IPv4 (`AF_INET`), IP (`INADDR_ANY`), port (utilise `htons(port)`)

- [ ] **Lier le socket avec `bind()`**
  - Lie le socket à l’adresse IP + port
  - Vérifie les retours d’erreurs

- [ ] **Mettre en écoute avec `listen()`**
  - Commence à écouter les connexions entrantes (backlog = `SOMAXCONN` par exemple)

- [ ] **Afficher un message pour confirmer que le serveur est prêt**
  - Par exemple : "Serveur en écoute sur le port 6667..."

---

## 🧩 PARTIE 2 – Gérer plusieurs clients avec `poll()`

> L’objectif est de gérer plusieurs connexions client en parallèle grâce à une boucle non-bloquante avec `poll()`.

- [ ] **Initialiser une structure `pollfd[]`**
  - Mets le socket serveur dedans, avec l’événement `POLLIN`

- [ ] **Créer une boucle principale**
  - Appelle `poll()` sur le tableau de `pollfd`
  - Vérifie le retour de `poll()` pour détecter une activité

- [ ] **Accepter une nouvelle connexion si `POLLIN` sur le socket serveur**
  - Utilise `accept()`
  - Rends la nouvelle socket client non bloquante
  - Ajoute-la dans le tableau `pollfd`

- [ ] **Afficher un message quand un client se connecte**
  - Tu peux afficher son IP + port

- [ ] **Lire les messages entrants (`recv()`)**
  - Si `recv()` retourne 0 ou -1, déconnecter le client
  - Sinon, stocker ou afficher le message

- [ ] **Gérer la déconnexion propre**
  - Fermer le socket du client et le retirer du tableau `pollfd`

---

## 🧩 PARTIE 3 – Structurer ton projet

> Commence à organiser ton code avec des classes C++ propres.

- [ ] **Créer une classe `Server`**
  - Membres : port, socket serveur, tableau/listes de clients, etc.
  - Méthodes : `start()`, `acceptClient()`, `handlePoll()`, etc.

- [ ] **Créer une classe `Client`**
  - Membres : fd, pseudo (`nick`), username, buffer, etc.
  - Identifier les clients par leur `fd`

- [ ] **Stocker les clients dans une structure**
  - Par exemple : tableau statique, map `fd → Client`, etc.

---

## 🧩 PARTIE 4 – Implémenter les commandes IRC

> Commence à traiter les vraies commandes du protocole RFC IRC (1459/2812).

- [ ] **Lire les messages complets (finis par `\r\n`)**
  - Traiter les lignes complètes reçues

- [ ] **Gérer la commande `PASS`**
  - Refuser toute commande tant que le mot de passe n’a pas été validé

- [ ] **Gérer `NICK`**
  - Vérifier unicité du pseudo
  - Mettre à jour le client

- [ ] **Gérer `USER`**
  - Stocker les infos de l’utilisateur

- [ ] **Envoyer le message de bienvenue (code `001`)**
  - Quand le client a envoyé `PASS`, `NICK` et `USER`

- [ ] **Implémenter `PING` / `PONG`**
  - Pour maintenir la connexion active

- [ ] **Gérer les erreurs standard**
  - Mauvaise syntaxe, nickname en double, commande inconnue, etc.

---

## 🧩 PARTIE 5 – Gestion des canaux & communication

> Mise en place des interactions entre clients et canaux.

- [ ] **Gérer `JOIN`**
  - Créer un canal s’il n’existe pas
  - Ajouter le client à la liste des membres

- [ ] **Gérer `PRIVMSG`**
  - Envoi d’un message à un canal (tous les membres sauf l’émetteur)
  - Envoi d’un message privé à un autre utilisateur

- [ ] **Gérer `PART`**
  - Quitter un canal

- [ ] **Gérer `QUIT`**
  - Déconnexion manuelle

- [ ] **(Optionnel)** Ajouter `NOTICE`, `TOPIC`, `MODE`, etc.

---

## 🧩 PARTIE 6 – Tests et validation

> Une fois les fonctionnalités implémentées, il faut tout tester.

- [ ] **Tester avec `telnet` ou `netcat`**
  - Exemple : `telnet localhost 6667`

- [ ] **Tester avec un client IRC comme HexChat**
  - Vérifie que le client arrive à se connecter, envoyer des messages, etc.

- [ ] **Vérifier les erreurs courantes**
  - Pseudo déjà utilisé, message sans être connecté, commande inconnue...

- [ ] **Gérer les déconnexions correctes**
  - Retirer le client de tous les canaux
  - Libérer ses ressources

- [ ] **Vérifier les fuites mémoire avec valgrind**
  - Très important pour la soutenance

---

## ⚠️ Contraintes techniques importantes

- [ ] C++98 uniquement (pas de `auto`, `nullptr`, `std::vector` si pas autorisé, etc.)
- [ ] Aucun appel bloquant (`accept()`, `recv()`, etc. doivent être non-bloquants)
- [ ] Gestion robuste des erreurs système
- [ ] Code structuré, clair, séparé par fichiers/classes
- [ ] Comportement conforme à la RFC IRC

---

## ✅ À retenir

Ce to-do couvre **tout ce qui est nécessaire** pour implémenter le serveur IRC demandé dans le sujet `ft_irc`.  
Il ne contient **aucune fonctionnalité bonus ou non demandée** (comme l’interface client, TLS, réseaux de serveurs, etc.).

---

Bonne construction ! Tu peux cocher chaque étape à mesure que tu avances. 💻

