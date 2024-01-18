SRCS	=	main.cpp\
			Serialize.cpp
			

DIR_SRCS = src/

DIR_HEAD = header/

DIR_OBJS = .objs/

OBJS	=	${SRCS:%.cpp=${DIR_OBJS}%.o}

CC++	=	c++

MKDIR	=	mkdir -p

HEADERS	=	Serialize.hpp\SerializeSerialize
			

NAME	=	Serialize


C++FLAGS	= -Wall -Wextra -Werror -std=c++98
 
all :		${NAME}

clean :		
			rm -rf ${DIR_OBJS}

fclean :	clean
			rm -rf ${NAME}

re :		fclean
			$(MAKE) all


${DIR_OBJS}%.o:		${DIR_SRCS}%.cpp    ${addprefix ${DIR_HEAD}, ${HEADERS}} | ${DIR_OBJS}
					${CC++} ${C++FLAGS} -I ${DIR_HEAD} -c $< -o $@

${DIR_OBJS}			:
					${MKDIR} ${DIR_OBJS}

${NAME}	:	${OBJS}
			${CC++} ${C++FLAGS} -o ${NAME} ${OBJS}


.PHONY:		all clean fclean re