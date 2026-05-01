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
        // Size: 0x18a8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vRiposteStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
        // static metadata: MNetworkVarNames "uint8 m_nCurrentRiposteState"
        // static metadata: MNetworkVarNames "GameTime_t m_flSuccessfulRiposteTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Fencer_Riposte : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vRiposteStartPosition; // 0x11d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0x11e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0x11f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nCurrentRiposteState; // 0x11f4            
            uint8_t _pad11f5[0x3]; // 0x11f5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSuccessfulRiposteTime; // 0x11f8            
            uint8_t _pad11fc[0x684]; // 0x11fc
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0x1880            
            Vector m_vecLastPosition; // 0x1898            
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fencer_Riposte because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Fencer_Riposte) == 0x18a8);
    };
};
