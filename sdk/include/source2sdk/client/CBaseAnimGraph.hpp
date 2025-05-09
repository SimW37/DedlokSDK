#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
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
    // Size: 0xcb0
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
    class CBaseAnimGraph : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9a8[0x80]; // 0x9a8
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0xa28        
        [[maybe_unused]] std::uint8_t pad_0xa29[0x1]; // 0xa29
        bool m_bSuppressAnimEventSounds; // 0xa2a        
        [[maybe_unused]] std::uint8_t pad_0xa2b[0xd]; // 0xa2b
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0xa38        
        [[maybe_unused]] std::uint8_t pad_0xa39[0x3]; // 0xa39
        float m_flMaxSlopeDistance; // 0xa3c        
        Vector m_vLastSlopeCheckPos; // 0xa40        
        bool m_bAnimationUpdateScheduled; // 0xa4c        
        [[maybe_unused]] std::uint8_t pad_0xa4d[0x3]; // 0xa4d
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0xa50        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0xa5c        
        client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xa60        
        bool m_bBuiltRagdoll; // 0xa68        
        [[maybe_unused]] std::uint8_t pad_0xa69[0x17]; // 0xa69
        // metadata: MNetworkEnable
        client::PhysicsRagdollPose_t m_RagdollPose; // 0xa80        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
        bool m_bRagdollEnabled; // 0xac8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0xac9        
        [[maybe_unused]] std::uint8_t pad_0xaca[0xe]; // 0xaca
        bool m_bHasAnimatedMaterialAttributes; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xad9[0x137]; // 0xad9
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "animGraph2DefinitionChanged"
        // m_hAnimGraph2DefinitionNetVar has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hAnimGraph2DefinitionNetVar;
        char m_hAnimGraph2DefinitionNetVar[0x8]; // 0xc10        
        // metadata: MNetworkEnable
        uint8_t m_animGraph2FlagsNetVar; // 0xc18        
        [[maybe_unused]] std::uint8_t pad_0xc19[0x3f]; // 0xc19
        // metadata: MNetworkEnable
        // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint8_t> m_animGraph2SerializeData;
        char m_animGraph2SerializeData[0x18]; // 0xc58        
        // metadata: MNetworkEnable
        int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xc70        
        // metadata: MNetworkEnable
        int32_t m_animGraph2ReloadCountSV; // 0xc74        
        [[maybe_unused]] std::uint8_t pad_0xc78[0x38];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0xa20
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
        // void InputClearTargetIdentifierOverride; // 0x0
        // bool InputDisableAnimEventSounds; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0xcb0);
};
