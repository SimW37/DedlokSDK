#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EAttachState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
        // Size: 0x1300
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeStartZipping"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeForKnockdownProtection"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeStopZipping"
        // static metadata: MNetworkVarNames "float m_flCasterSpeed"
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vecInitialVel"
        // static metadata: MNetworkVarNames "Vector m_vecAttachPoint"
        // static metadata: MNetworkVarNames "EHANDLE m_pPrevNode"
        // static metadata: MNetworkVarNames "EHANDLE m_pNextNode"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeEnterState"
        // static metadata: MNetworkVarNames "GameTime_t m_flLatchTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDamagedTime"
        // static metadata: MNetworkVarNames "EAttachState_t m_eAttachState"
        // static metadata: MNetworkVarNames "int m_iAttachedZipLineLane"
        // static metadata: MNetworkVarNames "bool m_bDroppedFromZipline"
        // static metadata: MNetworkVarNames "Vector m_vAttachZipLineOffset"
        // static metadata: MNetworkVarNames "float m_flZiplineAirDrag"
        // static metadata: MNetworkVarNames "Vector m_vPendulumVelocity"
        // static metadata: MNetworkVarNames "Vector m_vPendulumPosition"
        // static metadata: MNetworkVarNames "Vector m_vVelocityHistory1"
        // static metadata: MNetworkVarNames "Vector m_vVelocityHistory2"
        #pragma pack(push, 1)
        class CCitadel_Ability_ZipLine : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x488]; // 0xd88
            source2sdk::entity2::GameTime_t m_flActivatePressTime; // 0x1210            
            bool m_bThinking; // 0x1214            
            bool m_bMoveCollidedPushUp; // 0x1215            
            uint8_t _pad1216[0x2]; // 0x1216
            source2sdk::client::EAttachState_t m_eCommittedAttachState; // 0x1218            
            uint8_t _pad121c[0x34]; // 0x121c
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeStartZipping; // 0x1250            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeForKnockdownProtection; // 0x1254            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flTimeStopZipping; // 0x1258            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flCasterSpeed; // 0x125c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CNetworkVelocityVector m_vecInitialVel; // 0x1260            
            uint8_t _pad1288[0x8]; // 0x1288
            // metadata: MNetworkEnable
            Vector m_vecAttachPoint; // 0x1290            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_pPrevNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_pPrevNode;
            char m_pPrevNode[0x4]; // 0x129c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_pNextNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_pNextNode;
            char m_pNextNode[0x4]; // 0x12a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flTimeEnterState; // 0x12a4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLatchTime; // 0x12a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDamagedTime; // 0x12ac            
            // metadata: MNetworkEnable
            source2sdk::client::EAttachState_t m_eAttachState; // 0x12b0            
            // metadata: MNetworkEnable
            std::int32_t m_iAttachedZipLineLane; // 0x12b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bDroppedFromZipline; // 0x12b8            
            source2sdk::modellib::AttachmentHandle_t m_hAttachZipLine; // 0x12b9            
            uint8_t _pad12ba[0x2]; // 0x12ba
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAttachZipLineOffset; // 0x12bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flZiplineAirDrag; // 0x12c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vPendulumVelocity; // 0x12cc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vPendulumPosition; // 0x12d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vVelocityHistory1; // 0x12e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vVelocityHistory2; // 0x12f0            
            uint8_t _pad12fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ZipLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ZipLine) == 0x1300);
    };
};
