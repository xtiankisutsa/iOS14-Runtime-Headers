/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RelativeMotion/RelativeMotion-Structs.h>
@class RMRelativeMotionManager;

@interface RMMediaSession : NSObject {

	BOOL _sessionStartedWithTracking;
	RMRelativeMotionManager* _manager;

}

@property (nonatomic,retain) RMRelativeMotionManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (assign) BOOL sessionStartedWithTracking;                          //@synthesize sessionStartedWithTracking=_sessionStartedWithTracking - In the implementation block
+(BOOL)isAvailable;
-(id)_initWithOptions:(id)arg1 ;
-(BOOL)_start;
-(void)dealloc;
-(void)setManager:(RMRelativeMotionManager *)arg1 ;
-(RMRelativeMotionManager *)manager;
-(void)_stop;
-(long long)_currentAudioListenerPose:(SCD_Struct_RM2*)arg1 timestamp:(double*)arg2 ;
-(id)init;
-(BOOL)sessionStartedWithTracking;
-(void)setSessionStartedWithTracking:(BOOL)arg1 ;
-(void)_spatialAudioLockToDeviceChanged;
-(void)_resetTrackingForAllClients;
-(long long)_currentAudioListenerPose:(id*)arg1 ;
@end

