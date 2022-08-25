/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:41:43 by dapaulin          #+#    #+#             */
/*   Updated: 2022/08/25 16:46:57 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_aux(int nb, int sqrt)
{
	if (nb < 0)
		return (0);
	else if (sqrt > 46340)
		return (0);
	else if (sqrt * sqrt == nb)
		return (sqrt);
	return (ft_sqrt_aux(nb, sqrt + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_aux(nb, 0));
}
