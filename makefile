# Variáveis
CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -g3
SRC = src/main.c src/temperatura.c src/potencia.c src/velocidade.c src/area.c
OBJ = $(SRC:.c=.o)
TARGET = build/conversor.exe

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
