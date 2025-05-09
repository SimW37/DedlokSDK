#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x680
    // Has VTable
    #pragma pack(push, 1)
    class CEnvSoundscape : public client::C_BaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnPlay; // 0x5e0        
        float m_flRadius; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4]; // 0x60c
        CUtlSymbolLarge m_soundEventName; // 0x610        
        bool m_bOverrideWithEvent; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x619[0x3]; // 0x619
        int32_t m_soundscapeIndex; // 0x61c        
        int32_t m_soundscapeEntityListId; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x624[0x4]; // 0x624
        CUtlSymbolLarge m_positionNames[8]; // 0x628        
        // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CEnvSoundscape> m_hProxySoundscape;
        char m_hProxySoundscape[0x4]; // 0x668        
        bool m_bDisabled; // 0x66c        
        [[maybe_unused]] std::uint8_t pad_0x66d[0x3]; // 0x66d
        CUtlSymbolLarge m_soundscapeName; // 0x670        
        uint32_t m_soundEventHash; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x67c[0x4];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggleEnabled; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
    static_assert(sizeof(CEnvSoundscape) == 0x680);
};
