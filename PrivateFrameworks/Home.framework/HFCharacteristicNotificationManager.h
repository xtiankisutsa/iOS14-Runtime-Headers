/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class NSDate, NSMutableSet, HMHome, NSString;

@interface HFCharacteristicNotificationManager : NSObject <HFHomeManagerObserver, HFHomeObserver> {

	NSDate* _lastNotificationsEnableRequestDate;
	NSMutableSet* _notificationsEnabledReasons;
	HMHome* _notificationsEnabledHome;

}

@property (nonatomic,readonly) NSMutableSet * notificationsEnabledReasons;              //@synthesize notificationsEnabledReasons=_notificationsEnabledReasons - In the implementation block
@property (nonatomic,retain) HMHome * notificationsEnabledHome;                         //@synthesize notificationsEnabledHome=_notificationsEnabledHome - In the implementation block
@property (nonatomic,retain) NSDate * lastNotificationsEnableRequestDate;               //@synthesize lastNotificationsEnableRequestDate=_lastNotificationsEnableRequestDate - In the implementation block
@property (nonatomic,readonly) BOOL notificationsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(id)init;
-(NSDate *)lastNotificationsEnableRequestDate;
-(BOOL)notificationsEnabled;
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1 ;
-(NSMutableSet *)notificationsEnabledReasons;
-(void)_updateNotificationsEnabled;
-(HMHome *)notificationsEnabledHome;
-(void)setNotificationsEnabledHome:(HMHome *)arg1 ;
-(void)setLastNotificationsEnableRequestDate:(NSDate *)arg1 ;
-(void)enableNotificationsForSelectedHomeWithReason:(id)arg1 ;
-(void)disableNotificationsForSelectedHomeWithReason:(id)arg1 ;
@end

