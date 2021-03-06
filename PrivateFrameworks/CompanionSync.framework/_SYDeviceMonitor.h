/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSUUID, NSObject;

@interface _SYDeviceMonitor : NSObject {

	NSMutableSet* _devices;
	NSUUID* _currentTargetDeviceUUID;
	NSObject*<OS_dispatch_queue> _syncQ;

}
+(id)sharedInstance;
-(id)allDevices;
-(void)_deviceDidBecomeActive:(id)arg1 ;
-(id)currentTargetableDevice;
-(id)deviceForNRDevice:(id)arg1 ;
-(void)_rebuildDeviceList;
-(id)deviceForPairingID:(id)arg1 ;
-(void)addNRDevice:(id)arg1 ;
-(id)init;
-(void)_deviceDidBecomeInactive:(id)arg1 ;
-(void)deviceBecameTargetable:(id)arg1 ;
-(void)removeNRDevice:(id)arg1 ;
-(void)_clearDeviceList;
@end

