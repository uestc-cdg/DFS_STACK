CC = gcc
TARGET = dfs_stack
CFLAGS = -g -Wall
SRCS = test.c ../../Stack/test_arr.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)
# $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean