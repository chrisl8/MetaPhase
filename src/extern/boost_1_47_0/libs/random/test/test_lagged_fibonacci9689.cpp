/* test_lagged_fibonacci9689.cpp
 *
 * Copyright Steven Watanabe 2011
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 *
 * $Id: test_lagged_fibonacci9689.cpp 71018 2011-04-05 21:27:52Z steven_watanabe $
 *
 */

#include <boost/random/lagged_fibonacci.hpp>

#define BOOST_RANDOM_URNG boost::random::lagged_fibonacci9689

#define BOOST_RANDOM_SEED_WORDS 9689*2

#define BOOST_RANDOM_VALIDATION_VALUE 0.059230573043926427
#define BOOST_RANDOM_SEED_SEQ_VALIDATION_VALUE 0.84199156986666068
#define BOOST_RANDOM_ITERATOR_VALIDATION_VALUE 0.0039672851571737056

#define BOOST_RANDOM_GENERATE_VALUES { 0x32EF18BEU, 0x79277C11U, 0xA383438U, 0x32155952U }

#include "test_generator.ipp"
