CC = gcc
SRC = $(wildcard *.c)
INCL = ft_cat.h
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
EXEC = ft_cat
RM = rm -f

all: $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^ 

%.o: %.c
	$(CC) -c $< $(CFLAGS) -I$(INCL)


clean:
	/bin/$(RM) $(OBJ)

fclean: clean
	/bin/$(RM) $(EXEC)
	