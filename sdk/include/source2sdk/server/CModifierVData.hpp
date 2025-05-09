#pragma once
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CModifierLevelFloat.hpp"
#include "source2sdk/client/EModifierState.hpp"
#include "source2sdk/client/ModifierAttribute_t.hpp"
#include "source2sdk/client/ModifierDebuffType_t.hpp"
#include "source2sdk/client/ModifierDisableGroup_t.hpp"
#include "source2sdk/client/ModifierHiddenType_t.hpp"
#include "source2sdk/client/ModifierRenderAttribute_t.hpp"
#include "source2sdk/client/ModifierScriptValue_t.hpp"
#include "source2sdk/client/ModifierScriptedEventHandler_t.hpp"
#include "source2sdk/client/ModifierSoundRecipients_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x3f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyStartGroup "Time"
        client::CModifierLevelFloat m_flDuration; // 0x28        
        // metadata: MPropertyStartGroup "Time"
        // metadata: MPropertyDescription "If set, the duration will not get reduced from a refresh with a shorter duration"
        bool m_bKeepMaximumDurationOnRefresh; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x39[0x7]; // 0x39
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyDescription "Particle system to attach to the parent of the modifier"
        // m_strParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strParticleEffect;
        char m_strParticleEffect[0xe0]; // 0x40        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyDescription "Name of particle control point config to use for ambient effect (empty means use 'preview' config)"
        CUtlString m_strParticleEffectConfig; // 0x120        
        // metadata: MPropertyGroupName "Visuals"
        // metadata: MPropertyDescription "Status Effect to apply to the parent of the modifier"
        // m_strParticleStatusEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strParticleStatusEffect;
        char m_strParticleStatusEffect[0xe0]; // 0x128        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyDescription "Name of particle control point config to use for status effect (empty means use 'preview' config)"
        CUtlString m_strParticleStatusEffectConfig; // 0x208        
        // metadata: MPropertyGroupName "Visuals"
        // metadata: MPropertyDescription "Screen-space particle system to create if the parent of the modifier is the local player"
        // m_strScreenParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strScreenParticleEffect;
        char m_strScreenParticleEffect[0xe0]; // 0x210        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyDescription "Name of particle control point config to use for screen-space effect (empty means use 'preview' config)"
        CUtlString m_strScreenParticleEffectConfig; // 0x2f0        
        // metadata: MPropertyGroupName "Visuals"
        // metadata: MPropertyDescription "Priority of this status effect relative to others"
        int32_t m_nStatusEffectPriority; // 0x2f8        
        [[maybe_unused]] std::uint8_t pad_0x2fc[0x4]; // 0x2fc
        // metadata: MPropertyGroupName "Visuals"
        // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ModifierRenderAttribute_t> m_vecRenderAttributes;
        char m_vecRenderAttributes[0x18]; // 0x300        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_sStartSound; // 0x318        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_sAmbientLoopingSound; // 0x328        
        // metadata: MPropertyGroupName "Sounds"
        client::ModifierSoundRecipients_t m_nAmbientLoopingSoundRecipients; // 0x338        
        [[maybe_unused]] std::uint8_t pad_0x33c[0x4]; // 0x33c
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_sEndSound; // 0x340        
        // metadata: MPropertyGroupName "Scripted Settings"
        // m_nEnabledStateMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVecEnum<client::EModifierState> m_nEnabledStateMask;
        char m_nEnabledStateMask[0x1c]; // 0x350        
        // metadata: MPropertyGroupName "Scripted Settings"
        // m_nDisabledStateMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVecEnum<client::EModifierState> m_nDisabledStateMask;
        char m_nDisabledStateMask[0x1c]; // 0x36c        
        // metadata: MPropertyGroupName "Scripted Settings"
        client::ModifierAttribute_t m_nAttributes; // 0x388        
        [[maybe_unused]] std::uint8_t pad_0x38c[0x4]; // 0x38c
        // metadata: MPropertyGroupName "Scripted Settings"
        // metadata: MPropertyDescription "Scripted Modifier Values"
        // m_vecScriptValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ModifierScriptValue_t> m_vecScriptValues;
        char m_vecScriptValues[0x18]; // 0x390        
        // metadata: MPropertyGroupName "Scripted Settings"
        // metadata: MPropertyDescription "Scripted Event Handlers"
        // m_vecScriptEventHandlers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ModifierScriptedEventHandler_t> m_vecScriptEventHandlers;
        char m_vecScriptEventHandlers[0x18]; // 0x3a8        
        client::ModifierDisableGroup_t m_nDisableGroupsMask; // 0x3c0        
        // metadata: MPropertyGroupName "UI"
        // metadata: MPropertyDescription "When set, the modifier will not be visible to UI or visible modifier list."
        bool m_bIsHidden; // 0x3c4        
        [[maybe_unused]] std::uint8_t pad_0x3c5[0x3]; // 0x3c5
        // metadata: MPropertyGroupName "UI"
        // metadata: MPropertySuppressExpr "m_bIsHidden != true"
        client::ModifierHiddenType_t m_eHiddenType; // 0x3c8        
        [[maybe_unused]] std::uint8_t pad_0x3cc[0x4]; // 0x3cc
        // metadata: MPropertyGroupName "UI"
        // metadata: MPropertyDescription "When set, use the value as localization key."
        CUtlString m_sLocalizationName; // 0x3d0        
        // metadata: MPropertyDescription "When to consider the modifier a debuff."
        client::ModifierDebuffType_t m_eDebuffType; // 0x3d8        
        // metadata: MPropertyDescription "When set, stacks will automatically be decayed after a duration's worth of time has passed.  Only makes sense if adding a stack refreshed the modifier."
        bool m_bAutomaticallyDecayStacks; // 0x3dc        
        // metadata: MPropertyStartGroup "Networking"
        // metadata: MPropertyDescription "If true, application of the modifier will be delayed on the server to match the client's latency."
        bool m_bAllowApplicationPrediction; // 0x3dd        
        [[maybe_unused]] std::uint8_t pad_0x3de[0x12];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierVData because it is not a standard-layout class
    static_assert(sizeof(CModifierVData) == 0x3f0);
};
