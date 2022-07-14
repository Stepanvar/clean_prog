BASENAME	= first_ai
TNAME	= unit_$(BASENAME)
ODIR	= ./bin
SDIR	= ./src
DDIR	= ./deps
LDIR	= ./libs
TDIR	= ./test
MAIN	= $(shell grep -l "main" $(SDIR)/*.c)
MAINO	= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(MAIN))
SRCS	= $(shell find $(SDIR) -wholename '*.c' ! -wholename "$(MAIN)" )
OBJS	= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	= $(patsubst $(ODIR)/%.o, $(DDIR)/%.d, $(OBJS))
TSRCS	= $(shell find $(TDIR) -name '*.c')
TOBJS	= $(patsubst $(TDIR)/%.c, $(ODIR)/%.o, $(TSRCS))
CFLAGS	= -Wall -Wextra -g $(AFL)
SUBDIRS = $(shell find $(LDIR) -type d -name 'src')
INCS	= $(patsubst %, -I%, $(SUBDIRS))
CC	= gcc
RM	= rm -rf

ifeq ($(MAIN),)
	NAME	= $(addsuffix .a, $(BASENAME))
else
	NAME	= $(addsuffix .out, $(BASENAME))
endif

.PHONY: all
all: $(OBJS)
$(ODIR)/%.o: $(SDIR)/%.c
	@echo
	@echo "\033[1;42mCreate non main obj files\033[0m"
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< $(INCS) -MMD
-include $(DEPS)

.PHONY: check
check: all $(TNAME)
$(TNAME): $(TOBJS)
	@echo
	@echo "\033[1;42mCreate unit tests\033[0m"
	mkdir -p $(TDIR)
	$(CC) $(CFLAGS) -o $(TNAME) ${SRCS} $^ $(INCS) -lcheck -lm -lsubunit
	mv $(ODIR)/*.d $(DDIR)/

$(ODIR)/%.o: $(TDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $< $(INCS) -lcheck -lm -lsubunit -MMD
.PHONY: r
r: all $(NAME)
$(NAME): $(LIBS) $(OBJS) $(MAINO)
ifeq ($(MAIN),)
	@echo
	@echo "\033[1;42mCreate library file\033[0m"
	mkdir -p $(DDIR)
	ar rcs $(NAME) $?
	mv $(ODIR)/*.d $(DDIR)/
else
	@echo
	@echo "\033[1;42mCreate main exe file\033[0m"
	mkdir -p $(DDIR)
	$(CC) $(CFLAGS) -o $@ $^
	mv $(ODIR)/*.d $(DDIR)/
endif
$(MAINO): $(MAIN)
	$(CC) $(CFLAGS) -c -o $@ $< $(INCS) -MMD

.PHONY: clean
clean:
	$(RM) $(NAME)

.PHONY: fclean
fclean: clean
	$(RM) $(ODIR)/* 
	$(RM) $(DDIR)/*

.PHONY: re
re: fclean r check