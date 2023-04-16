/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:33:10 by rel-hach          #+#    #+#             */
/*   Updated: 2023/04/16 10:33:12 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::fillVector(char **av)
{
    size_t i = 1;
    while (av[i])
        this->vecContainer.push_back(atoi(av[i++]));
    if (this->vecContainer.size() > 1)
    {
        vector::iterator it;
        this->vecContainer = mergeSortBegin(this->vecContainer, this->vecContainer.size() - 1);
        for (it = vecContainer.begin(); it != vecContainer.end(); it++)
        {
            std::cout << *it << std::endl;
        }
    }
}

void PmergeMe::fillDeque(deque container, char **av)
{
    size_t i = 1;
    while (av[i])
        container.push_back(atoi(av[i++]));
}

vector PmergeMe::mergeSortBegin (vector v, size_t firstIndex, size_t lastIndex)
{
    if (lastIndex - firstIndex <= 10)
    {
        insertionSort(firstIndex, lastIndex);
        return v;
    }
    size_t mid = (lastIndex - firstIndex) / 2;
    vector v1 = mergeSortBegin(v, firstIndex , mid);
    vector v2 = mergeSortBegin(v, mid + 1, lastIndex);
    return( mergeSortEnd (v1, v2));
}       

// void PmergeMe::mergeSortbegin (deque::iterator it, size_t size)
// {
//     if (size <= 20)
//         insertionSort(it, size);
//     size_t newSize = size / 2;
//     mergeSortBegin(it , newSize);
//     mergeSortBegin(it + newSize, (size - newSize));
//     mergeSortEnd(it, size, it + size, (size - newSize));
// }

vector PmergeMe::mergeSortEnd (vector v1, vector v2)
{
    vector nvec;

    while (!v1.empty() && !v2.empty())
    {
        if (v1.at(0) > v2.at(0)) { nvec.push_back(v2.at(0)); v2.erase(v2.begin()); }
        else { nvec.push_back(v1.at(0)); v1.erase(v1.begin()); }
    }
    while (!v1.empty()) { nvec.push_back(v1.at(0)); v1.erase(v1.begin()); }
    while (!v2.empty()) { nvec.push_back(v2.at(0)); v2.erase(v1.begin()); }
    return (nvec);
}

deque PmergeMe::mergeSortEnd (deque v1, deque v2)
{
   deque nvec;

    while (!v1.empty() && !v2.empty())
    {
        if (v1.at(0) > v2.at(0)) { nvec.push_back(v2.at(0)); v2.pop_front(); }
        else { nvec.push_back(v1.at(0)); v1.pop_front(); }
    }
    while (!v1.empty()) { nvec.push_back(v1.at(0)); v1.pop_front(); }
    while (!v2.empty()) { nvec.push_back(v2.at(0)); v2.pop_front(); }
    return (nvec);
}

void    PmergeMe::insertionSort(size_t fx, size_t lx)
{
    size_t t = 0;
    for (size_t i = fx + 1; i <= (lx - fx) ; )
    {
        if (vecContainer[i] < vecContainer[i - 1])
        {
            size_t temp = vecContainer[i - 1];
            vecContainer[i - 1] = vecContainer[i];
            vecContainer[i] = temp;
            if (i > 1 && vecContainer[i - 1] < vecContainer[i - 2])
            { 
                i--; t++;
            }
            else 
            { 
                i += t + 1; t = 0;
            }
        }
        else
            i++;
    }
}

// void PmergeMe::mergeSortEnd (deque::iterator it1, size_t size1, deque::iterator it2, size_t size2)
// {
//     for (size_t i = 0; i < size2; i++)
//     {
//         for (size_t j = 0; j < size1; j++)
//         {
//             if (it1[j] > it2[i])
//             {
//                 size_t temp = it1[j];
//                 it1[i] = it2[j];
//                 it2[j] = temp;
//             }
//         }
//     }
// }


// void    PmergeMe::insertionSort(deque::iterator it, size_t size)
// {
//     size_t t = 0;
//     for (size_t i = 1; i < size ; )
//     {
//         if (it[i] < it[i - 1])
//         {
//             size_t temp = it[i - 1];
//             it[i - 1] = it[i];
//             it[i] = temp;
//             if (i > 1 && it[i - 1] < it[i - 2]) {
//                 i--; t++;
//             }
//             else {
//                 i += t + 1; t = 0;
//             }
//         }
//         else
//             i++;
//     }
// }