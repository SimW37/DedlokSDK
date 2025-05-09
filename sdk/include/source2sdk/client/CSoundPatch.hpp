#pragma once
#include "source2sdk/client/CCopyRecipientFilter.hpp"
#include "source2sdk/client/CSoundEnvelope.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xa0
    // Has VTable
    #pragma pack(push, 1)
    class CSoundPatch
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        client::CSoundEnvelope m_pitch; // 0x8        
        client::CSoundEnvelope m_volume; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x28[0x14]; // 0x28
        float m_shutdownTime; // 0x3c        
        float m_flLastTime; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        CUtlSymbolLarge m_iszSoundScriptName; // 0x48        
        // m_hEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEnt;
        char m_hEnt[0x4]; // 0x50        
        CEntityIndex m_soundEntityIndex; // 0x54        
        Vector m_soundOrigin; // 0x58        
        int32_t m_isPlaying; // 0x64        
        client::CCopyRecipientFilter m_Filter; // 0x68        
        float m_flCloseCaptionDuration; // 0x90        
        bool m_bUpdatedSoundOrigin; // 0x94        
        [[maybe_unused]] std::uint8_t pad_0x95[0x3]; // 0x95
        CUtlSymbolLarge m_iszClassName; // 0x98        
        
        // Datamap fields:
        // void m_guid; // 0x28
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSoundPatch, m_pitch) == 0x8);
    static_assert(offsetof(CSoundPatch, m_volume) == 0x18);
    static_assert(offsetof(CSoundPatch, m_shutdownTime) == 0x3c);
    static_assert(offsetof(CSoundPatch, m_flLastTime) == 0x40);
    static_assert(offsetof(CSoundPatch, m_iszSoundScriptName) == 0x48);
    static_assert(offsetof(CSoundPatch, m_hEnt) == 0x50);
    static_assert(offsetof(CSoundPatch, m_soundEntityIndex) == 0x54);
    static_assert(offsetof(CSoundPatch, m_soundOrigin) == 0x58);
    static_assert(offsetof(CSoundPatch, m_isPlaying) == 0x64);
    static_assert(offsetof(CSoundPatch, m_Filter) == 0x68);
    static_assert(offsetof(CSoundPatch, m_flCloseCaptionDuration) == 0x90);
    static_assert(offsetof(CSoundPatch, m_bUpdatedSoundOrigin) == 0x94);
    static_assert(offsetof(CSoundPatch, m_iszClassName) == 0x98);
    
    static_assert(sizeof(CSoundPatch) == 0xa0);
};
