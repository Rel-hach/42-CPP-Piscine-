/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:33:17 by rel-hach          #+#    #+#             */
/*   Updated: 2023/04/16 10:33:19 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <iostream>

typedef std::vector<int> vector;
typedef std::deque<int> deque;

class PmergeMe
{
    private:
        vector vecContainer;
        deque deqContainer;
    public:
        void fillVector(char **av);
        void fillDeque(deque container, char **av);
        vector mergeSortBegin (vector v,size_t firstIndex, size_t lastIndex);
        // void mergeSortbegin (deque::iterator it, size_t size);
        vector mergeSortEnd (vector v1, vector v2);
        deque mergeSortEnd (deque v1, deque v2);
        void insertionSort(size_t fx, size_t lx);
        // void insertionSort(deque::iterator it, size_t size);
};
