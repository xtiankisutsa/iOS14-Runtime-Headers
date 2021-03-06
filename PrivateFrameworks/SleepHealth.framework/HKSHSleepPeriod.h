/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepHealth/SleepHealth-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval, NSArray;

@interface HKSHSleepPeriod : NSObject <NSSecureCoding, NSCopying> {

	NSDateInterval* _dateInterval;
	NSArray* _segments;

}

@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                         //@synthesize segments=_segments - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sleepPeriodWithDateInterval:(id)arg1 segments:(id)arg2 ;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDateInterval *)dateInterval;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)segments;
-(double)durationForCategory:(long long)arg1 overlappingDateInterval:(id)arg2 ;
@end

