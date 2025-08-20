#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ShotID_t.hpp"

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
        // Size: 0xf88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nFastFireBulletsLeft"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
        #pragma pack(push, 1)
        class CAbility_Synth_Blitz : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // m_vecSpecialShots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ShotID_t> m_vecSpecialShots;
            char m_vecSpecialShots[0x18]; // 0xd88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nFastFireBulletsLeft; // 0xda0            
            uint8_t _pad0da4[0x4]; // 0xda4
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CCitadelAutoScaledTime m_flBlitzEndTime; // 0xda8            
            bool m_bCanApplyTechAmp; // 0xdc0            
            bool m_bCanLifesteal; // 0xdc1            
            uint8_t _pad0dc2[0x1c6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_Blitz because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Synth_Blitz) == 0xf88);
    };
};
