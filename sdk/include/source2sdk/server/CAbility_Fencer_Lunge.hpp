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
        // Size: 0x1d28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nCurrentLungeState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
        // static metadata: MNetworkVarNames "Vector m_vDashStartPos"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "Vector m_vLookDirection"
        // static metadata: MNetworkVarNames "Vector m_vStrikeDirection"
        // static metadata: MNetworkVarNames "bool m_bStartedInAir"
        // static metadata: MNetworkVarNames "uint8 m_iRemainingCasts"
        // static metadata: MNetworkVarNames "GameTime_t m_RecastEndTime"
        // static metadata: MNetworkVarNames "uint8 m_eLungeDirection"
        // static metadata: MNetworkVarNames "int m_nPowerLevel"
        #pragma pack(push, 1)
        class CAbility_Fencer_Lunge : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x4]; // 0xf90
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nCurrentLungeState; // 0xf94            
            uint8_t _pad0f95[0x3]; // 0xf95
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0xf98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashStartPos; // 0xf9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xfa8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vLookDirection; // 0xfb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStrikeDirection; // 0xfc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bStartedInAir; // 0xfcc            
            // metadata: MNetworkEnable
            std::uint8_t m_iRemainingCasts; // 0xfcd            
            uint8_t _pad0fce[0x2]; // 0xfce
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_RecastEndTime; // 0xfd0            
            // metadata: MNetworkEnable
            std::uint8_t m_eLungeDirection; // 0xfd4            
            uint8_t _pad0fd5[0x3]; // 0xfd5
            float m_flHeldTime; // 0xfd8            
            uint8_t _pad0fdc[0x4]; // 0xfdc
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xfe0            
            Vector m_vLastPosition; // 0xff8            
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0x1004            
            uint8_t _pad1008[0x4]; // 0x1008
            source2sdk::client::ParticleIndex_t m_nGlintParticleIndex; // 0x100c            
            uint8_t _pad1010[0x284]; // 0x1010
            float m_flLastOuterCircleProgress; // 0x1294            
            uint8_t _pad1298[0x8]; // 0x1298
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPowerLevel; // 0x12a0            
            uint8_t _pad12a4[0xa84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Lunge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Fencer_Lunge) == 0x1d28);
    };
};
