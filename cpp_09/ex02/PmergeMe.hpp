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
#include <string>
#include <stdlib.h>
#include <utility>
#include <sstream>
#include <limits.h>
#include <sys/time.h>
#include <time.h>

typedef std::vector<int> vector;
typedef std::deque<int> deque;

class PmergeMe
{
    private:

        vector vecContainer;
        deque deqContainer;

    public:

        PmergeMe();
        PmergeMe(const PmergeMe& obj);
        PmergeMe& operator = (const PmergeMe& obj);

        void start_processing(char **str);
        void fillVector(char **av);
        void fillDeque(char **av);
        void swap(int& a, int& b);

        void Fstep_mergeSortV (vector& vcontainer);
        void insertionSortV(vector& vcontainer);
        void lstep_mergeSortV (vector& vcontainer, vector& v1, vector& v2);

        void Fstep_mergeSortD (deque& dcontainer);
        void insertionSortD(deque& dcontainer);
        void lstep_mergeSortD (deque& dcontainer, deque& d1, deque& d2);

        long timeNowIs();
};