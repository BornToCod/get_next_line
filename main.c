// #include "get_next_line_bonus.h"

// int main()
// {
//     int fd = open("output.txt", O_RDONLY);
//     int fd1 = open("test.txt", O_RDONLY);
//     if(fd < 0 || fd1 < 0)
//         return 0;
//     // int x = read(fd, 0, 0);
//     // printf("%d", x);
//     char *s = get_next_line(fd1);
//     printf("%s", s);
//     char *p = get_next_line(fd1);
//     printf("%s", p);
// //      char *s1 = get_next_line(fd);
// //      printf("%s", s1);
// //      char *p1 = get_next_line(fd1);
// //      printf("%s", p1);
// //    free(s);
// //    free(p);
// //     free(s1);
// //     free(p1);
// }