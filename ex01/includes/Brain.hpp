/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:21:00 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/16 13:26:57 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain 
{
    public :
        Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &other);
        ~Brain();

        const std::string& getIdea(size_t index) const;
        void setIdea(size_t index, const std::string& idea);

        
    private :
        std::string _ideas[100];
};