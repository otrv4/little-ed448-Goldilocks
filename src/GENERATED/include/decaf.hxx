/**
 * @file decaf.hxx
 * @author Mike Hamburg
 *
 * @copyright
 *   Copyright (c) 2015-2016 Cryptography Research, Inc.  \n
 *   Released under the MIT License.  See LICENSE.txt for license information.
 *
 * Master header for Decaf library, C++ version.
 *
 * @warning This file was automatically generated in Python.
 * Please do not edit it.
 */

#ifndef __DECAF_HXX__
#define __DECAF_HXX__ 1

#include <decaf/point_255.hxx>
#include <decaf/point_448.hxx>

namespace decaf {
    template <template<typename Group> class Run>
    void run_for_all_curves() {
        Run<IsoEd25519>::run();
        Run<Ed448Goldilocks>::run();
    }
}

#endif /* __DECAF_HXX__ */
