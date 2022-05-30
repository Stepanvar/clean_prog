#ifndef SYNTAX_HPP
# define SYNTAX_HPP
# include <iostream>
typedef enum days{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
} s_day;
void	print_data_size(void);
void	check_static();
void	static_vs_auto(void);
#endif