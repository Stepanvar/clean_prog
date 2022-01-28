NAME	= project.out
ODIR	= ./bin
SDIR	= ./src
SRCS	= $(shell find $(SDIR) -name '*.c')
OBJS	= $(patsubst $(ODIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	= $(addsuffix .d, $(basename $(OBJS))
CFLAGS	= -Wall -Wextra -Werror -g $(AFL)
CC		= gcc
RM		= rm -rf

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $< -MMD -MP

-include $(DEPS)
.PHONY: clean
clean:
	$(RM) $(NAME)

.PHONY: fclean
fclean: clean
	$(RM) $(ODIR)

.PHONY: re
re: fclean all

