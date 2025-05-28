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
        // Size: 0xf80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hActiveProjectile"
        #pragma pack(push, 1)
        class CAbility_Synth_PlasmaFlux : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x28]; // 0xdc0
            bool m_bTeleported; // 0xde8            
            uint8_t _pad0de9[0x3]; // 0xde9
            source2sdk::entity2::GameTime_t m_flProjectileLaunchTime; // 0xdec            
            source2sdk::entity2::GameTime_t m_flProjectileExpireTime; // 0xdf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hActiveProjectile;
            char m_hActiveProjectile[0x4]; // 0xdf4            
            uint8_t _pad0df8[0x188];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_PlasmaFlux because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Synth_PlasmaFlux) == 0xf80);
    };
};
