/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ha <abdel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:23:26 by abdel-ha          #+#    #+#             */
/*   Updated: 2024/11/30 16:24:14 by abdel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE  500
# endif

char		*get_next_line(int fd);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strdup(char *s1);
int			ft_strlen(char *s);
void		*ft_calloc(size_t count, size_t size);
char	    *ft_strchr(char *s, int c);
char	    *ft_strjoin(char *s1, char *s2);
char	    *ft_substr(char *s, int start, int len);

#endif
     