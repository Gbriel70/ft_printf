/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:00 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/22 13:42:29 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define DECIMAL_BASE "0123456789"
# define HEXADECIMAL_BASE "0123456789abcdef"
# define UPER_HEXADECIMAL_BASE "0123456789ABCDEF"

int	ft_printf(const char *input, ...);

int	ft_printchar(char c);
int	ft_printstr(const char *str);
int	ft_print_pointer(unsigned long ptr, char *base);
int	ft_print_number(unsigned int nbr);
int	ft_putnbr_base(long int nbr, char *base);

#endif