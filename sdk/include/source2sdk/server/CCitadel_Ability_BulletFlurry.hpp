#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0x12e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_BulletFlurry : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flFlurryEndTime; // 0xf90            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextAttackTime; // 0xfa8            
            uint8_t _pad0fac[0x304]; // 0xfac
            // m_vecShootTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecShootTargets;
            char m_vecShootTargets[0x18]; // 0x12b0            
            std::int32_t m_nNumPlayersKilled; // 0x12c8            
            std::int32_t m_nShootIndex; // 0x12cc            
            std::int32_t m_nShootIndexNPC; // 0x12d0            
            std::int32_t m_nBurstShots; // 0x12d4            
            bool m_bHasCameraOverride; // 0x12d8            
            uint8_t _pad12d9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_BulletFlurry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_BulletFlurry) == 0x12e0);
    };
};
