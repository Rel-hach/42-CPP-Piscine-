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

 /*-----------------------------------------------------------------------------*/

template <typename T>
void printContainerElements(T& container)
{
    for (size_t i = 0; i < container.size(); i++)
        std::cout << container[i] << " ";
    std::cout << std::endl;
    
}


long PmergeMe::timeNowIs()
{
    struct timeval t;

    gettimeofday(&t, NULL);

    long timeIs = t.tv_sec * 1000000 + t.tv_usec;
    return (timeIs);
}

void PmergeMe::swap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}


/*-------------------------------------------------------------------------------*/

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& obj)
{
    if (this != &obj)
        *this = obj;
}

PmergeMe& PmergeMe::operator = (const PmergeMe& obj)
{
    if (this != &obj)
    {
        this->vecContainer = obj.vecContainer;
        this->deqContainer = obj.deqContainer;
    }
    return (*this);
}

/* -----------------------------VECTOR CASE : --------------------------------- */



void PmergeMe::fillVector(char **av)
{
    long number, i = 1;
    while (av[i])
    {
        int j = 0;
        while (isdigit(av[i][j])) j++;
        if (av[i][j] != '\0') { std::cout << "Error: invalid input" << std::endl; return; }
        number = atof(av[i]);
        if (number > INT_MAX || number < 0) { std::cout << "Error: invalid input" << std::endl; return; }
        this->vecContainer.push_back(number);
        i++;
    }
}


void PmergeMe::Fstep_mergeSortV (vector& vcontainer)
{
    if (vcontainer.size() <= 10)
        insertionSortV(vcontainer);
    else
    {
        vector left_side, right_side;
        vector::iterator it;
        for (size_t i = 0; i < vcontainer.size() / 2; i++)
        {
            left_side.push_back(vcontainer.at(0));
            vcontainer.erase(vcontainer.begin());
        }
        while (!vcontainer.empty())
        {
            right_side.push_back(vcontainer.at(0));
            vcontainer.erase(vcontainer.begin());
        }
        Fstep_mergeSortV(left_side);
        Fstep_mergeSortV(right_side);
        lstep_mergeSortV(vcontainer, left_side, right_side);
    }
}

void PmergeMe::insertionSortV(vector& vcontainer)
{
    for (size_t i = 1; i < vcontainer.size(); i++)
    {
        for (size_t j = i; j > 0 && vcontainer[j] < vcontainer[j - 1]; j--)
        {
            swap(vcontainer[j], vcontainer[j - 1]);
        }
    }
}

void PmergeMe::lstep_mergeSortV (vector &vcontainer, vector& v1, vector& v2)
{
    while (!v1.empty() && !v2.empty())
    {

        if (v1.at(0) > v2.at(0)) { vcontainer.push_back(v2.at(0)); v2.erase(v2.begin()); }
        else { vcontainer.push_back(v1.at(0)); v1.erase(v1.begin()); }
    }
    while (!v1.empty()) { vcontainer.push_back(v1.at(0)); v1.erase(v1.begin()); }
    while (!v2.empty()) { vcontainer.push_back(v2.at(0)); v2.erase(v2.begin()); }
}



/* -----------------------------DEQUE CASE : --------------------------------- */


void PmergeMe::fillDeque(char **av)
{
   long number, i = 1;
    while (av[i])
    {
        int j = 0;
        while (isdigit(av[i][j])) j++;
        if (av[i][j] != '\0') { std::cout << "Error: invalid input" << std::endl; return; }
        number = atof(av[i]);
        if (number > INT_MAX || number < 0) { std::cout << "Error: invalid input" << std::endl; return; }
        this->deqContainer.push_back(number);
        i++;
    }
}


void PmergeMe::Fstep_mergeSortD (deque& vcontainer)
{
    if (vcontainer.size() <= 10)
        insertionSortD(vcontainer);
    else
    {
        deque left_side, right_side;
        deque::iterator it;
        for (size_t i = 0; i < vcontainer.size() / 2; i++)
        {
            left_side.push_back(vcontainer.at(0));
            vcontainer.pop_front();
        }
        while (!vcontainer.empty())
        {
            right_side.push_back(vcontainer.at(0));
            vcontainer.pop_front();
        }
        Fstep_mergeSortD(left_side);
        Fstep_mergeSortD(right_side);
        lstep_mergeSortD(vcontainer, left_side, right_side);
    }
}


void PmergeMe::insertionSortD(deque& dcontainer)
{
    for (size_t i = 1; i < dcontainer.size(); i++)
    {
        for (size_t j = i; j > 0 && dcontainer[j] < dcontainer[j - 1]; j--)
        {
            swap(dcontainer[j], dcontainer[j - 1]);
        }
    }
}

void PmergeMe::lstep_mergeSortD (deque &dcontainer, deque& d1, deque& d2)
{
    while (!d1.empty() && !d2.empty())
    {
        if (d1.at(0) > d2.at(0)) { dcontainer.push_back(d2.at(0)); d2.pop_front(); }
        else {dcontainer.push_back(d1.at(0)); d1.pop_front(); }
    }
    while (!d1.empty()) { dcontainer.push_back(d1.at(0)); d1.pop_front(); }
    while (!d2.empty()) { dcontainer.push_back(d2.at(0)); d2.pop_front(); }
}

void PmergeMe::start_processing(char **str)
{
    fillVector(str);
    fillDeque(str);

    std::cout << "Before: "; printContainerElements<vector>(this->vecContainer);
    time_t tick_beginVV = timeNowIs();
    time_t tick_beginV = clock();
    Fstep_mergeSortV(vecContainer);
    time_t tick_endVV = timeNowIs();
    time_t tick_endV = clock();

    std::cout << "After: "; printContainerElements<vector>(this->vecContainer);

    time_t tick_beginD = clock();
    time_t tick_beginDD = timeNowIs();
    Fstep_mergeSortD(deqContainer);
    time_t tick_endD = clock();
    time_t tick_endDD = timeNowIs();


    std::cout << "Time to process a range of " << vecContainer.size() <<" elements with  std::vector : " << ((double)(tick_endV - tick_beginV) / CLOCKS_PER_SEC) * 10000 << " us" << std::endl;
    std::cout << "Time to process a range of " << deqContainer.size() <<" elements with  std::deque : " << ((double)(tick_endD - tick_beginD) / CLOCKS_PER_SEC) * 10000 << " us" << std::endl;


    std::cout << "Time to process a range of " << vecContainer.size() <<" elements with  std::vector : " << (- tick_beginVV + tick_endVV) << std::endl;
    std::cout << "Time to process a range of " << deqContainer.size() <<" elements with  std::deque : " << (- tick_beginDD + tick_endDD) << std::endl;
}