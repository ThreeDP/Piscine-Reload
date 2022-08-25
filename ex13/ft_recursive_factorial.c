/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:13:17 by dapaulin          #+#    #+#             */
/*   Updated: 2022/08/25 15:02:22 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_aux(int nb, int result)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (result);
	else
		return (ft_recursive_factorial_aux(nb - 1, nb * result));
}

int	ft_recursive_factorial(int nb)
{	
	return (ft_recursive_factorial_aux(nb, 1));
}
