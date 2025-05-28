#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BuildupMode_t.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x678
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Base_BuildupVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            bool m_bUseBaseWeaponCycleTimeForDelay; // 0x660            
            uint8_t _pad0661[0x3]; // 0x661
            float m_flCycleTimeDelayAdd; // 0x664            
            float m_flBuildUpDecayDelay; // 0x668            
            source2sdk::client::BuildupMode_t m_eBuildupMode; // 0x66c            
            // metadata: MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
            bool m_bBuildupAffectedByEffectiveness; // 0x670            
            // metadata: MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
            bool m_bPassBuildupEffectivenessToFillModifier; // 0x671            
            uint8_t _pad0672[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Base_BuildupVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Base_BuildupVData) == 0x678);
    };
};
