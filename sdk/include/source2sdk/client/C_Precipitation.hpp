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
    // Size: 0x998
    // Has VTable
    #pragma pack(push, 1)
    class C_Precipitation : public client::C_BaseTrigger
    {
    public:
        float m_flDensity; // 0x948        
        [[maybe_unused]] std::uint8_t pad_0x94c[0xc]; // 0x94c
        float m_flParticleInnerDist; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x95c[0x4]; // 0x95c
        char* m_pParticleDef; // 0x960        
        [[maybe_unused]] std::uint8_t pad_0x968[0x20]; // 0x968
        client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x988        
        bool m_bActiveParticlePrecipEmitter[1]; // 0x990        
        bool m_bParticlePrecipInitialized; // 0x991        
        bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x992        
        [[maybe_unused]] std::uint8_t pad_0x993[0x1]; // 0x993
        int32_t m_nAvailableSheetSequencesMaxIndex; // 0x994        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
    static_assert(sizeof(C_Precipitation) == 0x998);
};
