/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMFSession;

@interface IMDLocationSharingController : NSObject {

	FMFSession* _session;

}
+(id)sharedInstance;
+(void)addLocationShareItemToMatchingChats:(id)arg1 ;
+(void)_addLocationShareItemToMatchingChats:(id)arg1 handleID:(id)arg2 hasStoredItem:(BOOL)arg3 broadcastChanges:(BOOL)arg4 ;
-(void)didStopSharingMyLocationWithHandle:(id)arg1 ;
-(void)didFailToHandleMappingPacket:(id)arg1 error:(id)arg2 ;
-(void)_forwardMappingPacket:(id)arg1 toID:(id)arg2 account:(id)arg3 ;
-(void)dealloc;
-(void)didStartSharingMyLocationWithHandle:(id)arg1 ;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1 ;
-(id)init;
-(void)receivedIncomingLocationSharePacket:(id)arg1 ;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 account:(id)arg3 ;
-(void)didStartAbilityToGetLocationForHandle:(id)arg1 ;
-(void)_generateLocationSharingItemWithHandleID:(id)arg1 direction:(long long)arg2 action:(long long)arg3 ;
@end

