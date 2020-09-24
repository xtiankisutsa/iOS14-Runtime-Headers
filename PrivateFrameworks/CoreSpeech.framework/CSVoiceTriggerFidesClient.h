/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSAudioCircularBuffer, NSString;

@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSAudioCircularBuffer* _audioBuffer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) CSAudioCircularBuffer * audioBuffer;              //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CSAudioCircularBuffer *)audioBuffer;
-(id)_medicalIDName;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(id)init;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
-(void)voiceTriggerGotSuperVector:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_lastTriggerDataWithResult:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(void)setAudioBuffer:(CSAudioCircularBuffer *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_logDESRecordWithType:(long long)arg1 result:(id)arg2 ;
-(id)_medicalIDAge;
@end
