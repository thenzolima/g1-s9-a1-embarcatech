# Programa conversor de Unidades em linguagem C

### Como executar o programa

Siga as etapas abaixo para compilar e executar o programa:

1. Clone este repositório:
   
   ```git
   git clone [link do repositório]
   ```

2. Acesse a pasta do projeto:
   
   ```bash
   cd [nome do repositório clonado]
   ```

3. Compile o programa utilizando o `Makefile`:
   
   ```bash
   make
   ```

4. Navegue até o diretório `build`:
   
   ```bash
   cd build
   ```

5. Execute o programa:
   
   ```bash
   ./conversor
   ```

### Estrutura do projeto

```makefile
g1-s9-a1-embarcatech/
├── src/                   # Código fonte
│   ├── main.c             # Arquivo principal com o menu
│   ├── temperatura.c      # Implementação do conversor de temperatura
│   ├── potencia.c         # Implementação do conversor de potência
│   ├── velocidade.c       # Implementação do conversor de velocidade
│   ├── area.c             # Implementação do conversor de área
├── include/               # Arquivos de cabeçalho
│   ├── temperatura.h      # Cabeçalho do conversor de temperatura
│   ├── potencia.h         # Cabeçalho do conversor de potência
│   ├── velocidade.h       # Cabeçalho do conversor de velocidade
│   ├── area.h             # Cabeçalho do conversor de área
├── build/                 # Binários gerados após compilação
│   └── conversor          # Arquivo executável
├── Makefile               # Arquivo de automação da compilação (opcional)
└── README.md              # Documentação do projeto
```
