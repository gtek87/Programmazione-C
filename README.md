# Introduzione al Linguaggio C

Il linguaggio di programmazione C è un linguaggio di programmazione ad alto livello, sviluppato originariamente da Dennis Ritchie nel 1972 presso i laboratori Bell di AT&T. È uno dei linguaggi più influenti nella storia dell'informatica ed è ancora ampiamente utilizzato oggi.

 
Ecco una versione formattata per il tuo file README:

---

# Installazione del Compilatore C

## Windows:

1. **MinGW (Minimalist GNU for Windows):**
   - Visita il sito web di [MinGW](http://mingw.org/).
   - Naviga nella sezione "Downloads" e seleziona l'installer "mingw-get-setup.exe".
   - Scarica e avvia l'installer.
   - Durante l'installazione, seleziona i pacchetti necessari, inclusi "mingw32-base" e "mingw32-gcc-g++".
   - Completa l'installazione.

2. **Visual Studio:**
   - Puoi utilizzare Visual Studio, un ambiente di sviluppo integrato (IDE) di Microsoft, che include il compilatore C/C++.
   - Scarica Visual Studio Community Edition da [qui](https://visualstudio.microsoft.com/it/visual-cpp-build-tools/).
   - Avvia l'installer e segui le istruzioni per installare il supporto C/C++.

## macOS:

1. **Xcode Command Line Tools:**
   - Apri il terminale.
   - Esegui il seguente comando per installare le Xcode Command Line Tools:
     ```
     xcode-select --install
     ```

2. **Homebrew:**
   - Se hai Homebrew installato, puoi utilizzare il seguente comando per installare GCC:
     ```
     brew install gcc
     ```

## Linux (Ubuntu/Debian):

1. **GCC (GNU Compiler Collection):**
   - Apri il terminale.
   - Esegui il seguente comando per installare GCC:
     ```
     sudo apt-get update
     sudo apt-get install build-essential
     ```

2. **Clang:**
   - Puoi utilizzare Clang come alternativa a GCC:
     ```
     sudo apt-get update
     sudo apt-get install clang
     ```

3. **Code::Blocks (IDE):**
   - Puoi anche optare per un ambiente di sviluppo integrato (IDE) come Code::Blocks. Puoi installarlo con:
     ```
     sudo apt-get install codeblocks
     ```

Una volta installato il compilatore C, puoi verificare la sua presenza eseguendo il comando nel terminale o prompt dei comandi:

- Per GCC:
  ```
  gcc --version
  ```

- Per Clang:
  ```
  clang --version
  ```

---
