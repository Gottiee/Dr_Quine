NAMES = Grace
OBJS = Grace.o 

NASMFLAGS = -f elf64
GCCFLAGS = -Wextra -Wall -Werror -no-pie

all: $(NAMES)

Grace: Grace.o
	gcc $(GCCFLAGS) Grace.o -o Grace

%.o: %.asm
	nasm $(NASMFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAMES)

re: clean all

.PHONY: all clean fclean re 