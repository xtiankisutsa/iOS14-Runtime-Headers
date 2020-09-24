/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSMapTable, NSObject;

@interface PipelineStatePromise : NSObject {

	NSMapTable* pipelineStates;
	NSMapTable* errors;
	NSObject*<OS_dispatch_group> group;
	AB initialization_completed;

}
-(BOOL)timesOutWaitingForPipelineStates:(double)arg1 ;
-(id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3 ;
-(BOOL)groupWasSuccessful;
-(id)pipelineStateForFunction:(id)arg1 ;
-(id)errorForFunction:(id)arg1 ;
@end
