#include "libasm.h"
/*
static t_label	*add_to_copy(t_label *label, t_label *tmp, int id, char *l)
{
	t_label *tmp2;

	tmp2 = label[id];
	while (tmp2->copy)
	{
		tmp2 = tmp2->copy;
	}
	tmp2->copy = tmp;
	label->actual = tmp2->copy;
	return (label);
}
*/
t_label		*ft_add_new_label(t_label **label, int  id, char *l, int i)
{
//	t_label	*tmp;

	id = ft_hash_it(id, 99);
//	tmp = ft_newlabel(l, id);
//	if (label[id])
//		return (add_to_copy(label, tmp, id, &l[i]));
//	else
		label[id]->id = id;
		label[id]->name = &l[i];
//	label[id] = tmp;
	return (label[0]);
}
