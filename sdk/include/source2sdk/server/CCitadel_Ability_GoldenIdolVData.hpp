#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Ability_BaseHeldItemVData.hpp"

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
        // Size: 0x1860
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_GoldenIdolVData : public source2sdk::server::CCitadel_Ability_BaseHeldItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sIdolDropOffSound; // 0x17e0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DropoffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DropoffTimerModifier;
            char m_DropoffTimerModifier[0x10]; // 0x17f0            
            // m_HoldingIdolModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_HoldingIdolModifier;
            char m_HoldingIdolModifier[0x10]; // 0x1800            
            // m_Bonus01 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_Bonus01;
            char m_Bonus01[0x10]; // 0x1810            
            // m_Bonus02 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_Bonus02;
            char m_Bonus02[0x10]; // 0x1820            
            // m_NoPickupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_NoPickupModifier;
            char m_NoPickupModifier[0x10]; // 0x1830            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flInstantGoldPercentage; // 0x1840            
            std::int32_t m_iComebackBounty; // 0x1844            
            float m_flCasterBonusPercent; // 0x1848            
            float m_flRevealTime; // 0x184c            
            float m_flDamageTickRate; // 0x1850            
            float m_flMaxHealthDamage; // 0x1854            
            float m_flTimeToDamage; // 0x1858            
            float m_flNoPickupTime; // 0x185c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdolVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_GoldenIdolVData) == 0x1860);
    };
};
