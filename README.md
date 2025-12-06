# Build Instructions

## English

### Dependencies

-   GCC (Linux)
-   Mingw-w64 (Windows)
-   Bash

### How to compile

#### Linux

First, open the terminal in the project directory and allow the build
script to be executed:

``` bash
chmod +x build.sh
```

Then run the script:

``` bash
./build.sh
```

#### Windows

Windows terminals do not run Bash scripts natively.\
You will need a Bash interpreter to run the script.

Git for Windows includes a Bash interpreter.\
You must add Git's `/bin` directory to the Windows PATH environment
variable.

After configuring the `/bin` path, open the terminal in the project
directory and compile using:

``` bash
sh build.sh
```

------------------------------------------------------------------------

## Português

### Dependências

-   GCC (Linux)
-   Mingw-w64 (Windows)
-   Bash

### Como compilar

#### Linux

Abra o terminal no diretório do projeto e forneça permissão para o
script:

``` bash
chmod +x build.sh
```

Em seguida, execute o script:

``` bash
./build.sh
```

#### Windows

Terminais do Windows não suportam scripts Bash nativamente.\
Você precisará de um interpretador Bash para executar o script.

O Git para Windows vem com um interpretador Bash.\
Adicione o diretório `/bin` do Git ao PATH nas variáveis de ambiente do
Windows.

Após configurar o caminho do `/bin`, abra o terminal no diretório do
projeto e compile usando:

``` bash
sh build.sh
```
