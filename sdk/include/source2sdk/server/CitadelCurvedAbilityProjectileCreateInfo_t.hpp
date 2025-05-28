#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CitadelAbilityProjectileCreateInfo_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x58
        #pragma pack(push, 1)
        struct CitadelCurvedAbilityProjectileCreateInfo_t : public source2sdk::server::CitadelAbilityProjectileCreateInfo_t
        {
        public:
            float m_flTimeToReturn; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelCurvedAbilityProjectileCreateInfo_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CitadelCurvedAbilityProjectileCreateInfo_t) == 0x58);
    };
};
