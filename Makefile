NAME = push_swap
NAME_B = checker
CC = cc #-g -fsanitize=address
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f

SRC =	./mandatory/push_swap.c ./mandatory/push_swap_utils.c ./mandatory/ft_strjoin.c ./mandatory/ft_split.c \
	./mandatory/ft_lsts.c ./mandatory/ft_atoi.c ./mandatory/ft_error.c \
	./mandatory/ft_push.c ./mandatory/ft_swap.c ./mandatory/ft_rrotate.c ./mandatory/ft_rotate.c \
	./mandatory/ft_sort_three.c ./mandatory/ft_sort_five.c \
	./mandatory/ft_index_stack.c ./mandatory/parsing.c ./mandatory/final_sort.c \
	./mandatory/ft_big_sort.c ./mandatory/ft_big_sort_utils.c ./mandatory/ft_index_moves.c ./mandatory/ft_move_type.c

SRC_B =	./bonus/checker.c ./bonus/checker_utils.c ./bonus/ft_strjoin_bonus.c \
	./bonus/ft_split_bonus.c ./bonus/ft_lsts_bonus.c ./bonus/ft_atoi_bonus.c \
	./bonus/ft_error_bonus.c ./bonus/ft_push_bonus.c ./bonus/ft_swap_bonus.c \
	./bonus/ft_rrotate_bonus.c ./bonus/ft_rotate_bonus.c \
	./bonus/parsing_bonus.c  ./bonus/ft_strcmp.c  ./bonus/get_next_line.c  ./bonus/get_next_line_utils.c 


OBJ = $(SRC:%.c=%.o)
OBJ_B = $(SRC_B:%.c=%.o)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(NAME_B): $(OBJ_B)
	@$(CC) $(CFLAGS) $(OBJ_B) -o $(NAME_B)

%.o: %.c ./mandatory/push_swap.h ./bonus/checker.h
	@$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

bonus : $(NAME_B)

clean:
	@$(RM)	$(OBJ)	$(OBJ_B)

fclean:	clean
	@$(RM)	$(NAME)	$(NAME_B) 

re: fclean all

.PHONY: all clean fclean re boonus