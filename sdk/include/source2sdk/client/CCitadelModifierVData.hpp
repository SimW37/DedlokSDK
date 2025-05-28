#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierResponseRules_t.hpp"
#include "source2sdk/client/CCitadelTrackedAnimGraphModifierState_t.hpp"
#include "source2sdk/client/CCitadelTrackedBodygroupModifierState_t.hpp"
#include "source2sdk/client/CModifierVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/FootstepSound_t.hpp"
#include "source2sdk/client/HudDisplayLocation_t.hpp"
#include "source2sdk/client/ModifierBarrierBehavior_t.hpp"
#include "source2sdk/client/ModifierOverheadDrawType_t.hpp"
#include "source2sdk/client/ModifierTimeScaleSource_t.hpp"
#include "source2sdk/client/ModifiersDisplayLocation_t.hpp"
#include "source2sdk/client/ParamAndPriority_t.hpp"

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
        // Size: 0x660
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CCitadelModifierVData : public source2sdk::client::CModifierVData
        {
        public:
            bool m_bIsBuildup; // 0x3f0            
            // metadata: MPropertySuppressField
            bool m_bNetworkValuesForStatsPreview; // 0x3f1            
            uint8_t _pad03f2[0x6]; // 0x3f2
            // m_vecAutoRegisterModifierValueFromAbilityPropertyName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecAutoRegisterModifierValueFromAbilityPropertyName;
            char m_vecAutoRegisterModifierValueFromAbilityPropertyName[0x18]; // 0x3f8            
            // metadata: MPropertyStartGroup "Kill & Assist Credit"
            bool m_bCasterCountsAsAssister; // 0x410            
            uint8_t _pad0411[0x3]; // 0x411
            // metadata: MPropertyDescription "When set, an additional, invisible modifier will be left on the parent when this modifier expires.  This is to aid in giving assist credit for modifiers that deal no damage (ex. Astro's Lasso)"
            float m_flLingeringAssistWindow; // 0x414            
            // metadata: MPropertyStartGroup "Time"
            // metadata: MPropertyDescription "When set, the duration will get scaled depending on the owner's timescale"
            bool m_bDurationCanBeTimeScaled; // 0x418            
            bool m_bDurationReducible; // 0x419            
            uint8_t _pad041a[0x2]; // 0x41a
            // metadata: MPropertyDescription "Whose timescale to use when adjusting duration."
            source2sdk::client::ModifierTimeScaleSource_t m_eTimeScaleSource; // 0x41c            
            // metadata: MPropertyDescription "When true, the 'effectiveness' value for the modifier will be used to scale the duration. You most likely want 'Keep Maximum Duration On Refresh' to match this value"
            bool m_bDurationAffectedByEffectiveness; // 0x420            
            uint8_t _pad0421[0x7]; // 0x421
            // metadata: MPropertyStartGroup "AnimGraph1"
            // metadata: MPropertyDescription "A list of AnimGraph parameters whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
            // m_vecSetAndTrackedAnimGraphParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCitadelTrackedAnimGraphModifierState_t> m_vecSetAndTrackedAnimGraphParams;
            char m_vecSetAndTrackedAnimGraphParams[0x18]; // 0x428            
            // metadata: MPropertyStartGroup "AnimGraph2"
            // metadata: MPropertyFriendlyName "base_state value"
            // metadata: MPropertyDescription "The value to set the parameter "base_state" to.  Should be used for states that are common to all heroes (ex. lifted, asleep)."
            source2sdk::client::ParamAndPriority_t m_AG2BaseState; // 0x440            
            // metadata: MPropertyFriendlyName "hero_state value"
            // metadata: MPropertyDescription "The value to set the parameter "hero_state" to.  Should be used for states that are custom for the casting hero (ex. icepathing, flamedashing)."
            source2sdk::client::ParamAndPriority_t m_AG2HeroState; // 0x450            
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "A list of Bodygroups whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
            // m_vecSetAndTrackedBodyGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCitadelTrackedBodygroupModifierState_t> m_vecSetAndTrackedBodyGroups;
            char m_vecSetAndTrackedBodyGroups[0x18]; // 0x460            
            // metadata: MPropertyStartGroup "UI"
            source2sdk::client::ModifierOverheadDrawType_t m_eDrawOverheadStatus; // 0x478            
            bool m_bReverseHudProgressBar; // 0x47c            
            uint8_t _pad047d[0x3]; // 0x47d
            CUtlString m_strSmallIconCssClass; // 0x480            
            CUtlString m_strHintText; // 0x488            
            CPanoramaImageName m_strHudIcon; // 0x490            
            source2sdk::client::HudDisplayLocation_t m_eHudDisplayLocation; // 0x4a0            
            source2sdk::client::ModifiersDisplayLocation_t m_eModifierDisplayLocaiton; // 0x4a4            
            // metadata: MPropertyDescription "When set, the message will appear in the middle of the HUD for the target player."
            CUtlString m_strHudMessageText; // 0x4a8            
            // metadata: MPropertyDescription "When set, the modifier will not be visible overhead of the casting player for the other players"
            bool m_bIsHiddenOverhead; // 0x4b0            
            uint8_t _pad04b1[0x7]; // 0x4b1
            // metadata: MPropertyDescription "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
            // m_vecAlwaysShowInStatModifierUI has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::EModifierValue> m_vecAlwaysShowInStatModifierUI;
            char m_vecAlwaysShowInStatModifierUI[0x18]; // 0x4b8            
            // metadata: MPropertyStartGroup "Responses"
            source2sdk::client::CCitadelModifierResponseRules_t m_OnCreateResponse; // 0x4d0            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // 0x508            
            // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
            bool m_bEndCreatedSequenceOnRemove; // 0x590            
            uint8_t _pad0591[0x7]; // 0x591
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // 0x598            
            // metadata: MPropertyStartGroup "Barrier"
            source2sdk::client::ModifierBarrierBehavior_t m_BarrierBehavior; // 0x620            
            uint8_t _pad0624[0x4]; // 0x624
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sExpiredSound; // 0x628            
            // metadata: MPropertyDescription "Overrides the default footstep. The footstep with the greatest Priority is selected. It must have a priority greater than -1 to be selected!"
            source2sdk::client::FootstepSound_t m_FootstepOverride; // 0x638            
            // metadata: MPropertyDescription "Plays alongside the default footstep."
            CSoundEventName m_FootstepAdditional; // 0x650            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelModifierVData) == 0x660);
    };
};
