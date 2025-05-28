#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_BaseNPC.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
#include "source2sdk/server/WeakPoint_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1990
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
        class CAI_CitadelNPC : public source2sdk::server::CAI_BaseNPC
        {
        public:
            uint8_t _pad13f0[0x18]; // 0x13f0
            Vector m_vLastGroundEntityCheckPos; // 0x1408            
            source2sdk::entity2::GameTime_t m_flLastGroundCheckTime; // 0x1414            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1418            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelRegenComponent"
            // metadata: MNetworkAlias "CCitadelRegenComponent"
            // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
            source2sdk::server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1658            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x17d8            
            uint8_t _pad17f0[0x4]; // 0x17f0
            std::int32_t m_iBaseGoldReward; // 0x17f4            
            std::int32_t m_iSkillShotReward; // 0x17f8            
            uint8_t _pad17fc[0x2c]; // 0x17fc
            // m_hAbilityOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbilityOwner;
            char m_hAbilityOwner[0x4]; // 0x1828            
            uint8_t _pad182c[0x54]; // 0x182c
            // metadata: MNetworkEnable
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::WeakPoint_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x68]; // 0x1880            
            // metadata: MNetworkEnable
            bool m_bMinion; // 0x18e8            
            uint8_t _pad18e9[0x3]; // 0x18e9
            // metadata: MNetworkEnable
            // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLookTarget;
            char m_hLookTarget[0x4]; // 0x18ec            
            std::int32_t m_iCoverGroupID; // 0x18f0            
            uint8_t _pad18f4[0x5c]; // 0x18f4
            Vector m_vecSpawnOrigin; // 0x1950            
            uint8_t _pad195c[0x18]; // 0x195c
            // metadata: MNetworkEnable
            bool m_bBeamActive; // 0x1974            
            uint8_t _pad1975[0x3]; // 0x1975
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vEyeBeamTarget; // 0x1978            
            uint8_t _pad1984[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_CitadelNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_CitadelNPC) == 0x1990);
    };
};
