#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CModifierHandleBase.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1150
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsFullyCharged"
        #pragma pack(push, 1)
        class CCitadel_Ability_Frank_ShockTarget2 : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x388]; // 0xd88
            // m_vecHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitTargets;
            char m_vecHitTargets[0x18]; // 0x1110            
            uint8_t _pad1128[0x8]; // 0x1128
            // metadata: MNetworkEnable
            bool m_bIsFullyCharged; // 0x1130            
            uint8_t _pad1131[0x7]; // 0x1131
            source2sdk::client::CModifierHandleBase m_hFullyChargedFXModifier; // 0x1138            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Frank_ShockTarget2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Frank_ShockTarget2) == 0x1150);
    };
};
