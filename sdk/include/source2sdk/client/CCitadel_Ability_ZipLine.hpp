#pragma once
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EAttachState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1310
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
    class CCitadel_Ability_ZipLine : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x488]; // 0xdc0
        entity2::GameTime_t m_flActivatePressTime; // 0x1248        
        bool m_bThinking; // 0x124c        
        bool m_bMoveCollidedPushUp; // 0x124d        
        [[maybe_unused]] std::uint8_t pad_0x124e[0x2]; // 0x124e
        client::EAttachState_t m_eCommittedAttachState; // 0x1250        
        [[maybe_unused]] std::uint8_t pad_0x1254[0xc]; // 0x1254
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeStartZipping; // 0x1260        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeForKnockdownProtection; // 0x1264        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flTimeStopZipping; // 0x1268        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flCasterSpeed; // 0x126c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::CNetworkVelocityVector m_vecInitialVel; // 0x1270        
        [[maybe_unused]] std::uint8_t pad_0x1298[0x8]; // 0x1298
        // metadata: MNetworkEnable
        Vector m_vecAttachPoint; // 0x12a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_pPrevNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_pPrevNode;
        char m_pPrevNode[0x4]; // 0x12ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_pNextNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_pNextNode;
        char m_pNextNode[0x4]; // 0x12b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flTimeEnterState; // 0x12b4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLatchTime; // 0x12b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flDamagedTime; // 0x12bc        
        // metadata: MNetworkEnable
        client::EAttachState_t m_eAttachState; // 0x12c0        
        // metadata: MNetworkEnable
        int32_t m_iAttachedZipLineLane; // 0x12c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bDroppedFromZipline; // 0x12c8        
        modellib::AttachmentHandle_t m_hAttachZipLine; // 0x12c9        
        [[maybe_unused]] std::uint8_t pad_0x12ca[0x2]; // 0x12ca
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vAttachZipLineOffset; // 0x12cc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flZiplineAirDrag; // 0x12d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vPendulumVelocity; // 0x12dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vPendulumPosition; // 0x12e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vVelocityHistory1; // 0x12f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vVelocityHistory2; // 0x1300        
        [[maybe_unused]] std::uint8_t pad_0x130c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ZipLine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ZipLine) == 0x1310);
};
