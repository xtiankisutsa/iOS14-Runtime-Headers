/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HKPersistentTimer : NSObject {

	NSString* _fullTimerKey;

}

@property (nonatomic,retain) NSString * fullTimerKey;              //@synthesize fullTimerKey=_fullTimerKey - In the implementation block
+(id)_prefixedKeyWithTimerKey:(id)arg1 ;
+(id)timerWithKey:(id)arg1 ;
-(void)clear;
-(id)timerValue;
-(NSString *)fullTimerKey;
-(unsigned long long)elapsedSeconds;
-(void)start;
-(void)setFullTimerKey:(NSString *)arg1 ;
-(unsigned long long)elapsedNanoseconds;
@end

