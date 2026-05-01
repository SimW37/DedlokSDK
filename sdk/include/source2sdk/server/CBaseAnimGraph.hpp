#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerManager.hpp"
#include "source2sdk/modellib/AnimTagID.hpp"
#include "source2sdk/server/CBaseAnimGraph_ModifierHandleVector_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CAnimGraphControllerBase;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct IChoreoServices;
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
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa80
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
        class CBaseAnimGraph : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MSaveOpsForField
            source2sdk::client::CAnimGraphControllerManager m_graphControllerManager; // 0x778            
            // metadata: MSaveOpsForField
            source2sdk::client::CAnimGraphControllerBase* m_pMainGraphController; // 0x828            
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x830            
            uint8_t _pad0831[0x7]; // 0x831
            // metadata: MSaveOpsForField
            source2sdk::client::IChoreoServices* m_pChoreoServices; // 0x838            
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0x840            
            uint8_t _pad0841[0x3]; // 0x841
            float m_flMaxSlopeDistance; // 0x844            
            // metadata: MNotSaved
            VectorWS m_vLastSlopeCheckPos; // 0x848            
            std::uint32_t m_nAnimGraphUpdateId; // 0x854            
            // metadata: MNotSaved
            bool m_bAnimationUpdateScheduled; // 0x858            
            uint8_t _pad0859[0x3]; // 0x859
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            Vector m_vecForce; // 0x85c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nForceBone; // 0x868            
            uint8_t _pad086c[0xc]; // 0x86c
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysicsRagdollControl* m_pRagdollControl; // 0x878            
            // metadata: MNetworkEnable
            source2sdk::server::PhysicsRagdollPose_t m_RagdollPose; // 0x880            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0x8a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            // metadata: MNotSaved
            bool m_bRagdollClientSide; // 0x8a9            
            uint8_t _pad08aa[0x6]; // 0x8aa
            CTransform m_xParentedRagdollRootInEntitySpace; // 0x8b0            
            uint8_t _pad08d0[0x140]; // 0x8d0
            // m_bodyGroupModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<source2sdk::modellib::AnimTagID,source2sdk::server::CBaseAnimGraph_ModifierHandleVector_t> m_bodyGroupModifiers;
            char m_bodyGroupModifiers[0x20]; // 0xa10            
            uint8_t _pad0a30[0x50];
            
            // Datamap fields:
            // void CBaseAnimGraphChoreoServicesThink; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
            // void InputClearTargetIdentifierOverride; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraph) == 0xa80);
    };
};
