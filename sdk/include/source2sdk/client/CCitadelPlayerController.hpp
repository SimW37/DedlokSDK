#pragma once
#include "source2sdk/client/CBasePlayerController.hpp"
#include "source2sdk/client/CitadelLobbyPlayerSlot_t.hpp"
#include "source2sdk/client/EGuidedBotMatchObjective.hpp"
#include "source2sdk/client/EPlayerPlayState.hpp"
#include "source2sdk/client/HeroBuildID_t.hpp"
#include "source2sdk/client/PlayerDataGlobal_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_CitadelPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa78
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EPlayerPlayState m_ePlayState"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchLastHits"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchOrbsSecured"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchOrbsDenied"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageToGuardians"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageToPlayers"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageTaken"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchNetWorth"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchModsPurchased"
    // static metadata: MNetworkVarNames "int m_iGuidedBotMatchAbilityUpgrades"
    // static metadata: MNetworkVarNames "float m_flGuideBotMatchLastTaskNagVO"
    // static metadata: MNetworkVarNames "float m_flGuideBotLastTimeTaskCompleted"
    // static metadata: MNetworkVarNames "EGuidedBotMatchObjective m_eGuidedBotMatchObjective"
    // static metadata: MNetworkVarNames "int m_nCurrentRank"
    // static metadata: MNetworkVarNames "int8 m_nAssignedLane"
    // static metadata: MNetworkVarNames "int8 m_nOriginalLaneAssignment"
    // static metadata: MNetworkVarNames "bool m_bIsKingPanda"
    // static metadata: MNetworkVarNames "bool m_bBotDisconnectTakeover"
    // static metadata: MNetworkVarNames "bool m_bInTeamChat"
    // static metadata: MNetworkVarNames "bool m_bInPartyChat"
    // static metadata: MNetworkVarNames "HeroBuildID_t m_unHeroBuildID"
    // static metadata: MNetworkVarNames "bool m_bLaneSwapLocked"
    // static metadata: MNetworkVarNames "EHANDLE m_vecLaneSwapRequests"
    // static metadata: MNetworkVarNames "EHANDLE m_vecLaneSwapRejects"
    // static metadata: MNetworkVarNames "int32 m_vecMutedPlayers"
    // static metadata: MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
    // static metadata: MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
    // static metadata: MNetworkVarNames "int8 m_nDeathReplayAvailable"
    // static metadata: MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
    #pragma pack(push, 1)
    class CCitadelPlayerController : public client::CBasePlayerController
    {
    public:
        // metadata: MNetworkEnable
        client::EPlayerPlayState m_ePlayState; // 0x718        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchLastHits; // 0x71c        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchOrbsSecured; // 0x720        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchOrbsDenied; // 0x724        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageToGuardians; // 0x728        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageToPlayers; // 0x72c        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchDamageTaken; // 0x730        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchNetWorth; // 0x734        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchModsPurchased; // 0x738        
        // metadata: MNetworkEnable
        int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x73c        
        // metadata: MNetworkEnable
        float m_flGuideBotMatchLastTaskNagVO; // 0x740        
        // metadata: MNetworkEnable
        float m_flGuideBotLastTimeTaskCompleted; // 0x744        
        // metadata: MNetworkEnable
        client::EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x748        
        // metadata: MNetworkEnable
        int32_t m_nCurrentRank; // 0x74c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AssignedLaneChanged"
        int8_t m_nAssignedLane; // 0x750        
        // metadata: MNetworkEnable
        int8_t m_nOriginalLaneAssignment; // 0x751        
        // metadata: MNetworkEnable
        bool m_bIsKingPanda; // 0x752        
        // metadata: MNetworkEnable
        bool m_bBotDisconnectTakeover; // 0x753        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ChatGroupsChanged"
        bool m_bInTeamChat; // 0x754        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ChatGroupsChanged"
        bool m_bInPartyChat; // 0x755        
        [[maybe_unused]] std::uint8_t pad_0x756[0x2]; // 0x756
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::HeroBuildID_t m_unHeroBuildID; // 0x758        
        // metadata: MNetworkEnable
        bool m_bLaneSwapLocked; // 0x75c        
        [[maybe_unused]] std::uint8_t pad_0x75d[0x3]; // 0x75d
        // metadata: MNetworkEnable
        // m_vecLaneSwapRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecLaneSwapRequests;
        char m_vecLaneSwapRequests[0x18]; // 0x760        
        // metadata: MNetworkEnable
        // m_vecLaneSwapRejects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecLaneSwapRejects;
        char m_vecLaneSwapRejects[0x18]; // 0x778        
        // metadata: MNetworkEnable
        // m_vecMutedPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<int32_t> m_vecMutedPlayers;
        char m_vecMutedPlayers[0x18]; // 0x790        
        // metadata: MNetworkEnable
        // m_hHeroPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelPlayerPawn> m_hHeroPawn;
        char m_hHeroPawn[0x4]; // 0x7a8        
        [[maybe_unused]] std::uint8_t pad_0x7ac[0x34]; // 0x7ac
        // metadata: MNetworkEnable
        client::PlayerDataGlobal_t m_PlayerDataGlobal; // 0x7e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nDeathReplayAvailable; // 0xa68        
        // metadata: MNetworkEnable
        client::CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xa69        
        bool m_bHasCheckedFriendName; // 0xa6a        
        [[maybe_unused]] std::uint8_t pad_0xa6b[0x5]; // 0xa6b
        CUtlString m_sFriendName; // 0xa70        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerController because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerController) == 0xa78);
};
