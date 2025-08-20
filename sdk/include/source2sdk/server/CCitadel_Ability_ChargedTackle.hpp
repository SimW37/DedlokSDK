#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreparing"
        // static metadata: MNetworkVarNames "bool m_bTackling"
        // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flPrepareStartTime"
        // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
        #pragma pack(push, 1)
        class CCitadel_Ability_ChargedTackle : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x240]; // 0xb98
            // metadata: MNetworkEnable
            bool m_bPreparing; // 0xdd8            
            // metadata: MNetworkEnable
            bool m_bTackling; // 0xdd9            
            uint8_t _pad0dda[0x2]; // 0xdda
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTackleStartTime; // 0xddc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPrepareStartTime; // 0xde0            
            // metadata: MNetworkEnable
            Vector m_vecTackleDir; // 0xde4            
            Vector m_vecLastPosition; // 0xdf0            
            std::int32_t m_nStuckFramesCount; // 0xdfc            
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xe00            
            source2sdk::client::ParticleIndex_t m_nDistancePreview; // 0xe18            
            uint8_t _pad0e1c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ChargedTackle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ChargedTackle) == 0xe20);
    };
};
