/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_analyse.1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:15:40 by cfauvell          #+#    #+#             */
/*   Updated: 2018/12/07 21:03:29 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*Fonction qui recupère tout le fichier d'un coup
(BUFF_SIZE = 546(taille maximum de notre fichier))*/
char	*read_all_file(int fd, char *buff, int *ret)
{
	char	tmp[BUFF_SIZE + 1];
	char	*tmp2;

	*ret = read(fd, tmp, BUFF_SIZE);
	tmp[*ret] = '\0';
	tmp2 = buff;
	if (!(buff = ft_strjoin(buff, tmp)))
		return (NULL);
	ft_strdel(&tmp2);
	return(buff);
}

//Fonction qui permet de repartir le fichier en **tab
char	**sort_tetri(fd)
{
	static char *final;
	char **piece;
	char *tmp;
	int ret;

	ret = 0;
	if (!final)
	{
		if (!(final = ft_strnew(BUFF_SIZE)))
			return (NULL);
	}
	if(!(final = read_all_file(fd, final, &ret)))
		return (0);
	if ((tmp = ft_strstr(final, "\n\n")) != NULL)
		*tmp = '\0';
	//final devient un ligne simple, mais separé par des /n..
	if(!(piece = ft_strsplit(final, '\n')))
		return (0);
	//chelou que ce soit tmp + 1 ou + 2 ca fait la meme chose
	if (!(ft_memmove(final, tmp + 1, ft_strlen(tmp + 1) + 1)))
		return (0);
	return (piece);
}

/*Permet de tester le tetriminos(sans la reconnaissance des pieces pour 
le moment)*/
int		check_tetri(char **tab)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (tab[i])
	{
		j = 0;
		while(tab[i][j])
		{
			if (tab[i][j] != 46 && tab[i][j] != 35)
				return (0);
			if (tab[i][j] == '#')
				k++;
			j++;
		}
		if (j != 4)
			return (0);
		i++;
	}
	if (i != 4 || k != 4)
		return (0);
	else
		return (1);
}

int		main(void)
{
	char **tab;
	char **tab1;
	char **tab2;
	int fd;
	
	fd = open ("test_27.fillit",  O_RDONLY);
	tab = sort_tetri(fd);
	if (!(check_tetri(tab)))
		return (0);
	ft_print_words_tables(tab);
	ft_putstr("\n");
	tab1 = sort_tetri(fd);
	if (!(check_tetri(tab1)))
		return (0);
	ft_print_words_tables(tab1);
	tab2 = sort_tetri(fd);
	ft_putstr("\n");
	if (!(check_tetri(tab2)))
		return (0);
	ft_print_words_tables(tab2);
	close (fd);
}

/*Reste a faire:
- Verification des formes
- Mettre les tab dans le tableau de structure
- Donner un index au tetriminos
- Definir leur longeur/largeur
- Il faut que quand un tetriminos n'est pas bon tout le process s'arrete
- Tchequer le bon nombre de tetriminos*/
