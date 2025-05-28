#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct IChoreoServices;
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
        // Size: 0xab8
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
        // static metadata: MNetworkVarNames "HNmGraphDefinitionStrong m_hAnimGraph2DefinitionNetVar"
        // static metadata: MNetworkVarNames "uint8 m_animGraph2FlagsNetVar"
        // static metadata: MNetworkVarNames "uint8 m_animGraph2SerializeData"
        // static metadata: MNetworkVarNames "int m_nAnimGraph2SerializeDataSizeBytes"
        // static metadata: MNetworkVarNames "int m_animGraph2ReloadCountSV"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07d0[0x80]; // 0x7d0
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x850            
            uint8_t _pad0851[0x7]; // 0x851
            source2sdk::client::IChoreoServices* m_pChoreoServices; // 0x858            
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0x860            
            uint8_t _pad0861[0x3]; // 0x861
            float m_flMaxSlopeDistance; // 0x864            
            Vector m_vLastSlopeCheckPos; // 0x868            
            bool m_bAnimationUpdateScheduled; // 0x874            
            uint8_t _pad0875[0x3]; // 0x875
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0x878            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0x884            
            uint8_t _pad0888[0x10]; // 0x888
            // metadata: MNetworkEnable
            source2sdk::server::PhysicsRagdollPose_t m_RagdollPose; // 0x898            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0x8c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0x8c1            
            uint8_t _pad08c2[0x15e]; // 0x8c2
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "animGraph2DefinitionChanged"
            // m_hAnimGraph2DefinitionNetVar has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hAnimGraph2DefinitionNetVar;
            char m_hAnimGraph2DefinitionNetVar[0x8]; // 0xa20            
            // metadata: MNetworkEnable
            std::uint8_t m_animGraph2FlagsNetVar; // 0xa28            
            uint8_t _pad0a29[0x3f]; // 0xa29
            // metadata: MNetworkEnable
            // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_animGraph2SerializeData;
            char m_animGraph2SerializeData[0x18]; // 0xa68            
            // metadata: MNetworkEnable
            std::int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xa80            
            // metadata: MNetworkEnable
            std::int32_t m_animGraph2ReloadCountSV; // 0xa84            
            uint8_t _pad0a88[0x30];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0x848
            // void CBaseAnimGraphChoreoServicesThink; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
            // void InputClearTargetIdentifierOverride; // 0x0
            // void InputBecomeRagdoll; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraph) == 0xab8);
    };
};
