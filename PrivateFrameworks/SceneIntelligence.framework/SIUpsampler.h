/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState;
@interface SIUpsampler : NSObject {

	id<MTLComputePipelineState> _pipelineState;

}
-(id)initWithFactory:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 input:(id)arg2 output:(id)arg3 ;
@end
