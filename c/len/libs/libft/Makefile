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
LIBS	= $(shell find $(LDIR) -maxdepth 3 -name "*.a")
DLIB    = $(dir $(LIBS))
INCS	= $(patsubst %, -I%src, $(dir $(LIBS)))
MAIN	= $(shell find $(SDIR) -name 'main.c')
CC	= gcc
RM	= rm -rf

ifeq ($(MAIN),)
	NAME	=$(addsuffix .a, $(BASENAME))
else
	NAME	=$(addsuffix .out, $(BASENAME))
endif

.PHONY: all
all: DL $(NAME) ZZ
.PHONY: $(DLIB)
DL: $(LIBS)
ifeq ($(LIBS),)
	echo "no libs found"
else
	$(MAKE) -C $(dir $<)
endif


$(NAME): $(OBJS) $(LIBS)
ifeq ($(MAIN),)
	ar rcs $(NAME) $?
else
	$(CC) $(CFLAGS) -o $@ $^
endif

$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< $(INCS) -MMD
.PHONY: ZZ
ZZ:
	mkdir -p $(DDIR)
ifeq ($(wildcard $(DDIR)/*.d),)
	mv $(ODEPS) $(DDIR)
endif
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

