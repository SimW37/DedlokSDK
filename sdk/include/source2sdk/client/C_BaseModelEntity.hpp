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
    class CRenderComponent;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x808
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
    // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
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
        client::CRenderComponent* m_CRenderComponent; // 0x510        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CHitboxComponent"
        // metadata: MNetworkAlias "CHitboxComponent"
        // metadata: MNetworkTypeAlias "CHitboxComponent"
        client::CHitboxComponent m_CHitboxComponent; // 0x518        
        client::HitGroup_t m_LastHitGroup; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x544[0x24]; // 0x544
        bool m_bInitModelEffects; // 0x568        
        bool m_bIsStaticProp; // 0x569        
        [[maybe_unused]] std::uint8_t pad_0x56a[0x2]; // 0x56a
        int32_t m_nLastAddDecal; // 0x56c        
        int32_t m_nDecalsAdded; // 0x570        
        int32_t m_iOldHealth; // 0x574        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderModeChanged"
        client::RenderMode_t m_nRenderMode; // 0x578        
        // metadata: MNetworkEnable
        client::RenderFx_t m_nRenderFX; // 0x579        
        [[maybe_unused]] std::uint8_t pad_0x57a[0x6]; // 0x57a
        CUtlString m_szAddModifier; // 0x580        
        bool m_bAllowFadeInView; // 0x588        
        [[maybe_unused]] std::uint8_t pad_0x589[0x1f]; // 0x589
        bool m_bHasCollision; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5a9[0x3]; // 0x5a9
        Vector m_vSupport; // 0x5ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnColorChanged"
        Color m_clrRender; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4]; // 0x5bc
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
        // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::EntityRenderAttribute_t> m_vecRenderAttributes;
        char m_vecRenderAttributes[0x68]; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x628[0x18]; // 0x628
        // metadata: MNetworkEnable
        bool m_bRenderToCubemaps; // 0x640        
        // metadata: MNetworkEnable
        bool m_bNoInterpolate; // 0x641        
        [[maybe_unused]] std::uint8_t pad_0x642[0x6]; // 0x642
        // metadata: MNetworkEnable
        client::CCollisionProperty m_Collision; // 0x648        
        // metadata: MNetworkEnable
        client::CGlowProperty m_Glow; // 0x6f8        
        // metadata: MNetworkEnable
        float m_flGlowBackfaceMult; // 0x750        
        // metadata: MNetworkEnable
        float m_fadeMinDist; // 0x754        
        // metadata: MNetworkEnable
        float m_fadeMaxDist; // 0x758        
        // metadata: MNetworkEnable
        float m_flFadeScale; // 0x75c        
        // metadata: MNetworkEnable
        float m_flShadowStrength; // 0x760        
        // metadata: MNetworkEnable
        uint8_t m_nObjectCulling; // 0x764        
        [[maybe_unused]] std::uint8_t pad_0x765[0x3]; // 0x765
        // metadata: MNetworkEnable
        int32_t m_nAddDecal; // 0x768        
        // metadata: MNetworkEnable
        Vector m_vDecalPosition; // 0x76c        
        // metadata: MNetworkEnable
        Vector m_vDecalForwardAxis; // 0x778        
        // metadata: MNetworkEnable
        float m_flDecalHealBloodRate; // 0x784        
        // metadata: MNetworkEnable
        float m_flDecalHealHeightRate; // 0x788        
        [[maybe_unused]] std::uint8_t pad_0x78c[0x4]; // 0x78c
        // metadata: MNetworkEnable
        // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
        char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0x790        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
        client::CNetworkViewOffsetVector m_vecViewOffset; // 0x7a8        
        [[maybe_unused]] std::uint8_t pad_0x7d0[0x8]; // 0x7d0
        client::CClientAlphaProperty* m_pClientAlphaProperty; // 0x7d8        
        Color m_ClientOverrideTint; // 0x7e0        
        bool m_bUseClientOverrideTint; // 0x7e4        
        [[maybe_unused]] std::uint8_t pad_0x7e5[0x23];
        
        // Datamap fields:
        // int32_t InputAlpha; // 0x0
        // Color InputColor; // 0x0
        // int32_t InputSkin; // 0x0
        // CUtlString add_attribute; // 0x7fffffff
        // void m_Ropes; // 0x548
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
    static_assert(sizeof(C_BaseModelEntity) == 0x808);
};
