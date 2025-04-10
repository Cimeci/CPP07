/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:05:24 by inowak--          #+#    #+#             */
/*   Updated: 2025/04/10 18:15:34 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <algorithm>

template <typename T>

void swap(T &a, T &b){std::swap(a, b);}

template <typename T>

T max(T a, T b){return (a > b) ? a : b;}

template <typename T>

T min(T a, T b){return (a < b) ? a : b;}
