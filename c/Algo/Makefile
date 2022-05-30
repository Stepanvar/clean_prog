BASENAME	= algo
ODIR	= ./bin
SDIR	= ./src
DDIR	= ./deps
LDIR	= ./libs
SRCS	= $(shell find $(SDIR) -name '*.cpp')
OBJS	= $(patsubst $(SDIR)/%.cpp, $(ODIR)/%.o, $(SRCS))
DEPS	= $(patsubst $(ODIR)/%.o, $(DDIR)/%.d, $(OBJS))
CFLAGS	= -Wall -Wextra -g $(AFL)
SUBDIRS = $(shell find $(LDIR) -type d -name 'src')
INCS	= $(patsubst %, -I%, $(SUBDIRS))
MAIN	= $(shell grep -o "main" $(SDIR)/*.cpp)
CC	= g++
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
else
	$(CC) $(CFLAGS) -o $@ $^
endif
$(ODIR)/%.o: $(SDIR)/%.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< $(INCS) -MMD
	@for dep in $(notdir $(DEPS)); do \
	mv $(ODIR)/$$dep $(DDIR)/$$dep; \
	done
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

