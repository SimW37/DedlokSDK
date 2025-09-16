#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadel_DoorwayPortal;
    };
};

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
        // Size: 0xe98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadel_DoorwayPortal> m_hDoor1"
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Doorway : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x30]; // 0xd88
            // metadata: MNetworkEnable
            // m_hDoor1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadel_DoorwayPortal> m_hDoor1;
            char m_hDoor1[0x4]; // 0xdb8            
            uint8_t _pad0dbc[0x4]; // 0xdbc
            double m_flLastRangeFailCast; // 0xdc0            
            uint8_t _pad0dc8[0xc0]; // 0xdc8
            float m_flDoorBreakableRadius; // 0xe88            
            uint8_t _pad0e8c[0x4]; // 0xe8c
            source2sdk::client::SatVolumeIndex_t m_nDoorPlacementSphere; // 0xe90            
            uint8_t _pad0e94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Doorway because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Doorman_Doorway) == 0xe98);
    };
};
