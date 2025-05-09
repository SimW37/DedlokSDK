#pragma once
#include "source2sdk/server/SimpleConstraintSoundProfile.hpp"
#include "source2sdk/server/VelocitySampler.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x98
    // Has VTable
    #pragma pack(push, 1)
    class ConstraintSoundInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        server::VelocitySampler m_vSampler; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        server::SimpleConstraintSoundProfile m_soundProfile; // 0x20        
        Vector m_forwardAxis; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4]; // 0x4c
        CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50        
        CUtlSymbolLarge m_iszTravelSoundBack; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x60[0x18]; // 0x60
        CUtlSymbolLarge m_iszReversalSounds[3]; // 0x78        
        bool m_bPlayTravelSound; // 0x90        
        bool m_bPlayReversalSound; // 0x91        
        [[maybe_unused]] std::uint8_t pad_0x92[0x6];
        
        // Datamap fields:
        // CUtlSymbolLarge m_iszReversalSounds[0]; // 0x78
        // CUtlSymbolLarge m_iszReversalSounds[1]; // 0x80
        // CUtlSymbolLarge m_iszReversalSounds[2]; // 0x88
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ConstraintSoundInfo, m_vSampler) == 0x8);
    static_assert(offsetof(ConstraintSoundInfo, m_soundProfile) == 0x20);
    static_assert(offsetof(ConstraintSoundInfo, m_forwardAxis) == 0x40);
    static_assert(offsetof(ConstraintSoundInfo, m_iszTravelSoundFwd) == 0x50);
    static_assert(offsetof(ConstraintSoundInfo, m_iszTravelSoundBack) == 0x58);
    static_assert(offsetof(ConstraintSoundInfo, m_iszReversalSounds) == 0x78);
    static_assert(offsetof(ConstraintSoundInfo, m_bPlayTravelSound) == 0x90);
    static_assert(offsetof(ConstraintSoundInfo, m_bPlayReversalSound) == 0x91);
    
    static_assert(sizeof(ConstraintSoundInfo) == 0x98);
};
