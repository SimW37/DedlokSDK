#pragma once
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/EntityRenderAttribute_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CClientAlphaProperty;
};

namespace source2sdk::client
{
    class CDestructiblePartsSystemComponent;
};

namespace source2sdk::client
{
    class CRenderComponent;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9a8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
    // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
    // static metadata: MNetworkVarNames "CDestructiblePartsSystemComponent * m_pDestructiblePartsSystemComponent"
    // static metadata: MNetworkVarNames "RenderMode_t m_nRenderMode"
    // static metadata: MNetworkVarNames "RenderFx_t m_nRenderFX"
    // static metadata: MNetworkVarNames "Color m_clrRender"
    // static metadata: MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
    // static metadata: MNetworkVarNames "bool m_bRenderToCubemaps"
    // static metadata: MNetworkVarNames "bool m_bNoInterpolate"
    // static metadata: MNetworkVarNames "CCollisionProperty m_Collision"
    // static metadata: MNetworkVarNames "CGlowProperty m_Glow"
    // static metadata: MNetworkVarNames "float m_flGlowBackfaceMult"
    // static metadata: MNetworkVarNames "float32 m_fadeMinDist"
    // static metadata: MNetworkVarNames "float32 m_fadeMaxDist"
    // static metadata: MNetworkVarNames "float32 m_flFadeScale"
    // static metadata: MNetworkVarNames "float32 m_flShadowStrength"
    // static metadata: MNetworkVarNames "uint8 m_nObjectCulling"
    // static metadata: MNetworkVarNames "int m_nAddDecal"
    // static metadata: MNetworkVarNames "Vector m_vDecalPosition"
    // static metadata: MNetworkVarNames "Vector m_vDecalForwardAxis"
    // static metadata: MNetworkVarNames "float m_flDecalHealBloodRate"
    // static metadata: MNetworkVarNames "float m_flDecalHealHeightRate"
    // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
    #pragma pack(push, 1)
    class C_BaseModelEntity : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CRenderComponent"
        // metadata: MNetworkAlias "CRenderComponent"
        // metadata: MNetworkTypeAlias "CRenderComponent"
        client::CRenderComponent* m_CRenderComponent; // 0x5e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CHitboxComponent"
        // metadata: MNetworkAlias "CHitboxComponent"
        // metadata: MNetworkTypeAlias "CHitboxComponent"
        client::CHitboxComponent m_CHitboxComponent; // 0x5e8        
        // metadata: MNetworkEnable
        client::CDestructiblePartsSystemComponent* m_pDestructiblePartsSystemComponent; // 0x610        
        client::HitGroup_t m_LastHitGroup; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x61c[0x4]; // 0x61c
        CGlobalSymbol m_sLastDamageSourceName; // 0x620        
        Vector m_vLastDamagePosition; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x634[0x24]; // 0x634
        bool m_bInitModelEffects; // 0x658        
        bool m_bIsStaticProp; // 0x659        
        [[maybe_unused]] std::uint8_t pad_0x65a[0x2]; // 0x65a
        int32_t m_nLastAddDecal; // 0x65c        
        int32_t m_nDecalsAdded; // 0x660        
        int32_t m_iOldHealth; // 0x664        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderModeChanged"
        client::RenderMode_t m_nRenderMode; // 0x668        
        // metadata: MNetworkEnable
        client::RenderFx_t m_nRenderFX; // 0x669        
        [[maybe_unused]] std::uint8_t pad_0x66a[0x6]; // 0x66a
        CUtlString m_szAddModifier; // 0x670        
        bool m_bAllowFadeInView; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x679[0x1f]; // 0x679
        bool m_bHasCollision; // 0x698        
        [[maybe_unused]] std::uint8_t pad_0x699[0x3]; // 0x699
        Vector m_vSupport; // 0x69c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnColorChanged"
        Color m_clrRender; // 0x6a8        
        [[maybe_unused]] std::uint8_t pad_0x6ac[0x4]; // 0x6ac
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
        // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::EntityRenderAttribute_t> m_vecRenderAttributes;
        char m_vecRenderAttributes[0x68]; // 0x6b0        
        [[maybe_unused]] std::uint8_t pad_0x718[0x18]; // 0x718
        // metadata: MNetworkEnable
        bool m_bRenderToCubemaps; // 0x730        
        // metadata: MNetworkEnable
        bool m_bNoInterpolate; // 0x731        
        [[maybe_unused]] std::uint8_t pad_0x732[0x6]; // 0x732
        // metadata: MNetworkEnable
        client::CCollisionProperty m_Collision; // 0x738        
        // metadata: MNetworkEnable
        client::CGlowProperty m_Glow; // 0x7e8        
        // metadata: MNetworkEnable
        float m_flGlowBackfaceMult; // 0x840        
        // metadata: MNetworkEnable
        float m_fadeMinDist; // 0x844        
        // metadata: MNetworkEnable
        float m_fadeMaxDist; // 0x848        
        // metadata: MNetworkEnable
        float m_flFadeScale; // 0x84c        
        // metadata: MNetworkEnable
        float m_flShadowStrength; // 0x850        
        // metadata: MNetworkEnable
        uint8_t m_nObjectCulling; // 0x854        
        [[maybe_unused]] std::uint8_t pad_0x855[0x3]; // 0x855
        // metadata: MNetworkEnable
        int32_t m_nAddDecal; // 0x858        
        // metadata: MNetworkEnable
        Vector m_vDecalPosition; // 0x85c        
        // metadata: MNetworkEnable
        Vector m_vDecalForwardAxis; // 0x868        
        // metadata: MNetworkEnable
        float m_flDecalHealBloodRate; // 0x874        
        // metadata: MNetworkEnable
        float m_flDecalHealHeightRate; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x87c[0x4]; // 0x87c
        // metadata: MNetworkEnable
        // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
        char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0x880        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
        client::CNetworkViewOffsetVector m_vecViewOffset; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x8c0[0xb8]; // 0x8c0
        client::CClientAlphaProperty* m_pClientAlphaProperty; // 0x978        
        Color m_ClientOverrideTint; // 0x980        
        bool m_bUseClientOverrideTint; // 0x984        
        [[maybe_unused]] std::uint8_t pad_0x985[0x23];
        
        // Datamap fields:
        // int32_t InputAlpha; // 0x0
        // Color InputColor; // 0x0
        // int32_t InputSkin; // 0x0
        // CUtlString add_attribute; // 0x7fffffff
        // void m_Ropes; // 0x638
        // Color rendercolor32; // 0x7fffffff
        // Color rendercolor; // 0x7fffffff
        // int32_t renderamt; // 0x7fffffff
        // Vector mins; // 0x7fffffff
        // Vector maxs; // 0x7fffffff
        // const char * skin; // 0x7fffffff
        // CUtlString bodygroups; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseModelEntity because it is not a standard-layout class
    static_assert(sizeof(C_BaseModelEntity) == 0x9a8);
};
