#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1820
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flForwardSpeed"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
        #pragma pack(push, 1)
        class CNPC_NanoRollermine : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1790[0x38]; // 0x1790
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flForwardSpeed; // 0x17c8            
            uint8_t _pad17cc[0x44]; // 0x17cc
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hOwnerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwnerPawn;
            char m_hOwnerPawn[0x4]; // 0x1810            
            uint8_t _pad1814[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_NanoRollermine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_NanoRollermine) == 0x1820);
    };
};
