/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EARClientSilenceFeatures : NSObject {

	double _silenceFramesCountMs;
	double _silenceProbability;
	double _silenceDurationMs;
	double _silencePosterior;
	double _processedAudioMs;

}

@property (assign,nonatomic) double silenceFramesCountMs;              //@synthesize silenceFramesCountMs=_silenceFramesCountMs - In the implementation block
@property (assign,nonatomic) double silenceProbability;                //@synthesize silenceProbability=_silenceProbability - In the implementation block
@property (assign,nonatomic) double silenceDurationMs;                 //@synthesize silenceDurationMs=_silenceDurationMs - In the implementation block
@property (assign,nonatomic) double silencePosterior;                  //@synthesize silencePosterior=_silencePosterior - In the implementation block
@property (assign,nonatomic) double processedAudioMs;                  //@synthesize processedAudioMs=_processedAudioMs - In the implementation block
-(id)dictionary;
-(double)silencePosterior;
-(void)setSilencePosterior:(double)arg1 ;
-(double)processedAudioMs;
-(double)silenceFramesCountMs;
-(double)silenceDurationMs;
-(double)silenceProbability;
-(void)setSilenceProbability:(double)arg1 ;
-(id)initWithSilenceFramesCountMs:(double)arg1 silenceProbability:(double)arg2 silenceDurationMs:(double)arg3 silencePosterior:(double)arg4 processedAudioMs:(double)arg5 ;
-(void)setSilenceFramesCountMs:(double)arg1 ;
-(void)setSilenceDurationMs:(double)arg1 ;
-(void)setProcessedAudioMs:(double)arg1 ;
@end
