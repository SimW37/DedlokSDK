#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerManager.hpp"
#include "source2sdk/client/CBaseAnimGraph_ModifierHandleVector_t.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/modellib/AnimTagID.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CAnimGraphControllerBase;
    };
};
namespace source2sdk
{
    namespace vphysics2
    {
        struct IPhysicsRagdollControl;
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
        // Size: 0xca0
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
        // static metadata: MNetworkVarNames "Vector m_vecForce"
        // static metadata: MNetworkVarNames "int32 m_nForceBone"
        // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
        // static metadata: MNetworkVarNames "bool m_bRagdollEnabled"
        // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MSaveOpsForField
            source2sdk::client::CAnimGraphControllerManager m_graphControllerManager; // 0x9a0            
            // metadata: MSaveOpsForField
            source2sdk::client::CAnimGraphControllerBase* m_pMainGraphController; // 0xa50            
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0xa58            
            uint8_t _pad0a59[0x1]; // 0xa59
            bool m_bSuppressAnimEventSounds; // 0xa5a            
            uint8_t _pad0a5b[0xd]; // 0xa5b
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0xa68            
            uint8_t _pad0a69[0x3]; // 0xa69
            float m_flMaxSlopeDistance; // 0xa6c            
            // metadata: MNotSaved
            VectorWS m_vLastSlopeCheckPos; // 0xa70            
            std::uint32_t m_nAnimGraphUpdateId; // 0xa7c            
            // metadata: MNotSaved
            bool m_bAnimationUpdateScheduled; // 0xa80            
            uint8_t _pad0a81[0x3]; // 0xa81
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            Vector m_vecForce; // 0xa84            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nForceBone; // 0xa90            
            uint8_t _pad0a94[0x4]; // 0xa94
            // metadata: MNotSaved
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xa98            
            // metadata: MNotSaved
            bool m_bBuiltRagdoll; // 0xaa0            
            uint8_t _pad0aa1[0xf]; // 0xaa1
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsRagdollControl* m_pRagdollControl; // 0xab0            
            // metadata: MNetworkEnable
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0xab8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0xb00            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            // metadata: MNotSaved
            bool m_bRagdollClientSide; // 0xb01            
            uint8_t _pad0b02[0xe]; // 0xb02
            // metadata: MNotSaved
            bool m_bHasAnimatedMaterialAttributes; // 0xb10            
            uint8_t _pad0b11[0x107]; // 0xb11
            // m_bodyGroupModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<source2sdk::modellib::AnimTagID,source2sdk::client::CBaseAnimGraph_ModifierHandleVector_t> m_bodyGroupModifiers;
            char m_bodyGroupModifiers[0x20]; // 0xc18            
            uint8_t _pad0c38[0x68];
            
            // Datamap fields:
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
            // void InputClearTargetIdentifierOverride; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0xca0);
    };
};
