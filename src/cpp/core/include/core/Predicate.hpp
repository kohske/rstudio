/*
 * Predicate.hpp
 *
 * Copyright (C) 2009-11 by RStudio, Inc.
 *
 * This program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef CORE_PREDICATE_HPP
#define CORE_PREDICATE_HPP

#include <boost/bind.hpp>
#include <boost/function.hpp>

namespace core {
namespace predicate {

template <typename T>
bool isWithinRange(const T& value, const T& min, const T& max)
{
   return (value >= min) && (value <= max);
}

template <typename T>
boost::function<bool(T)> range(const T& min, const T& max)
{
   return boost::bind(isWithinRange<T>, _1, min, max);
}   
   
   
} // namespace predicate
} // namespace core


#endif // CORE_PREDICATE_HPP

