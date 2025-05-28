#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseYamatoAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x10b8
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
        class CCitadel_Ability_FlyingStrike : public source2sdk::client::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad0dc8[0x28]; // 0xdc8
            source2sdk::client::SatVolumeIndex_t m_desatVolIdx; // 0xdf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShadowFormCast; // 0xdf4            
            uint8_t _pad0df5[0x3]; // 0xdf5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vYamatoCastPos; // 0xdf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vTargetCastPos; // 0xe04            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flFlyingToTargetStartTime; // 0xe10            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flEndAttackTime; // 0xe14            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleStartTime; // 0xe18            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleArriveTime; // 0xe1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackLatchTime; // 0xe20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAttackLatchPos; // 0xe24            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xe30            
            // metadata: MNetworkEnable
            bool m_bIsTargetAlly; // 0xe34            
            uint8_t _pad0e35[0x3]; // 0xe35
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flGrappleShotAttackTime; // 0xe38            
            uint8_t _pad0e3c[0x4]; // 0xe3c
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnPathChanged"
            Vector m_rgPath[20]; // 0xe40            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathIdx; // 0xf30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathSize; // 0xf34            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flPathLength; // 0xf38            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vFlyingInitialOffsetToPath; // 0xf3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float flDistFlown; // 0xf48            
            Vector m_vLastSafePos; // 0xf4c            
            uint8_t _pad0f58[0x100]; // 0xf58
            source2sdk::client::ParticleIndex_t m_nGrappleTravelEffect; // 0x1058            
            uint8_t _pad105c[0x54]; // 0x105c
            bool m_bPathDirty; // 0x10b0            
            uint8_t _pad10b1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_FlyingStrike) == 0x10b8);
    };
};
