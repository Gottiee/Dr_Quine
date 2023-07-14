NAMES = Colleen
OBJS = Colleen.o 

NASMFLAGS = -f elf64
GCCFLAGS = -Wextra -Wall -Werror -no-pie

all: $(NAMES)

Colleen: Colleen.o
	gcc $(GCCFLAGS) Colleen.o -o Colleen

%.o: %.asm
	nasm $(NASMFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAMES)

re: clean all

.PHONY: all clean fclean re 