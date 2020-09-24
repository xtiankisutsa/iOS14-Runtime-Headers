/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSPowerMonitorObserver.h>

@protocol BSRelativeDateTimerDelegate;
@class NSCalendar, NSTimer, NSDate, NSString;

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver> {

	NSCalendar* _gregorian;
	NSTimer* _timer;
	NSDate* _date;
	unsigned long long _currResolution;
	long long _currValue;
	id<BSRelativeDateTimerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BSRelativeDateTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setDate:(id)arg1 ;
-(void)invalidate;
-(id)date;
-(void)dealloc;
-(void)_fireForLocaleEvent:(id)arg1 ;
-(void)fireAndSchedule;
-(void)_fireAndUpdateTimerIfNecessary;
-(double)nextFireInterval;
-(id)init;
-(void)setDelegate:(id<BSRelativeDateTimerDelegate>)arg1 ;
-(id<BSRelativeDateTimerDelegate>)delegate;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1 ;
@end
