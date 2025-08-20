#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Ability_BaseHeldItemVData.hpp"

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
        // Size: 0x1778
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_GoldenIdolVData : public source2sdk::client::CCitadel_Ability_BaseHeldItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sIdolDropOffSound; // 0x16f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DropoffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DropoffTimerModifier;
            char m_DropoffTimerModifier[0x10]; // 0x1708            
            // m_HoldingIdolModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_HoldingIdolModifier;
            char m_HoldingIdolModifier[0x10]; // 0x1718            
            // m_Bonus01 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_Bonus01;
            char m_Bonus01[0x10]; // 0x1728            
            // m_Bonus02 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_Bonus02;
            char m_Bonus02[0x10]; // 0x1738            
            // m_NoPickupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_NoPickupModifier;
            char m_NoPickupModifier[0x10]; // 0x1748            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flInstantGoldPercentage; // 0x1758            
            std::int32_t m_iComebackBounty; // 0x175c            
            float m_flCasterBonusPercent; // 0x1760            
            float m_flRevealTime; // 0x1764            
            float m_flDamageTickRate; // 0x1768            
            float m_flMaxHealthDamage; // 0x176c            
            float m_flTimeToDamage; // 0x1770            
            float m_flNoPickupTime; // 0x1774            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdolVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_GoldenIdolVData) == 0x1778);
    };
};
