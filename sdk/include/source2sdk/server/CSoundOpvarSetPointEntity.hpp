#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CSoundOpvarSetPointBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x678
    // Has VTable
    #pragma pack(push, 1)
    class CSoundOpvarSetPointEntity : public server::CSoundOpvarSetPointBase
    {
    public:
        entity2::CEntityIOOutput m_OnEnter; // 0x588        
        entity2::CEntityIOOutput m_OnExit; // 0x5b0        
        bool m_bAutoDisable; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5d9[0x23]; // 0x5d9
        float m_flDistanceMin; // 0x5fc        
        float m_flDistanceMax; // 0x600        
        float m_flDistanceMapMin; // 0x604        
        float m_flDistanceMapMax; // 0x608        
        float m_flOcclusionRadius; // 0x60c        
        float m_flOcclusionMin; // 0x610        
        float m_flOcclusionMax; // 0x614        
        float m_flValSetOnDisable; // 0x618        
        bool m_bSetValueOnDisable; // 0x61c        
        bool m_bReloading; // 0x61d        
        [[maybe_unused]] std::uint8_t pad_0x61e[0x2]; // 0x61e
        int32_t m_nSimulationMode; // 0x620        
        int32_t m_nVisibilitySamples; // 0x624        
        Vector m_vDynamicProxyPoint; // 0x628        
        float m_flDynamicMaximumOcclusion; // 0x634        
        CEntityHandle m_hDynamicEntity; // 0x638        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4]; // 0x63c
        CUtlSymbolLarge m_iszDynamicEntityName; // 0x640        
        float m_flPathingDistanceNormFactor; // 0x648        
        Vector m_vPathingSourcePos; // 0x64c        
        Vector m_vPathingListenerPos; // 0x658        
        Vector m_vPathingDirection; // 0x664        
        int32_t m_nPathingSourceIndex; // 0x670        
        [[maybe_unused]] std::uint8_t pad_0x674[0x4];
        
        // Datamap fields:
        // void InputSetDisabledValue; // 0x0
        // void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetPointEntity) == 0x678);
};
