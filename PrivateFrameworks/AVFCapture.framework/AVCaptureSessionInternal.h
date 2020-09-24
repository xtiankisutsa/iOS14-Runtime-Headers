/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSString, FigCaptureSessionConfiguration, NSMutableArray, NSHashTable, AVCaptureSessionConfiguration, NSError, AVRunLoopCondition, NSObject;

@interface AVCaptureSessionInternal : NSObject {

	AVWeakReference* weakReference;
	NSString* sessionPreset;
	int beginConfigRefCount;
	FigCaptureSessionConfiguration* sessionConfig;
	OpaqueFigCaptureSessionRef figCaptureSession;
	BOOL figCaptureSessionRunning;
	BOOL figCaptureSessionStarted;
	NSMutableArray* inputs;
	NSMutableArray* outputs;
	NSHashTable* videoPreviewLayers;
	NSMutableArray* connections;
	NSMutableArray* committedAVCaptureSessionConfigurations;
	AVCaptureSessionConfiguration* liveAVCaptureSessionConfiguration;
	NSError* stopError;
	BOOL running;
	BOOL interrupted;
	BOOL usesApplicationAudioSession;
	BOOL automaticallyConfiguresApplicationAudioSession;
	BOOL automaticallyConfiguresCaptureDeviceForWideColor;
	AVRunLoopCondition* runLoopCondition;
	BOOL waitingForFigCaptureSessionToStart;
	BOOL waitingForFigCaptureSessionToStop;
	BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
	OpaqueCMClockRef masterClock;
	BOOL notifiesOnMainThread;
	NSMutableArray* devicesToResetVideoZoomFactorAndMinMaxFrameDurations;
	BOOL authorizedToUseCameraInMultipleForegroundAppLayout;
	BOOL xctestAuthorizedToStealDevice;
	NSObject*<OS_dispatch_semaphore> serverConnectionDiedSemaphore;
	id serverConnectionDiedNotificationToken;
	ct_green_tea_logger_sRef greenTeaLogger;
	BOOL videoInputDeviceUsed;

}
@end
