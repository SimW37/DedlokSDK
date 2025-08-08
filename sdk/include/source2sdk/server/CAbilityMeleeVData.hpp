#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/TakeDamageFlags_t.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1650
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityMeleeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyDescription "How long we'll buffer input to trigger another melee if we're already performing a melee"
            float m_flMeleeInputBufferTime; // 0x1620            
            // metadata: MPropertyDescription "If we detect an enemy within this distance, forward attack movement will be suppressed so we don't move through them"
            float m_flCollisionDistance; // 0x1624            
            // metadata: MPropertyDescription "A heavy attack will trigger after being charged up for this long"
            float m_flHeavyAttackRequiredHoldTime; // 0x1628            
            // metadata: MPropertyDescription "A light attack will trigger if the melee button is pressed and released within this time.  After this time, a heavy melee will charge up"
            float m_flLightAttackMaxHoldTime; // 0x162c            
            // metadata: MPropertyDescription "How far to the side a target must dash during the melee attack delay window  in order to dodge a pending hit"
            float m_flSideDashDodgeDist; // 0x1630            
            // metadata: MPropertyDescription "How far back a target must dash during the melee attack delay window  in order to dodge a pending hit"
            float m_flBackDashDodgeDist; // 0x1634            
            source2sdk::client::TakeDamageFlags_t m_MeleeDamageFlags; // 0x1638            
            CUtlString m_strEffectsAttachName; // 0x1640            
            // metadata: MPropertyStartGroup "AnimGraph2"
            float m_flChargeAnimDelayTime; // 0x1648            
            uint8_t _pad164c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityMeleeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityMeleeVData) == 0x1650);
    };
};
