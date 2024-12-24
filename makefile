# Variáveis
CC = gcc
CFLAGS = -Iinclude -Wall -Wextra
SRC = src/main.c src/temperatura.c src/potencia.c
OBJ = $(SRC:.c=.o)
TARGET = build/conversor

# Alvo principal
all: build_dir $(TARGET)

# Como gerar o executável
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

# Regra para criar o diretório build/
build_dir:
	mkdir -p build

# Limpeza
clean:
	rm -rf build

