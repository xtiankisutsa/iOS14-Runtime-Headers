/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureVisionDataOutputInternal : NSObject {

	AVCaptureDataOutputDelegateCallbackHelper* delegateCallbackHelper;
	AVWeakReference* weakReference;
	SCD_Struct_AV0 minFrameDuration;
	SCD_Struct_AV0 minBurstFrameDuration;
	SCD_Struct_AV0 maxBurstDuration;
	unsigned long long gaussianPyramidOctavesCount;
	float gaussianPyramidBaseOctaveDownscalingFactor;
	unsigned long long maxKeypointsCount;
	BOOL featureBinningEnabled;
	BOOL featureOrientationAssignmentEnabled;
	float keypointDetectionThreshold;

}
-(void)dealloc;
-(id)init;
@end

