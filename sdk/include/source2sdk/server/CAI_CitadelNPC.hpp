#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_BaseNPC.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
#include "source2sdk/server/WeakPoint_t.hpp"
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
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1890
    // Has VTable
    // Is Abstract
    // 
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_iTeam"
    // static metadata: MNetworkIncludeByName "m_vecViewOffset"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
    // static metadata: MNetworkVarNames "bool m_bMinion"
    // static metadata: MNetworkVarNames "EHANDLE m_hLookTarget"
    // static metadata: MNetworkVarNames "bool m_bBeamActive"
    // static metadata: MNetworkVarNames "Vector m_vEyeBeamTarget"
    #pragma pack(push, 1)
    class CAI_CitadelNPC : public server::CAI_BaseNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1320[0x18]; // 0x1320
        Vector m_vLastGroundEntityCheckPos; // 0x1338        
        entity2::GameTime_t m_flLastGroundCheckTime; // 0x1344        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1348        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelRegenComponent"
        // metadata: MNetworkAlias "CCitadelRegenComponent"
        // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
        server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1550        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x16d0        
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x4]; // 0x16e8
        int32_t m_iBaseGoldReward; // 0x16ec        
        int32_t m_iSkillShotReward; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x30]; // 0x16f4
        // m_hAbilityOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityOwner;
        char m_hAbilityOwner[0x4]; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1728[0x48]; // 0x1728
        // metadata: MNetworkEnable
        // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::WeakPoint_t> m_vecWeakPoints;
        char m_vecWeakPoints[0x68]; // 0x1770        
        // metadata: MNetworkEnable
        bool m_bMinion; // 0x17d8        
        [[maybe_unused]] std::uint8_t pad_0x17d9[0x3]; // 0x17d9
        // metadata: MNetworkEnable
        // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLookTarget;
        char m_hLookTarget[0x4]; // 0x17dc        
        [[maybe_unused]] std::uint8_t pad_0x17e0[0x10]; // 0x17e0
        int32_t m_iCoverGroupID; // 0x17f0        
        [[maybe_unused]] std::uint8_t pad_0x17f4[0x5c]; // 0x17f4
        Vector m_vecSpawnOrigin; // 0x1850        
        [[maybe_unused]] std::uint8_t pad_0x185c[0x18]; // 0x185c
        // metadata: MNetworkEnable
        bool m_bBeamActive; // 0x1874        
        [[maybe_unused]] std::uint8_t pad_0x1875[0x3]; // 0x1875
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vEyeBeamTarget; // 0x1878        
        [[maybe_unused]] std::uint8_t pad_0x1884[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPC because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelNPC) == 0x1890);
};
