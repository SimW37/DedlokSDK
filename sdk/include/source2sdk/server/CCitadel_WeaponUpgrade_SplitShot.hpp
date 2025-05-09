#pragma once
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdb8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bSplitShotActive"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_SplitShot : public server::CCitadel_Item
    {
    public:
        client::ShotID_t m_nLastShotID; // 0xba8        
        client::ShotID_t m_nLastHitShotID; // 0xbac        
        int32_t m_nWpnBatchCount; // 0xbb0        
        [[maybe_unused]] std::uint8_t pad_0xbb4[0x74]; // 0xbb4
        client::ShotID_t m_nLastBulletHitShotID; // 0xc28        
        int32_t m_nLastBulletHitCount; // 0xc2c        
        // m_eLastBulletHitEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_eLastBulletHitEnt;
        char m_eLastBulletHitEnt[0x4]; // 0xc30        
        // metadata: MNetworkEnable
        bool m_bSplitShotActive; // 0xc34        
        [[maybe_unused]] std::uint8_t pad_0xc35[0x183];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_SplitShot because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_SplitShot) == 0xdb8);
};
