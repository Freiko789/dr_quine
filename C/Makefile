COLLEENSRC = Colleen.c
COLLEENOBJ = Colleen.o
COLLEENOUT = Colleen

GRACESRC = Grace.c
GRACEOBJ = Grace.o
GRACEOUT = Grace

SULLYSRC = Sully.c
SULLYOBJ = Sully.o
SULLYOUT = Sully

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJ_FILES = $(COLLEENOBJ) $(GRACEOBJ) $(SULLYOBJ)
EXECUTABLES = $(COLLEENOUT) $(GRACEOUT) $(SULLYOUT)

all: $(EXECUTABLES)

$(COLLEENOUT): $(COLLEENOBJ)
	$(CC) $(CFLAGS) -o $@ $<

$(GRACEOUT): $(GRACEOBJ)
	$(CC) $(CFLAGS) -o $@ $<

$(SULLYOUT): $(SULLYOBJ)
	$(CC) $(CFLAGS) -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(EXECUTABLES)

re: fclean all
