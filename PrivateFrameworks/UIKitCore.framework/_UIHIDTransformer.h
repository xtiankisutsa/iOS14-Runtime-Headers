/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIHIDContext, NSMutableArray, NSMutableDictionary;

@interface _UIHIDTransformer : NSObject {

	_UIHIDContext* _hidContext;
	NSMutableArray* _hidEvents;
	NSMutableDictionary* _hidContextByContextId;
	unsigned _contextId;
	IOHIDEventRef _hidEvent;
	CGSize _canvasSize;
	CGAffineTransform _eventTransform;

}

@property (assign,nonatomic) CGSize canvasSize;               //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) unsigned contextId;              //@synthesize contextId=_contextId - In the implementation block
-(void)addOutputHIDEvent:(id)arg1 ;
-(void)setCanvasSize:(CGSize)arg1 ;
-(id)drainOutputHIDEvents;
-(unsigned)contextId;
-(id)handleHIDEvent:(IOHIDEventRef)arg1 ;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(id)_inputEventsForHIDEvent:(IOHIDEventRef)arg1 ;
-(CGSize)canvasSize;
-(void)setContextId:(unsigned)arg1 ;
@end

