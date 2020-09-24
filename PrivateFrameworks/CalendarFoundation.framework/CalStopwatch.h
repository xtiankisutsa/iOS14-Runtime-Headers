/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CalStopwatch : NSObject {

	BOOL _isRunning;
	unsigned long long _lastStartTime;
	unsigned long long _elapsedTime;
	BOOL _hasValidElapsedTime;
	NSMutableDictionary* _events;
	BOOL _usesSignalFlags;

}

@property (assign) BOOL usesSignalFlags;              //@synthesize usesSignalFlags=_usesSignalFlags - In the implementation block
-(BOOL)usesSignalFlags;
-(void)reset;
-(double)markEventSplit:(id)arg1 ;
-(void)start;
-(id)init;
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(void)markEventStart:(id)arg1 ;
-(unsigned long long)elapsedTimeInNanoseconds;
-(void)setUsesSignalFlags:(BOOL)arg1 ;
-(void)stop;
-(double)markEventEnd:(id)arg1 ;
-(id)description;
-(id)elapsedTimeAsString:(int)arg1 ;
@end
