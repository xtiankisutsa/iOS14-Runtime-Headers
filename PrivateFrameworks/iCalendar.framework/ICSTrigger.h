/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
-(id)initWithDate:(id)arg1 ;
-(BOOL)isDurationBased;
-(void)setDate:(id)arg1 ;
-(void)setDuration:(id)arg1 ;
-(id)initWithDuration:(id)arg1 ;
-(void)fixAlarmTrigger;
-(id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2 ;
-(id)travelRelativeDuration;
@end

