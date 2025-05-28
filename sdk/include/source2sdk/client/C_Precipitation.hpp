#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/TimedEvent.hpp"

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
        // Size: 0xb38
        // Has VTable
        #pragma pack(push, 1)
        class C_Precipitation : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_flDensity; // 0xae8            
            uint8_t _pad0aec[0xc]; // 0xaec
            float m_flParticleInnerDist; // 0xaf8            
            uint8_t _pad0afc[0x4]; // 0xafc
            char* m_pParticleDef; // 0xb00            
            uint8_t _pad0b08[0x20]; // 0xb08
            source2sdk::client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xb28            
            bool m_bActiveParticlePrecipEmitter[1]; // 0xb30            
            bool m_bParticlePrecipInitialized; // 0xb31            
            bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xb32            
            uint8_t _pad0b33[0x1]; // 0xb33
            std::int32_t m_nAvailableSheetSequencesMaxIndex; // 0xb34            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Precipitation) == 0xb38);
    };
};
