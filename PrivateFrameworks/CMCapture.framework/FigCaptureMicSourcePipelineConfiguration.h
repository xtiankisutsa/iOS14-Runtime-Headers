/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, NSArray, BWZoomCommandHandler, NSString;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {

	FigCaptureSourceConfiguration* _micConfiguration;
	NSArray* _micConnectionConfigurations;
	FigCaptureSourceConfiguration* _cameraConfigurationForStereoAudioCapture;
	BWZoomCommandHandler* _zoomCommandHandlerForStereoAudioCapture;
	BOOL _flipStereoAudioCaptureChannels;
	NSString* _sessionPreset;
	BOOL _configuresAppAudioSession;
	BOOL _audioSourceNodeShouldCallEndInterruption;
	unsigned _clientVersionOfLinkedSDK;
	SCD_Struct_Fi73 _clientAuditToken;

}

@property (nonatomic,retain) FigCaptureSourceConfiguration * micConfiguration;                                      //@synthesize micConfiguration=_micConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * micConnectionConfigurations;                                                 //@synthesize micConnectionConfigurations=_micConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfigurationForStereoAudioCapture;              //@synthesize cameraConfigurationForStereoAudioCapture=_cameraConfigurationForStereoAudioCapture - In the implementation block
@property (nonatomic,retain) BWZoomCommandHandler * zoomCommandHandlerForStereoAudioCapture;                        //@synthesize zoomCommandHandlerForStereoAudioCapture=_zoomCommandHandlerForStereoAudioCapture - In the implementation block
@property (assign,nonatomic) BOOL flipStereoAudioCaptureChannels;                                                   //@synthesize flipStereoAudioCaptureChannels=_flipStereoAudioCaptureChannels - In the implementation block
@property (nonatomic,retain) NSString * sessionPreset;                                                              //@synthesize sessionPreset=_sessionPreset - In the implementation block
@property (assign,nonatomic) BOOL configuresAppAudioSession;                                                        //@synthesize configuresAppAudioSession=_configuresAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL audioSourceNodeShouldCallEndInterruption;                                         //@synthesize audioSourceNodeShouldCallEndInterruption=_audioSourceNodeShouldCallEndInterruption - In the implementation block
@property (assign,nonatomic) unsigned clientVersionOfLinkedSDK;                                                     //@synthesize clientVersionOfLinkedSDK=_clientVersionOfLinkedSDK - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi73 clientAuditToken;                                                      //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
-(unsigned)clientVersionOfLinkedSDK;
-(void)setFlipStereoAudioCaptureChannels:(BOOL)arg1 ;
-(void)setCameraConfigurationForStereoAudioCapture:(FigCaptureSourceConfiguration *)arg1 ;
-(void)setSessionPreset:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)sessionPreset;
-(BOOL)configuresAppAudioSession;
-(BWZoomCommandHandler *)zoomCommandHandlerForStereoAudioCapture;
-(void)setAudioSourceNodeShouldCallEndInterruption:(BOOL)arg1 ;
-(void)setConfiguresAppAudioSession:(BOOL)arg1 ;
-(SCD_Struct_Fi73)clientAuditToken;
-(BOOL)audioSourceNodeShouldCallEndInterruption;
-(NSArray *)micConnectionConfigurations;
-(void)setZoomCommandHandlerForStereoAudioCapture:(BWZoomCommandHandler *)arg1 ;
-(FigCaptureSourceConfiguration *)micConfiguration;
-(void)setClientAuditToken:(SCD_Struct_Fi73)arg1 ;
-(FigCaptureSourceConfiguration *)cameraConfigurationForStereoAudioCapture;
-(id)micConnectionConfigurationsForMicSourcePosition:(int)arg1 ;
-(BOOL)flipStereoAudioCaptureChannels;
-(void)setMicConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(void)setMicConnectionConfigurations:(NSArray *)arg1 ;
-(void)setClientVersionOfLinkedSDK:(unsigned)arg1 ;
@end
