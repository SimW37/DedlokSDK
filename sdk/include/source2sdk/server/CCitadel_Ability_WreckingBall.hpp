#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x11d0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHoldingBall"
        #pragma pack(push, 1)
        class CCitadel_Ability_WreckingBall : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x14]; // 0xf90
            source2sdk::client::ParticleIndex_t m_nBallParticle; // 0xfa4            
            source2sdk::client::ParticleIndex_t m_nCastCompleteParticle; // 0xfa8            
            uint8_t _pad0fac[0x4]; // 0xfac
            // m_vecTargetsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecTargetsHit;
            char m_vecTargetsHit[0x18]; // 0xfb0            
            uint8_t _pad0fc8[0x200]; // 0xfc8
            // metadata: MNetworkEnable
            bool m_bHoldingBall; // 0x11c8            
            uint8_t _pad11c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_WreckingBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_WreckingBall) == 0x11d0);
    };
};
