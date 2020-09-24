/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderJob.h>

@interface NUVideoPlaybackFrameJob : NURenderJob
-(id)initWithRequest:(id)arg1 ;
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(id)renderer:(out id*)arg1 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(id)scalePolicy;
-(id)newRenderPipelineStateForEvaluationMode:(long long)arg1 ;
-(BOOL)wantsOutputVideoFrame;
-(id)initWithVideoFrameRequest:(id)arg1 ;
-(id)frameRequest;
@end
