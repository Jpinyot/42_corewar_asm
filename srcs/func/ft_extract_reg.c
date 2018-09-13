#include "libasm.h"

static int	ft_jmp_to_next(char *l, int i)
{
	while (l[i] && (l[i] == ' ' || l[i] == '\t'))
		i++;
	if (l[i] != SEPARATOR_CHAR && l[i] != 0 && l[i] != COMMENT_CHAR)
		return (-1);
	if (l[i] == 0 || l[i] == COMMENT_CHAR)
		return (i);
	i++;
	while (l[i] && (l[i] == ' ' || l[i] == '\t'))
		i++;
	return (i);
}

static int	ft_set_ocp(int pos, int ocp)
{
	if (pos == 0)
		ocp = ocp | 0b01000000;
	else if (pos == 1)
		ocp = ocp | 0b00010000;
	else
		ocp = ocp | 0b00000100;
	return (ocp);
}

int	ft_extract_reg(t_line **line, int i, int n_line, int pos)
{
	line[0]->arg_size[pos] = REG_SIZE;
	line[0]->ocp = ft_set_ocp(pos, line[0]->ocp);
	i = ft_atoi_asm(line[0]->line, i, &line[0]->arg[pos]);
	if ((i = ft_jmp_to_next(line[0]->line, i)) == -1)
		ft_error_par(n_line, 0, "register", "r22,");
	line[0]->w += REG_SIZE;
	return (i);
}
