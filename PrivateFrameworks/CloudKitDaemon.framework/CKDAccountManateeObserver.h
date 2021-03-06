/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface CKDAccountManateeObserver : NSObject {

	NSObject*<OS_dispatch_queue> _statusQueue;
	long long _manateeAvailableForLoggedInAccount;
	NSError* _lastCDPError;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statusQueue;                                                                       //@synthesize statusQueue=_statusQueue - In the implementation block
@property (assign,setter=_lockedSetManateeAvailableForLoggedInAccount:,nonatomic) long long manateeAvailableForLoggedInAccount;              //@synthesize manateeAvailableForLoggedInAccount=_manateeAvailableForLoggedInAccount - In the implementation block
@property (nonatomic,copy) NSError * lastCDPError;                                                                                           //@synthesize lastCDPError=_lastCDPError - In the implementation block
+(id)sharedObserver;
-(void)setStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)statusQueue;
-(void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lockedSetManateeAvailableForLoggedInAccount:(long long)arg1 ;
-(void)_lockedFetchAndUpdateManateeAvailability;
-(void)dealloc;
-(id)init;
-(long long)manateeAvailableForLoggedInAccount;
-(BOOL)accountSupportsManatee:(id)arg1 ;
-(void)setLastCDPError:(NSError *)arg1 ;
-(void)handleUpdateNotificationWithAvailability:(id)arg1 ;
-(BOOL)isManateeAvailable:(id*)arg1 ;
-(long long)_fetchManateeAvailability:(id*)arg1 ;
-(NSError *)lastCDPError;
@end

