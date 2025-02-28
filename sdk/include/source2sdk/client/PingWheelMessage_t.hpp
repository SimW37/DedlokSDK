#pragma once
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/ChatMsgPingMarkerInfo.hpp"
#include "source2sdk/client/CitadelPingWheelConcept_t.hpp"
#include "source2sdk/client/ECitadelPingMessageRecipients_t.hpp"
#include "source2sdk/client/ECitadelPingWheelSound_t.hpp"
#include "source2sdk/client/PingWheelOptionID_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x98
    // 
    // static metadata: MVDataRoot
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PingWheelMessage_t
    {
    public:
        // metadata: MPropertySuppressField
        // m_vecSubnavMessageIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PingWheelOptionID_t> m_vecSubnavMessageIDs;
        char m_vecSubnavMessageIDs[0x18]; // 0x0        
        // metadata: MPropertyDescription "unique integer ID of this ping wheel message"
        // metadata: MVDataUniqueMonotonicInt "_editor/next_ping_wheel_id"
        // metadata: MPropertyAttributeEditor "locked_int()"
        // metadata: MPropertySuppressField
        client::PingWheelOptionID_t m_unPingWheelOptionID; // 0x18        
        // metadata: MPropertyDescription "Concept for your ping message. These are populated in citadel_ping_wheel_data.h"
        client::CitadelPingWheelConcept_t m_ePingConcept; // 0x1c        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        // metadata: MPropertyDescription "How do you want the ping to behave?"
        client::ChatMsgPingMarkerInfo m_ePingMarkerInfo; // 0x20        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        // metadata: MPropertyDescription "Which recipients do you want this ping message sent to?"
        client::ECitadelPingMessageRecipients_t m_eRecipientsType; // 0x24        
        // metadata: MPropertySuppressExpr "m_ePingConcept != CITADEL_PING_HEADING_TO_LANE && m_ePingConcept != CITADEL_PING_PUSH_LANE && m_ePingConcept != CITADEL_PING_DEFEND_LANE"
        // metadata: MPropertyDescription "Lane Color for certain pings that require a line color."
        client::CMsgLaneColor m_eLaneColor; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        // metadata: MPropertyDescription "This is the Loc String that displays as a Ping Wheel Option."
        CUtlString m_strLabelToken; // 0x30        
        // metadata: MPropertyDescription "This is the Loc String that shows in the chat area when you use this Ping Option."
        CUtlString m_strMessageToken; // 0x38        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        // metadata: MPropertyDescription "Sound that Plays when you use this Ping Option"
        CUtlString m_strSound; // 0x40        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        // metadata: MPropertyDescription "Icon that displays on the Ping Wheel"
        CUtlString m_strIcon; // 0x48        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        // metadata: MPropertyDescription "What type of sound should this Ping Option play when used?"
        client::ECitadelPingWheelSound_t m_ePingWheelSoundType; // 0x50        
        // metadata: MPropertyDescription "Is this a subnav of another message? i.e. Heading to Yellow is a subnav of Heading to Lane..."
        bool m_bIsSubnavMessage; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x55[0x3]; // 0x55
        // metadata: MPropertyDescription "The Default value 30 is usually good but if the text on the Ping Wheel isn't centered vertically, you should adjust this value."
        float m_flPhraseTopMarginOffset; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4]; // 0x5c
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true || m_eSliceType == CITADEL_PING_WHEEL_ONE_SLICE || m_eSliceType == CITADEL_PING_WHEEL_TWO_SLICE"
        // metadata: MPropertyCustomFGDType "vdata_choice:scripts/ping_wheel_messages.vdata"
        // metadata: MPropertyDescription "Is this a parent message that has subnav messages? i.e. Heading to Lane has subnav messages Heading to Yellow, Heading to Blue, etc."
        // m_vecSubnavMessageNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecSubnavMessageNames;
        char m_vecSubnavMessageNames[0x18]; // 0x60        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        // metadata: MPropertyDescription "Is this message a response to other concepts? i.e. Yes, No, and On My Way are all responses to other messages. This message will appear in the Contextual Ping Wheel Slot if one of these concepts is used by another player."
        // m_vecRespondsToConcepts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CitadelPingWheelConcept_t> m_vecRespondsToConcepts;
        char m_vecRespondsToConcepts[0x18]; // 0x78        
        // metadata: MPropertyDescription "Should this message be bindable via Keybinds?"
        bool m_bBindable; // 0x90        
        // metadata: MPropertyDescription "Should this message be bindable on the Ping Wheel?"
        bool m_bPingWheelBindable; // 0x91        
        [[maybe_unused]] std::uint8_t pad_0x92[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PingWheelMessage_t, m_vecSubnavMessageIDs) == 0x0);
    static_assert(offsetof(PingWheelMessage_t, m_unPingWheelOptionID) == 0x18);
    static_assert(offsetof(PingWheelMessage_t, m_ePingConcept) == 0x1c);
    static_assert(offsetof(PingWheelMessage_t, m_ePingMarkerInfo) == 0x20);
    static_assert(offsetof(PingWheelMessage_t, m_eRecipientsType) == 0x24);
    static_assert(offsetof(PingWheelMessage_t, m_eLaneColor) == 0x28);
    static_assert(offsetof(PingWheelMessage_t, m_strLabelToken) == 0x30);
    static_assert(offsetof(PingWheelMessage_t, m_strMessageToken) == 0x38);
    static_assert(offsetof(PingWheelMessage_t, m_strSound) == 0x40);
    static_assert(offsetof(PingWheelMessage_t, m_strIcon) == 0x48);
    static_assert(offsetof(PingWheelMessage_t, m_ePingWheelSoundType) == 0x50);
    static_assert(offsetof(PingWheelMessage_t, m_bIsSubnavMessage) == 0x54);
    static_assert(offsetof(PingWheelMessage_t, m_flPhraseTopMarginOffset) == 0x58);
    static_assert(offsetof(PingWheelMessage_t, m_vecSubnavMessageNames) == 0x60);
    static_assert(offsetof(PingWheelMessage_t, m_vecRespondsToConcepts) == 0x78);
    static_assert(offsetof(PingWheelMessage_t, m_bBindable) == 0x90);
    static_assert(offsetof(PingWheelMessage_t, m_bPingWheelBindable) == 0x91);
    
    static_assert(sizeof(PingWheelMessage_t) == 0x98);
};
