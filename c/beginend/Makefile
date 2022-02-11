NAME	= print.out
ODIR	= ./bin
SDIR	= ./src
SRCS	= $(shell find $(SDIR) -name '*.c')
OBJS	= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	= $(addsuffix .d, $(basename $(OBJS)))
CFLAGS	= -Wall -Wextra -g $(AFL)
LDFLAGS	= -Ldisplayer/ -lproject
CC	= gcc
RM	= rm -rf

.PHONY: all
all: MK $(NAME)

MK:
	$(MAKE) -C displayer/

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) -o $@ $^ displayer/project.a

$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< -MMD

-include $(DEPS)
.PHONY: clean
clean:
	$(RM) $(NAME)

.PHONY: fclean
fclean: clean
	$(RM) $(ODIR)

.PHONY: re
re: fclean all

