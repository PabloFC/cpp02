/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:20:04 by pafuente          #+#    #+#             */
/*   Updated: 2025/12/04 12:20:04 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();                              // Default constructor
    Fixed(const Fixed &other);            // Copy constructor
    Fixed &operator=(const Fixed &other); // Copy assignment operator
    ~Fixed();                             // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
