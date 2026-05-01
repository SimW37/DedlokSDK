#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelModifier;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x15c8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsTransformed"
        // static metadata: MNetworkVarNames "GameTime_t m_flWerewolfStartTime"
        #pragma pack(push, 1)
        class CCitadel_Werewolf_Transformation : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x600]; // 0xf90
            // metadata: MNetworkEnable
            bool m_bIsTransformed; // 0x1590            
            bool m_bIsTransformingBack; // 0x1591            
            uint8_t _pad1592[0x2]; // 0x1592
            source2sdk::entity2::GameTime_t m_tLastRegenComponentThinkTime; // 0x1594            
            uint8_t _pad1598[0x4]; // 0x1598
            source2sdk::entity2::GameTime_t m_tForceTransformTime; // 0x159c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flWerewolfStartTime; // 0x15a0            
            uint8_t _pad15a4[0x4]; // 0x15a4
            source2sdk::server::CCitadelModifier* m_pWerewolfModifier; // 0x15a8            
            uint8_t _pad15b0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Werewolf_Transformation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Werewolf_Transformation) == 0x15c8);
    };
};
