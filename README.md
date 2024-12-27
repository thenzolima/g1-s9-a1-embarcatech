<img src="https://softex.br/wp-content/uploads/2024/09/EmbarcaTech_logo_Azul-1030x428.png" alt="embarcatech" width="240">

# Programa conversor de Unidades em linguagem C

### Siga as etapas abaixo para compilar e executar o programa:

1. Clone este repositório:
   
   ```git
   git clone [link do repositório]
   ```

2. Acesse a pasta do projeto:
   
   ```bash
   cd [nome do repositório clonado]
   ```

3. Execute o programa:
   
   ```bash
   ./conversor.exe
   ```

### Árvore do repositório
```makefile
.
├── conversor.exe          # Arquivo executável gerado após a compilação
├── include/               # Diretório de arquivos de cabeçalho
│   ├── area.h             # Cabeçalho para o conversor de área
│   ├── comprimento.h      # Cabeçalho para o conversor de comprimento
│   ├── dados.h            # Cabeçalho para o conversor de dados
│   ├── massa.h            # Cabeçalho para o conversor de massa
│   ├── potencia.h         # Cabeçalho para o conversor de potência
│   ├── temperatura.h      # Cabeçalho para o conversor de temperatura
│   ├── tempo.h            # Cabeçalho para o conversor de tempo
│   └── velocidade.h       # Cabeçalho para o conversor de velocidade
├── makefile               # Arquivo de automação para compilação do projeto
├── README.md              # Documentação do projeto
└── src/                   # Diretório com o código-fonte
    ├── area.c             # Implementação do conversor de área
    ├── comprimento.c      # Implementação do conversor de comprimento
    ├── dados.c            # Implementação do conversor de dados
    ├── main.c             # Arquivo principal com o menu e lógica principal
    ├── massa.c            # Implementação do conversor de massa
    ├── potencia.c         # Implementação do conversor de potência
    ├── temperatura.c      # Implementação do conversor de temperatura
    ├── tempo.c            # Implementação do conversor de tempo
    └── velocidade.c       # Implementação do conversor de velocidade 
```
