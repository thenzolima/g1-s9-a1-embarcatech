# Variáveis
CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -g3
SRC = src/main.c src/temperatura.c src/potencia.c src/velocidade.c src/area.c src/tempo.c src/massa.c src/dados.c src/comprimento.c
TARGET = conversor.exe

# Alvo principal
all: $(TARGET)

# Como gerar o executável
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

# Limpeza
clean:
	rm -f $(TARGET)

