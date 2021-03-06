/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject {

	opaque_pthread_mutex_t ringMutex;
	CMMotionManager* motionManager;
	BOOL manageFusedMotion;
	BOOL manageAccel;
	BOOL manageGravity;
	int accelRingIndex;
	float accelRingX[256];
	float accelRingY[256];
	float accelRingZ[256];
	double accelRingTime[256];
	int fusedRingIndex;
	double fusedRingTime[256];
	BOOL fusedRingDoingBiasEstimation[256];
	SCD_Struct_Fi123 fusedRingAccel[256];
	SCD_Struct_BW87 fusedRingQuaternion[256];
	SCD_Struct_Fi123 fusedRingPosition[256];
	OpaqueFigSemaphoreRef dataSemaphore;
	double latestMotionDataTime;
	double latestGravityDataTime;
	BOOL copyingAllData;
	double dLatestFusedMotionCopied;
	double dLatestTimestamp;
	double dGyroUpdateInterval;
	double timestampLatency;
	double dStartOfLogging;
	BOOL gettingAttitudeChange;
	SCD_Struct_BW87 previousQuaternion;
	SCD_Struct_BW87 currentQuaternion;
	BOOL computingPosition;
	SCD_Struct_Fi135 position;
	SCD_Struct_Fi135 velocity;

}
-(id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int*)arg4 ;
-(void)didUpdateAcceleration:(SCD_Struct_Fi123)arg1 time:(double)arg2 ;
-(void)didUpdateVelocityWithAcceleration:(SCD_Struct_Fi123*)arg1 forTimeStamp:(double)arg2 ;
-(int)getLatestMotionDataTime:(double*)arg1 ;
-(void)getCurrentDeltaQuaternion:(SCD_Struct_BW87*)arg1 ;
-(BOOL)managingFusedMotion;
-(void)didUpdateFusedMotionWithDeviceMotion:(SCD_Struct_Fi136)arg1 time:(double)arg2 ifsync:(BOOL)arg3 ;
-(id)copyNewFusedMotionData;
-(id)copyAllFusedMotionData;
-(int)updateCurrentQuaternionForTimeStamp:(double)arg1 ;
-(id)initWithAccelerometer:(BOOL)arg1 gravityZ:(BOOL)arg2 fusedMotion:(BOOL)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5 motionCallbackThreadPriority:(id)arg6 ;
-(void)dealloc;
-(void)updateGyroInterval:(float)arg1 ;
-(int)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(BOOL)managingAccel;
-(void)getCurrentAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3 ;
-(void)getPositionX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(BOOL)isCopyingAllData;
-(int)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2 ;
-(id)init;
-(void)didUpdatePositionWithAcceleration:(SCD_Struct_Fi123*)arg1 forTimeStamp:(double)arg2 ;
-(int)getFusedVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(BOOL)managingGravity;
-(void)didUpdateGravity:(SCD_Struct_Fi123)arg1 time:(double)arg2 ;
-(void)updateDeviceCallback:(BOOL)arg1 fusedMotionUpdateInterval:(float)arg2 ;
-(void)getCurrentDeltaAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3 ;
-(void)didUpdatePositionWithTimeStamp:(double)arg1 ;
-(void)getCurrentQuaternion:(SCD_Struct_BW87*)arg1 ;
-(int)getGravityX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
@end

