/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DECDataProtectionMonitorDelegate;
#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
@interface _DECDataProtectionMonitor : NSObject {

	id<_DECDataProtectionMonitorDelegate> _delegate;
	long long _encryptedDataAvailability;
	BOOL _unlockedSinceBoot;
	long long _dataProtectionStatus;
	opaque_pthread_rwlock_t _rwlock;

}

@property (assign,nonatomic,__weak) id<_DECDataProtectionMonitorDelegate> delegate; 
@property (nonatomic,readonly) long long encryptedDataAvailability; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) long long dataProtectionStatus;                                   //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
+(id)_DECDataProtectionMonitorLockStateToString:(long long)arg1 ;
+(id)_DECDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1 ;
+(id)_DECDataProtectionMonitorDataProtectionStatus:(long long)arg1 ;
-(void)_registerForKeyBagNotifications;
-(BOOL)unlockedSinceBoot;
-(BOOL)dataProtectionEnabled;
-(void)handkeKeybagLockStatusChange:(long long)arg1 ;
-(void)dealloc;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(id)init;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(void)setDelegate:(id<_DECDataProtectionMonitorDelegate>)arg1 ;
-(id<_DECDataProtectionMonitorDelegate>)delegate;
-(long long)dataProtectionStatus;
-(long long)encryptedDataAvailability;
-(void)handleUnlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
@end

