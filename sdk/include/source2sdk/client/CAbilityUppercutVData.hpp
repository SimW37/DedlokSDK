#pragma once
#include "source2sdk/client/AttackData_t.hpp"
#include "source2sdk/client/CAbilityMeleeVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b60
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityUppercutVData : public client::CAbilityMeleeVData
    {
    public:
        client::AttackData_t m_UppercutAttackData; // 0x15f8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_UppercutModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_UppercutModifier;
        char m_UppercutModifier[0x10]; // 0x1b20        
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x1b30        
        // m_ClipModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ClipModifier;
        char m_ClipModifier[0x10]; // 0x1b40        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flMaxPitchUp; // 0x1b50        
        float m_flTossDurationEnemy; // 0x1b54        
        float m_flTossDurationFriendly; // 0x1b58        
        [[maybe_unused]] std::uint8_t pad_0x1b5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityUppercutVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityUppercutVData) == 0x1b60);
};
