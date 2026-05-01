#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x14b0
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
        class CAbility_Fencer_Riposte_Attack : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nCurrentState; // 0xfd8            
            uint8_t _pad0fd9[0x3]; // 0xfd9
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0xfdc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStateStartPosition; // 0xfe0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xfec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vLookDirection; // 0xff8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStrikeDirection; // 0x1004            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bStartedInAir; // 0x1010            
            uint8_t _pad1011[0x7]; // 0x1011
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0x1018            
            Vector m_vecLastPosition; // 0x1030            
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0x103c            
            uint8_t _pad1040[0x4]; // 0x1040
            float m_flStunDuration; // 0x1044            
            float m_flBulletResistReductionDuration; // 0x1048            
            uint8_t _pad104c[0x464];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Riposte_Attack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fencer_Riposte_Attack) == 0x14b0);
    };
};
