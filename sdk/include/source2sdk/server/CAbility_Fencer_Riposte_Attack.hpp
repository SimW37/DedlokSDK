#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1268
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nCurrentState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
        // static metadata: MNetworkVarNames "Vector m_vStateStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "Vector m_vLookDirection"
        // static metadata: MNetworkVarNames "Vector m_vStrikeDirection"
        // static metadata: MNetworkVarNames "bool m_bStartedInAir"
        #pragma pack(push, 1)
        class CAbility_Fencer_Riposte_Attack : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nCurrentState; // 0xd90            
            uint8_t _pad0d91[0x3]; // 0xd91
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0xd94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStateStartPosition; // 0xd98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xda4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vLookDirection; // 0xdb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStrikeDirection; // 0xdbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bStartedInAir; // 0xdc8            
            uint8_t _pad0dc9[0x7]; // 0xdc9
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xdd0            
            Vector m_vecLastPosition; // 0xde8            
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0xdf4            
            uint8_t _pad0df8[0x4]; // 0xdf8
            float m_flStunDuration; // 0xdfc            
            float m_flBulletResistReductionDuration; // 0xe00            
            uint8_t _pad0e04[0x464];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Riposte_Attack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Fencer_Riposte_Attack) == 0x1268);
    };
};
