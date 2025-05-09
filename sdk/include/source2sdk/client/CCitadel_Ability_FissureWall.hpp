#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xef0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecStartPos"
    // static metadata: MNetworkVarNames "Vector m_vecPosition"
    // static metadata: MNetworkVarNames "Vector m_vecInitialPosition"
    // static metadata: MNetworkVarNames "GameTime_t m_CastTime"
    // static metadata: MNetworkVarNames "Vector m_vecDirection"
    // static metadata: MNetworkVarNames "Vector m_vecLeft"
    // static metadata: MNetworkVarNames "float m_Length"
    // static metadata: MNetworkVarNames "bool m_bTraveling"
    // static metadata: MNetworkVarNames "bool m_bPreview"
    #pragma pack(push, 1)
    class CCitadel_Ability_FissureWall : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x10]; // 0xdc0
        // m_vecWallPreviewParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_vecWallPreviewParticles;
        char m_vecWallPreviewParticles[0x18]; // 0xdd0        
        [[maybe_unused]] std::uint8_t pad_0xde8[0xc0]; // 0xde8
        // metadata: MNetworkEnable
        Vector m_vecStartPos; // 0xea8        
        // metadata: MNetworkEnable
        Vector m_vecPosition; // 0xeb4        
        // metadata: MNetworkEnable
        Vector m_vecInitialPosition; // 0xec0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_CastTime; // 0xecc        
        // metadata: MNetworkEnable
        Vector m_vecDirection; // 0xed0        
        // metadata: MNetworkEnable
        Vector m_vecLeft; // 0xedc        
        // metadata: MNetworkEnable
        float m_Length; // 0xee8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PreviewModeChanged"
        bool m_bTraveling; // 0xeec        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "PreviewModeChanged"
        bool m_bPreview; // 0xeed        
        [[maybe_unused]] std::uint8_t pad_0xeee[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_FissureWall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_FissureWall) == 0xef0);
};
