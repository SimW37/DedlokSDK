#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x17f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_PestilenceDroneDispenser : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1790[0x10]; // 0x1790
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAbility;
            char m_hAbility[0x4]; // 0x17a0            
            uint8_t _pad17a4[0x4c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_PestilenceDroneDispenser because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_PestilenceDroneDispenser) == 0x17f0);
    };
};
