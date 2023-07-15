NAMES = Sully
OBJS = Sully.o 

NASMFLAGS = -f elf64
GCCFLAGS = -Wextra -Wall -Werror -no-pie

all: $(NAMES)

Sully: Sully.o
	gcc $(GCCFLAGS) Sully.o -o Sully

%.o: %.asm
	nasm $(NASMFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAMES)

re: clean all

.PHONY: all clean fclean re 