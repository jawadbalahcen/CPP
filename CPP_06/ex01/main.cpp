/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:02:13 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/05 15:30:28 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data myData;
    myData.m1 = 1;
    myData.m2 = '2';
    myData.m3 = 3.2f;
    myData.m4 = 4.5;
    
    uintptr_t serializedPtr = Serializer::serialize(&myData);

    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    if (deserializedPtr == &myData) {
        std::cout << "Serialization and deserialization successful. Values: " 
                                                <<"["<< deserializedPtr->m1<< "]"
                                                <<"["<< deserializedPtr->m2<< "]" 
                                                <<"["<< deserializedPtr->m3<< "]"
                                                <<"["<< deserializedPtr->m4<< "]" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}