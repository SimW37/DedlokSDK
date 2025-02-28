#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb00
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
    // static metadata: MNetworkVarNames "uint8 m_animGraph2SerializeData"
    // static metadata: MNetworkVarNames "int m_nAnimGraph2SerializeDataSizeBytes"
    // static metadata: MNetworkVarNames "int m_animGraph2ReloadCountSV"
    #pragma pack(push, 1)
    class CBaseAnimGraph : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x808[0x80]; // 0x808
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x888        
        [[maybe_unused]] std::uint8_t pad_0x889[0x1]; // 0x889
        bool m_bSuppressAnimEventSounds; // 0x88a        
        [[maybe_unused]] std::uint8_t pad_0x88b[0xd]; // 0x88b
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x899[0x3]; // 0x899
        float m_flMaxSlopeDistance; // 0x89c        
        Vector m_vLastSlopeCheckPos; // 0x8a0        
        bool m_bAnimationUpdateScheduled; // 0x8ac        
        [[maybe_unused]] std::uint8_t pad_0x8ad[0x3]; // 0x8ad
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x8b0        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x8bc        
        client::CBaseAnimGraph* m_pClientsideRagdoll; // 0x8c0        
        bool m_bBuiltRagdoll; // 0x8c8        
        [[maybe_unused]] std::uint8_t pad_0x8c9[0x17]; // 0x8c9
        // metadata: MNetworkEnable
        client::PhysicsRagdollPose_t m_RagdollPose; // 0x8e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
        bool m_bRagdollEnabled; // 0x928        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x929        
        [[maybe_unused]] std::uint8_t pad_0x92a[0xe]; // 0x92a
        bool m_bHasAnimatedMaterialAttributes; // 0x938        
        [[maybe_unused]] std::uint8_t pad_0x939[0x16f]; // 0x939
        // metadata: MNetworkEnable
        // metadata: MNetworkSendProxyRecipientsFilter
        // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint8_t> m_animGraph2SerializeData;
        char m_animGraph2SerializeData[0x18]; // 0xaa8        
        // metadata: MNetworkEnable
        // metadata: MNetworkSendProxyRecipientsFilter
        int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xac0        
        // metadata: MNetworkEnable
        int32_t m_animGraph2ReloadCountSV; // 0xac4        
        [[maybe_unused]] std::uint8_t pad_0xac8[0x38];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x880
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
        // void InputClearTargetIdentifierOverride; // 0x0
        // bool InputDisableAnimEventSounds; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0xb00);
};
