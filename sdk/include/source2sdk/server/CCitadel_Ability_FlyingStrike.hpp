#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseYamatoAbility.hpp"
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
        // Size: 0xe90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bShadowFormCast"
        // static metadata: MNetworkVarNames "Vector m_vYamatoCastPos"
        // static metadata: MNetworkVarNames "Vector m_vTargetCastPos"
        // static metadata: MNetworkVarNames "GameTime_t m_flFlyingToTargetStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flEndAttackTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackLatchTime"
        // static metadata: MNetworkVarNames "Vector m_vAttackLatchPos"
        // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
        // static metadata: MNetworkVarNames "bool m_bIsTargetAlly"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
        // static metadata: MNetworkVarNames "Vector m_rgPath"
        // static metadata: MNetworkVarNames "int m_nPathIdx"
        // static metadata: MNetworkVarNames "int m_nPathSize"
        // static metadata: MNetworkVarNames "float m_flPathLength"
        // static metadata: MNetworkVarNames "Vector m_vFlyingInitialOffsetToPath"
        // static metadata: MNetworkVarNames "float flDistFlown"
        #pragma pack(push, 1)
        class CCitadel_Ability_FlyingStrike : public source2sdk::server::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad0ba0[0x28]; // 0xba0
            std::int32_t m_iTargetPosIndex; // 0xbc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShadowFormCast; // 0xbcc            
            uint8_t _pad0bcd[0x3]; // 0xbcd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vYamatoCastPos; // 0xbd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vTargetCastPos; // 0xbdc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flFlyingToTargetStartTime; // 0xbe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flEndAttackTime; // 0xbec            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleStartTime; // 0xbf0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleArriveTime; // 0xbf4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackLatchTime; // 0xbf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAttackLatchPos; // 0xbfc            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xc08            
            // metadata: MNetworkEnable
            bool m_bIsTargetAlly; // 0xc0c            
            uint8_t _pad0c0d[0x3]; // 0xc0d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flGrappleShotAttackTime; // 0xc10            
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0xc14            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnPathChanged"
            Vector m_rgPath[20]; // 0xc18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathIdx; // 0xd08            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathSize; // 0xd0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flPathLength; // 0xd10            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vFlyingInitialOffsetToPath; // 0xd14            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float flDistFlown; // 0xd20            
            Vector m_vLastSafePos; // 0xd24            
            uint8_t _pad0d30[0x100]; // 0xd30
            source2sdk::client::ParticleIndex_t m_nGrappleTravelEffect; // 0xe30            
            uint8_t _pad0e34[0x54]; // 0xe34
            bool m_bPathDirty; // 0xe88            
            uint8_t _pad0e89[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_FlyingStrike) == 0xe90);
    };
};
