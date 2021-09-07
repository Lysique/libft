NAME = libft.a
FILES = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd 
FILES_BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap ft_lstlast
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
SRCS_DIR = ./
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_BONUS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_BONUS)))

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
all: $(NAME)
	
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
bonus: $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
