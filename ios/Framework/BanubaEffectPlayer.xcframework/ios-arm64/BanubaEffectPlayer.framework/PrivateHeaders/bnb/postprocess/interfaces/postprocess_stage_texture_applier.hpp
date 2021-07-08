/// \file
/// \addtogroup Postprocess
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from postprocess.djinni

#pragma once

#include <bnb/utils/defs.hpp>
#include <cstdint>
#include <memory>
#include <string>
#include <unordered_map>

namespace bnb { namespace interfaces {

class postprocess_stage;

/** Apply stage on texture. */
class BNB_EXPORT postprocess_stage_texture_applier {
public:
    virtual ~postprocess_stage_texture_applier() {}

    /**
     * @param stage postprocess stage which you need to apply on passed texture.
     * @param params parameters for effect.
     * @param texture_id OpenGL id of texture which contain desired texture for processing.
     */
    virtual void apply(const std::shared_ptr<postprocess_stage> & stage, const std::unordered_map<std::string, std::string> & params, int32_t texture_id) = 0;

    static std::shared_ptr<postprocess_stage_texture_applier> create();
};

} }  // namespace bnb::interfaces
/// @}

