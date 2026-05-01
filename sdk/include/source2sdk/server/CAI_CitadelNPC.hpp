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
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1790
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iTeam"
        // static metadata: MNetworkIncludeByName "m_vecViewOffset"
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
        // static metadata: MNetworkVarNames "VectorWS m_vEyeBeamTarget"
        #pragma pack(push, 1)
        class CAI_CitadelNPC : public source2sdk::server::CAI_BaseNPC
        {
        public:
            uint8_t _pad1130[0x78]; // 0x1130
            // metadata: MNotSaved
            Vector m_vLastGroundEntityCheckPos; // 0x11a8            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastGroundCheckTime; // 0x11b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x11b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelRegenComponent"
            // metadata: MNetworkAlias "CCitadelRegenComponent"
            // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
            source2sdk::server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1420            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1580            
            uint8_t _pad15a0[0x8]; // 0x15a0
            std::int32_t m_iBaseGoldReward; // 0x15a8            
            std::int32_t m_iSkillShotReward; // 0x15ac            
            uint8_t _pad15b0[0x2c]; // 0x15b0
            // m_hAbilityOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbilityOwner;
            char m_hAbilityOwner[0x4]; // 0x15dc            
            uint8_t _pad15e0[0x60]; // 0x15e0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::WeakPoint_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x68]; // 0x1640            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bMinion; // 0x16a8            
            uint8_t _pad16a9[0x3]; // 0x16a9
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLookTarget;
            char m_hLookTarget[0x4]; // 0x16ac            
            std::int32_t m_iCoverGroupID; // 0x16b0            
            uint8_t _pad16b4[0x60]; // 0x16b4
            VectorWS m_vecSpawnOrigin; // 0x1714            
            uint8_t _pad1720[0x24]; // 0x1720
            // metadata: MNetworkEnable
            bool m_bBeamActive; // 0x1744            
            uint8_t _pad1745[0x3]; // 0x1745
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            VectorWS m_vEyeBeamTarget; // 0x1748            
            uint8_t _pad1754[0x3c];
            
            // Datamap fields:
            // CHandle< CBaseEntity > m_hCaster; // 0x15e0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_CitadelNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_CitadelNPC) == 0x1790);
    };
};
