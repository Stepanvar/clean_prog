BASENAME	= libft
ODIR	= ./bin
SDIR	= ./src
DDIR	= ./deps
LDIR	= ./libs
SRCS	= $(shell find $(SDIR) -name '*.c')
OBJS	= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	= $(patsubst $(ODIR)/%.o, $(DDIR)/%.d, $(OBJS))
CFLAGS	= -Wall -Wextra -g $(AFL)
SUBDIRS = $(shell find $(LDIR) -type d -name 'src')
INCS	= $(patsubst %, -I%, $(SUBDIRS))
MAIN	= $(shell grep -o "main" $(SDIR)/*.c)
CC	= gcc
RM	= rm -rf

ifeq ($(MAIN),)
	NAME	= $(addsuffix .a, $(BASENAME))
else
	NAME	= $(addsuffix .out, $(BASENAME))
endif

.PHONY: all
all: $(NAME)
$(NAME): $(LIBS) $(OBJS)
ifeq ($(MAIN),)
	ar rcs $(NAME) $?
	mv $(ODIR)/*.d $(DDIR)
else
	$(CC) $(CFLAGS) -o $@ $^
	mv $(ODIR)/*.d $(DDIR)
endif
$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< $(INCS) -MMD
-include $(DEPS)
.PHONY: clean
clean:
	$(RM) $(NAME)

.PHONY: fclean
fclean: clean
	$(RM) $(ODIR)/* 
	$(RM) $(DDIR)/*

.PHONY: re
re: fclean all