/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NADeallocationTracerDelegate.h>

@class NADeallocationTracer, NSString;

@interface NADeallocationSentinel : NSObject <NADeallocationTracerDelegate> {

	id _targetObject;
	/*^block*/id _finalizer;
	NADeallocationTracer* _tracer;

}

@property (nonatomic,readonly) id targetObject;                                   //@synthesize targetObject=_targetObject - In the implementation block
@property (nonatomic,copy,readonly) id finalizer;                                 //@synthesize finalizer=_finalizer - In the implementation block
@property (nonatomic,__weak,readonly) NADeallocationTracer * tracer;              //@synthesize tracer=_tracer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NADeallocationTracer *)tracer;
-(id)initWithTargetObject:(id)arg1 finalizer:(/*^block*/id)arg2 ;
-(void)tracerIsDeallocating;
-(id)targetObject;
-(id)finalizer;
@end

