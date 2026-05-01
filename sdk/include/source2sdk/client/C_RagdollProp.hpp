#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
        // Size: 0xd30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_ragEnabled"
        // static metadata: MNetworkVarNames "Vector m_ragPos"
        // static metadata: MNetworkVarNames "QAngle m_ragAngles"
        // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
        // static metadata: MNetworkVarNames "EHANDLE m_hRagdollSource"
        #pragma pack(push, 1)
        class C_RagdollProp : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ca0[0x8]; // 0xca0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ragEnabledChanged"
            // metadata: MNotSaved
            // m_ragEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<bool> m_ragEnabled;
            char m_ragEnabled[0x18]; // 0xca8            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNotSaved
            // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<Vector> m_ragPos;
            char m_ragPos[0x18]; // 0xcc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "13"
            // metadata: MNotSaved
            // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<QAngle> m_ragAngles;
            char m_ragAngles[0x18]; // 0xcd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNotSaved
            float m_flBlendWeight; // 0xcf0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRagdollSource;
            char m_hRagdollSource[0x4]; // 0xcf4            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xcf8            
            uint8_t _pad0cf9[0x3]; // 0xcf9
            // metadata: MNotSaved
            float m_flBlendWeightCurrent; // 0xcfc            
            // metadata: MNotSaved
            // m_parentPhysicsBoneIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_parentPhysicsBoneIndices;
            char m_parentPhysicsBoneIndices[0x18]; // 0xd00            
            // metadata: MNotSaved
            // m_worldSpaceBoneComputationOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_worldSpaceBoneComputationOrder;
            char m_worldSpaceBoneComputationOrder[0x18]; // 0xd18            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RagdollProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RagdollProp) == 0xd30);
    };
};
