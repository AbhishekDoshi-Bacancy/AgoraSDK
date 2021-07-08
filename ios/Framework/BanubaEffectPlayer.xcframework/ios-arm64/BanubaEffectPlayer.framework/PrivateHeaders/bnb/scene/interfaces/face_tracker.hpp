/// \file
/// \addtogroup Scene
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from scene.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <cstdint>

namespace bnb { namespace interfaces {

class BNB_EXPORT face_tracker {
public:
    virtual ~face_tracker() {}

    virtual void set_face_index(int32_t index) = 0;

    virtual int32_t get_face_index() const = 0;

    virtual bool has_face() const = 0;
};

} }  // namespace bnb::interfaces
/// @}

