#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1110
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_HeroCloneTrooperVData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            bool m_bMeleeOnly; // 0x1100            
            bool m_bChargeForward; // 0x1101            
            uint8_t _pad1102[0x2]; // 0x1102
            float m_flMeleeChargeRange; // 0x1104            
            bool m_bCloneOwnerWeapon; // 0x1108            
            uint8_t _pad1109[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_HeroCloneTrooperVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_HeroCloneTrooperVData) == 0x1110);
    };
};
