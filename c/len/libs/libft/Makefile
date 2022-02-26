BASENAME	= libft
ODIR	= ./bin
SDIR	= ./src
DDIR	= ./deps
LDIR	= ./libs
SRCS	= $(shell find $(SDIR) -name '*.c')
OBJS	= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	= $(patsubst $(ODIR)/%.o, $(DDIR)/%.d, $(OBJS))
ODEPS	= $(patsubst $(ODIR)/%.o, $(ODIR)/%.d, $(OBJS))
CFLAGS	= -Wall -Wextra -g $(AFL)
LIBS	= $(shell find $(LDIR) -maxdepth 2 -name "*.a")
MAIN	= $(shell find $(SDIR) -name 'main.c')
CC	= gcc
RM	= rm -rf
ifneq (MAIN,)
NAME	=$(addsuffix .a, $(BASENAME))
else
NAME	=$(addsuffix .out, $(BASENAME))
endif

.PHONY: all
all: MK $(NAME) 

MK: $(LIBS)
	@if [ -z $(LIBS) ]; then\
		echo "no libs found"; \
	else\
		$(MAKE) -C $(dir $<);\
	fi


$(NAME): $(OBJS) $(LIBS)
	@if [ -z $(MAIN) ]; then \
		ar rcs $(NAME) $?; \
	else\
		$(CC) $(CFLAGS) -o $@ $^;\
	fi

$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< -MMD
	mkdir -p $(DDIR)
	mv $(ODEPS) $(DDIR)

-include $(DEPS)
.PHONY: clean
clean:
	$(RM) $(NAME)

.PHONY: fclean
fclean: clean
	$(RM) $(ODIR) 
	$(RM) $(DDIR)

.PHONY: re
re: fclean all

