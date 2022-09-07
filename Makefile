NAME = push_swap

CHECKER_NAME = checker

CC	= gcc

CFLAGS	=	-Wall -Wextra -Werror

SRC_DIR	=	./src/

OBJ_DIR	=	./obj/

SRCS	=	main.c \
			init/stack_init.c \
			init/checker_errors.c \
			init/parser.c\
			operations/swap.c \
			operations/push.c \
			operations/rotate.c \
			operations/reverse_rotate.c \
			algo/order_sort_list.c \
			algo/order_list.c \
			algo/utils.c 

CHECKER_SRCS	=	bonus/checker.c \
				init/parser.c \
				init/stack_init.c \
				init/checker_errors.c \
				algo/order_sort_list.c \
				algo/order_list.c \
				algo/utils.c \
				operations/swap.c \
				operations/push.c \
				operations/rotate.c \
				operations/reverse_rotate.c 

OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

CHECKER_OBJS = $(addprefix $(OBJ_DIR), $(CHECKER_SRCS:.c=.o))


all: lib obj $(NAME) 

obj:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/init
	@mkdir -p $(OBJ_DIR)/operations
	@mkdir -p $(OBJ_DIR)/algo
	@mkdir -p $(OBJ_DIR)/bonus

$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	$(CC) $(CFLAGS) -I ./includes/ -I ./42-library/ -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L ./42-library -l ft -o $(NAME)

bonus: lib $(CHECKER_OBJS)
	$(CC) $(CFLAGS) $(CHECKER_OBJS) -L ./42-library -l ft -o $(CHECKER_NAME)

lib:
	make -C	./42-library

clean:
	make clean -C ./42-library
	rm -rf obj $(OBJS) $(CHECKER_OBJS)

fclean: clean
	make fclean -C ./42-library
	rm -rf obj $(NAME) $(CHECKER_NAME)

re: fclean all

prueba:
		./push_swap 8 6 7 65 5 4 

.PHONY:     all clean fclean re