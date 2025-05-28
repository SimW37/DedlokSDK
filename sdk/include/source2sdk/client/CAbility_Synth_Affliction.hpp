#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0xed0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nBonusTechPower"
        #pragma pack(push, 1)
        class CAbility_Synth_Affliction : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nBonusTechPower; // 0xdc0            
            uint8_t _pad0dc4[0x104]; // 0xdc4
            source2sdk::client::ParticleIndex_t m_hAOEParticle; // 0xec8            
            uint8_t _pad0ecc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_Affliction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Synth_Affliction) == 0xed0);
    };
};
