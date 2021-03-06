/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSMutableDictionary, MPCPlaybackEngine, NSArray, MPCPlaybackAccount;

@interface _MPCPlaybackAccountManager : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _accounts;
	BOOL _needsRefreshDueToTimeout;
	BOOL _hasLoadedInitialAccounts;
	MPCPlaybackEngine* _playbackEngine;

}

@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accounts; 
@property (nonatomic,readonly) BOOL hasLoadedInitialAccounts;                          //@synthesize hasLoadedInitialAccounts=_hasLoadedInitialAccounts - In the implementation block
@property (nonatomic,readonly) MPCPlaybackAccount * activeAccount; 
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)_userIdentityStoreChangedNotification:(id)arg1 ;
-(id)accountForDSID:(id)arg1 ;
-(void)_buildAccountFromLocalIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateAccounts;
-(NSArray *)accounts;
-(BOOL)hasLoadedInitialAccounts;
-(void)_enumerateIdentitiesWithCompletion:(/*^block*/id)arg1 ;
-(void)_buildAccountFromDelegatedIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPCPlaybackAccount *)activeAccount;
-(id)accountForHashedDSID:(id)arg1 ;
-(void)_subscriptionStatusChangedNotification:(id)arg1 ;
-(id)accountForUserIdentity:(id)arg1 ;
@end

