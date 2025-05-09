#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBeam.hpp"
#include "source2sdk/server/Touch_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x918
    // Has VTable
    #pragma pack(push, 1)
    class CEnvBeam : public server::CBeam
    {
    public:
        int32_t m_active; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x874[0x4]; // 0x874
        // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
        char m_spriteTexture[0x8]; // 0x878        
        CUtlSymbolLarge m_iszStartEntity; // 0x880        
        CUtlSymbolLarge m_iszEndEntity; // 0x888        
        float m_life; // 0x890        
        float m_boltWidth; // 0x894        
        float m_noiseAmplitude; // 0x898        
        int32_t m_speed; // 0x89c        
        float m_restrike; // 0x8a0        
        [[maybe_unused]] std::uint8_t pad_0x8a4[0x4]; // 0x8a4
        CUtlSymbolLarge m_iszSpriteName; // 0x8a8        
        int32_t m_frameStart; // 0x8b0        
        Vector m_vEndPointWorld; // 0x8b4        
        Vector m_vEndPointRelative; // 0x8c0        
        float m_radius; // 0x8cc        
        server::Touch_t m_TouchType; // 0x8d0        
        [[maybe_unused]] std::uint8_t pad_0x8d4[0x4]; // 0x8d4
        CUtlSymbolLarge m_iFilterName; // 0x8d8        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFilter;
        char m_hFilter[0x4]; // 0x8e0        
        [[maybe_unused]] std::uint8_t pad_0x8e4[0x4]; // 0x8e4
        CUtlSymbolLarge m_iszDecal; // 0x8e8        
        entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x8f0        
        
        // Datamap fields:
        // int32_t m_nClipStyle; // 0x854
        // void CEnvBeamStrikeThink; // 0x0
        // void CEnvBeamUpdateThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // void InputStrikeOnce; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
    static_assert(sizeof(CEnvBeam) == 0x918);
};
