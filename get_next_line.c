#include "get_next_line.h"

char *fill_line(char **leftover)
{
    char *line;
    char *new_leftover;
    size_t i = 0;
    if (!*leftover)
        return NULL;
    while ((*leftover)[i] && (*leftover)[i] != '\n')
        i++;
    if((*leftover)[i] == '\n')
        line = ft_substr(*leftover, 0, i + 1);
    else
        line = ft_substr(*leftover, 0, i);
    if (!line)
        return NULL;
    if ((*leftover)[i] == '\n')
        new_leftover = ft_strdup(*leftover + i + 1);
    else
        new_leftover = NULL;
    free(*leftover);
    *leftover = new_leftover;
    return line;
}

char *read_data_from_buffer(char **leftover, int fd)
{
    char buffer[BUFFER_SIZE + 1];
    ssize_t bytes_read;
    char *temp;
    if (!*leftover)
        *leftover = ft_strdup("");
    if (!*leftover)
        return NULL;
    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[bytes_read] = '\0';
        temp = ft_strjoin(*leftover, buffer);
        if (!temp)
            return (free(*leftover), *leftover = NULL, NULL);
        free(*leftover);
        *leftover = temp;
        if (ft_strchr(buffer, '\n'))
            return fill_line(leftover);
    }
    if (bytes_read < 0 || (!*leftover))
        return (free(*leftover), *leftover = NULL, NULL);
    return fill_line(leftover);
}

char *get_next_line(int fd)
{
    static char *leftover;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;
    if (leftover && ft_strchr(leftover, '\n'))
        return fill_line(&leftover);
    line = read_data_from_buffer(&leftover, fd);
    if (!line && *leftover)
    {
        line = ft_strdup(leftover);
        free(leftover);
        leftover = NULL;
    }
    if(!leftover)
        return NULL;
    return line;
}
