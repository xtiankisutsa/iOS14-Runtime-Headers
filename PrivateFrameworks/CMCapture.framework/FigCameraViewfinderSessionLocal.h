/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCameraViewfinderSession.h>
#import <libobjc.A.dylib/FigCaptureSessionPreviewTapDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderStreamDelegate.h>

@protocol OS_dispatch_queue;
@class FigCameraViewfinderLocal, FigStateMachine, FigCaptureSessionProxy, FigCameraViewfinderStream, NSObject, NSString;

@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession <FigCaptureSessionPreviewTapDelegate, FigCameraViewfinderStreamDelegate> {

	FigCameraViewfinderLocal* _viewfinder;
	FigStateMachine* _stateMachine;
	BOOL _ended;
	FigCaptureSessionProxy* _captureSessionProxy;
	long long _identifier;
	FigCameraViewfinderStream* _previewStream;
	NSObject*<OS_dispatch_queue> _previewStreamQueue;
	BOOL _previewStreamClosed;
	int _previewStreamClosedErrorStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)identifier;
-(void)captureSessionPreviewTapDidOpen:(id)arg1 ;
-(void)closePreviewStream;
-(void)cameraViewfinderStream:(id)arg1 didCloseWithStatus:(int)arg2 ;
-(void)dealloc;
-(void)captureSessionPreviewTapDidClose:(id)arg1 ;
-(id)viewfinder;
-(void)_setupStateMachine;
-(void)_closePreviewStream;
-(void)_captureSessionDidCapturePhotoWithStatus:(int)arg1 thumbnailData:(id)arg2 timestamp:(SCD_Struct_BW8)arg3 ;
-(void)openPreviewStreamWithOptions:(id)arg1 ;
-(void)_captureSessionDidStop;
-(void)cameraViewfinderStreamDidOpen:(id)arg1 ;
-(void)captureSession:(id)arg1 previewTapDidOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)_initWithOwningViewfinder:(id)arg1 captureSessionProxy:(id)arg2 delegateStorage:(id)arg3 ;
@end

