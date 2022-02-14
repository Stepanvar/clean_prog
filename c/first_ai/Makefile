SDIR	= ./src
ODIR	= ./bin
SRCS	= ./src/my_ai.c
OBJS	= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	= $(addsuffix .d, $(basename $(OBJS)))
CFLAGS	= -Wall -Wextra -Werror -g
NAME	= ai.out
CC		= cc
.Phony: all
all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	./$@
$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -c -o $@ $<
-include $(DEPS)
.Phony: clean
clean:
	rm -rf $(NAME)
.Phony: fclean
fclean: clean
	rm -rf $(ODIR)
.Phony: re
re: fclean all
