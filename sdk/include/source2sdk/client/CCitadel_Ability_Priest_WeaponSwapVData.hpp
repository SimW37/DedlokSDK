#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"

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
        // Size: 0x16b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_WeaponSwapVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SelfModifier;
            char m_SelfModifier[0x10]; // 0x15e8            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x15f8            
            // metadata: MPropertyStartGroup "Gameplay"
            // m_StartingWeaponAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<4> m_StartingWeaponAbility;
            char m_StartingWeaponAbility[0x10]; // 0x1608            
            // m_NewWeaponAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<4> m_NewWeaponAbility;
            char m_NewWeaponAbility[0x10]; // 0x1618            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceSwapWeapons; // 0x1628            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_WeaponSwapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Priest_WeaponSwapVData) == 0x16b0);
    };
};
