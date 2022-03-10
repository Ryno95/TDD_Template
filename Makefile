NAME=TDD
TEST_NAME=$(NAME)_test
CC=gcc
CFLAGS=-Wall -Wextra -Werror -fsanitize=address
LDFLAGS=-lpthread

SRCS= 	src/ft_math.c

TEST_SRCS= 	Unit_tests/main.c\
			Unit_tests/math_tests.c\

all:$(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) main.c $(SRCS) $(LDFLAGS) -o $(NAME)

test: $(SRCS) $(TEST_SRCS)
	$(CC) $(CFLAGS) $(SRCS) $(TEST_SRCS) $(LDFLAGS) -o $(TEST_NAME)
	./$(TEST_NAME)

acceptence: $(NAME)
	./Acceptence_test/acceptence.sh
	./Acceptence_test/run_norminette.sh

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(NAME)
	rm -f $(TEST_NAME)
	rm -f *.o
	rm -f norminette_result

re: fclean all

fclean: clean