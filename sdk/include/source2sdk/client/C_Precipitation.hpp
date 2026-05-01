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
        // Size: 0xac0
        // Has VTable
        #pragma pack(push, 1)
        class C_Precipitation : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNotSaved
            float m_flDensity; // 0xa70            
            uint8_t _pad0a74[0xc]; // 0xa74
            // metadata: MNotSaved
            float m_flParticleInnerDist; // 0xa80            
            uint8_t _pad0a84[0x4]; // 0xa84
            // metadata: MNotSaved
            char* m_pParticleDef; // 0xa88            
            uint8_t _pad0a90[0x20]; // 0xa90
            // metadata: MNotSaved
            source2sdk::client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xab0            
            // metadata: MNotSaved
            bool m_bActiveParticlePrecipEmitter[1]; // 0xab8            
            // metadata: MNotSaved
            bool m_bParticlePrecipInitialized; // 0xab9            
            // metadata: MNotSaved
            bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xaba            
            uint8_t _pad0abb[0x1]; // 0xabb
            // metadata: MNotSaved
            std::int32_t m_nAvailableSheetSequencesMaxIndex; // 0xabc            
            
            // Datamap fields:
            // bool m_bActiveParticlePrecipEmitter; // 0xab8
            // void m_tParticlePrecipTraceTimer; // 0xab0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Precipitation) == 0xac0);
    };
};
