#include <iostream>

class Idea
{
	public:
		char	*goal;
		int	rate;
		char	*source;
		void	ft_connect(){
			rate += 1;
		}
		void	ft_create(){
			rate -= 1;
		}
		void	ft_delete(char *str){
			source = str;
		}
};
