#include "libasm.h"

void	ft_printlabel(t_label *l)
{
	t_label *label;
	t_label	*tmp;

	label = l;
	while (label)
	{
		ft_putnbr(label->id);
		ft_putchar('\t');
		ft_putstr(label->name);
		tmp = label;
		while (tmp->copy)
		{
			ft_putstr(" -> ");
			ft_putnbr(tmp->copy->id);
//			ft_putchar('\t');
//			ft_putstr(tmp->copy->name);
			tmp = tmp->copy;
		}
		ft_putchar('\n');
		label = label->next;
	}
}
