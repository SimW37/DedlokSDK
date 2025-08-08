#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOFDesc_t.hpp"
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
        // Size: 0x1678
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeaponVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            uint8_t _pad1620[0x8]; // 0x1620
            // metadata: MPropertyDescription "The DOF settings to apply while zoomed in."
            source2sdk::client::DOFDesc_t m_DOFWhileZoomed; // 0x1628            
            // metadata: MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
            bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x1638            
            uint8_t _pad1639[0x7]; // 0x1639
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyFriendlyName "Fire while disarmed sound"
            CSoundEventName m_sDisarmedSound; // 0x1640            
            float m_flMinDisarmedSoundInterval; // 0x1650            
            uint8_t _pad1654[0x4]; // 0x1654
            CSoundEventName m_sObstructedShotSound; // 0x1658            
            // metadata: MPropertyStartGroup "Action Reload"
            // metadata: MPropertyAttributeRange "0 1"
            // metadata: MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
            float m_flActionReloadTimingStart; // 0x1668            
            // metadata: MPropertyDescription "If we have action reloads, how long is the window"
            float m_flActionReloadTimingDuration; // 0x166c            
            // metadata: MPropertyStartGroup "UI"
            CUtlString m_strCrosshairCSSClass; // 0x1670            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeaponVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PrimaryWeaponVData) == 0x1678);
    };
};
