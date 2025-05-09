#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/TimedEvent.hpp"
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
    // Size: 0xb38
    // Has VTable
    #pragma pack(push, 1)
    class C_Precipitation : public client::C_BaseTrigger
    {
    public:
        float m_flDensity; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xaec[0xc]; // 0xaec
        float m_flParticleInnerDist; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x4]; // 0xafc
        char* m_pParticleDef; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb08[0x20]; // 0xb08
        client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xb28        
        bool m_bActiveParticlePrecipEmitter[1]; // 0xb30        
        bool m_bParticlePrecipInitialized; // 0xb31        
        bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xb32        
        [[maybe_unused]] std::uint8_t pad_0xb33[0x1]; // 0xb33
        int32_t m_nAvailableSheetSequencesMaxIndex; // 0xb34        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
    static_assert(sizeof(C_Precipitation) == 0xb38);
};
