/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUUserItemManager.h>

@class HFStaticItem, HMOutgoingHomeInvitation, NSString;

@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager> {

	HFStaticItem* _inviteAgainItem;
	HFStaticItem* _removeItem;

}

@property (nonatomic,retain) HFStaticItem * inviteAgainItem;                               //@synthesize inviteAgainItem=_inviteAgainItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * removeItem;                                    //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,readonly) HMOutgoingHomeInvitation * outgoingInvitation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setRemoveItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)removeItem;
-(HMOutgoingHomeInvitation *)outgoingInvitation;
-(HFStaticItem *)inviteAgainItem;
-(void)setInviteAgainItem:(HFStaticItem *)arg1 ;
-(id)_removeTitleForInvitationState:(long long)arg1 ;
@end

