
NAME = project

all: $(NAME)

$(NAME) :
	make -C libft/
	make -C check/
	make -C push/

clean:
	make clean -C check/
	make clean  -C push/
	

fclean: clean
	make fclean -C check/
	make fclean  -C push/
	make fclean -C libft/

lib: 
	make re -C libft/

re: fclean all