/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:05:44 by coder             #+#    #+#             */
/*   Updated: 2022/09/02 16:29:32 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
		return (0x0);
	ptr = malloc((max - min) * sizeof(int));
	if (!ptr)
		return (0x0);
	i = 0;
	while (i <= (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	ptr[i] = 0x0;
	return (ptr);
}
