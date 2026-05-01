#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/NecroSkeleTargetTier_t.hpp"

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
        // Size: 0x1388
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_NPC_NecroSkeleVData : public source2sdk::client::CAI_CitadelNPCVData
        {
        public:
            float m_flMeleeDuration; // 0x1338            
            float m_flMeleeFireDelay; // 0x133c            
            float m_flNonPlayerDamageResist; // 0x1340            
            uint8_t _pad1344[0x4]; // 0x1344
            // m_ExplodeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ExplodeModifier;
            char m_ExplodeModifier[0x10]; // 0x1348            
            // m_DamageSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DamageSlowModifier;
            char m_DamageSlowModifier[0x10]; // 0x1358            
            float m_flHeroLockRange; // 0x1368            
            float m_flHeroLockBreakRange; // 0x136c            
            // m_vecTargettingTiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::NecroSkeleTargetTier_t> m_vecTargettingTiers;
            char m_vecTargettingTiers[0x18]; // 0x1370            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_NPC_NecroSkeleVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAI_NPC_NecroSkeleVData) == 0x1388);
    };
};
