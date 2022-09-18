NAME 	= so_long
CC 	= cc
CFLAGS 	= -Wall -Wextra -Werror 

SRCS 	= srcs/so_long.c\
		srcs/check_map_name.c\
		srcs/take_text.c\
		srcs/error.c\
		srcs/check_argc_argv.c\
		srcs/error_map.c\
		srcs/check_wall.c\
		srcs/create_img.c\
		srcs/event_key.c\
		srcs/utilis.c\
		srcs/open_close_window.c\
		srcs/struct_var.c



all: $(NAME)

OBJS	= $(SRCS:.c=.o)

$(NAME) : $(OBJS) 
	@$(CC) -lmlx -framework OpenGL -framework AppKit  $^ -o $@
	
clean: 
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
