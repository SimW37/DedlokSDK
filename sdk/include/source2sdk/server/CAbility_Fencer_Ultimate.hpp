#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFencerUltState_t.hpp"
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
        // Size: 0x1700
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "Vector m_vecLastPosition"
        // static metadata: MNetworkVarNames "EFencerUltState_t m_eUltState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
        #pragma pack(push, 1)
        class CAbility_Fencer_Ultimate : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPosition; // 0xf90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xf9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecLastPosition; // 0xfa8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EFencerUltState_t m_eUltState; // 0xfb4            
            uint8_t _pad0fb5[0x3]; // 0xfb5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0xfb8            
            bool m_bHitSomeone; // 0xfbc            
            uint8_t _pad0fbd[0x3]; // 0xfbd
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xfc0            
            // m_vecHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitHeroes;
            char m_vecHitHeroes[0x18]; // 0xfd8            
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0xff0            
            source2sdk::client::ParticleIndex_t m_UltHoldVFX; // 0xff4            
            source2sdk::client::ParticleIndex_t m_DirPreviewVFX; // 0xff8            
            uint8_t _pad0ffc[0x704];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Ultimate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Fencer_Ultimate) == 0x1700);
    };
};
