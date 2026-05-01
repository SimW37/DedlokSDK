#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPassthroughFakeWall : public source2sdk::client::C_BaseModelEntity
        {
        public:
            bool m_bAllowAnyone; // 0x9a0            
            bool m_bAllowTinyCharacters; // 0x9a1            
            uint8_t _pad09a2[0x2]; // 0x9a2
            float m_flTriggerDistanceMeters; // 0x9a4            
            // m_hTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTrigger;
            char m_hTrigger[0x4]; // 0x9a8            
            uint8_t _pad09ac[0x4]; // 0x9ac
            source2sdk::entity2::CEntityIOOutput m_eventOnOpen; // 0x9b0            
            source2sdk::entity2::CEntityIOOutput m_eventOnClose; // 0x9c8            
            uint8_t _pad09e0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPassthroughFakeWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPassthroughFakeWall) == 0x9e8);
    };
};
