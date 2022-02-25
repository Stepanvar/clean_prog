NAME	= print.out
ODIR	= ./bin
SDIR	= ./src
DDIR	= ./deps
LDIR	= ./libs
SRCS	= $(shell find $(SDIR) -name '*.c')
OBJS	= $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))
DEPS	= $(addsuffix .d, $(basename $(OBJS)))
CFLAGS	= -Wall -Wextra -g $(AFL)
LIBS	= $(shell find $(LDIR) -maxdepth 2 -name "*.a")
CC	= gcc
RM	= rm -rf

.PHONY: all

all: MK $(NAME) $(DDIR)/%.d

MK: $(LIBS)
	@if [ -z $(LIBS) ]; then\
		echo "no libs found"; \
	else\
		$(MAKE) -C $(dir $<);\
	fi


$(NAME): $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) -o $@ $^

$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $< -MMD
$(DDIR)/%.d: $(DEPS)
	mv $< $(dir $@)
-include $(DEPS)
.PHONY: clean
clean:
	$(RM) $(NAME)

.PHONY: fclean
fclean: clean
	$(RM) $(ODIR)

.PHONY: re
re: fclean all

