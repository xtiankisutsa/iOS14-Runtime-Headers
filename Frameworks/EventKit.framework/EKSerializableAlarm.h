/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKSerializableObject.h>

@class NSDate;

@interface EKSerializableAlarm : EKSerializableObject {

	BOOL _isAbsolute;
	double _relativeOffset;
	NSDate* _absoluteDate;

}

@property (assign,nonatomic) double relativeOffset;              //@synthesize relativeOffset=_relativeOffset - In the implementation block
@property (nonatomic,copy) NSDate * absoluteDate;                //@synthesize absoluteDate=_absoluteDate - In the implementation block
@property (assign,nonatomic) BOOL isAbsolute;                    //@synthesize isAbsolute=_isAbsolute - In the implementation block
+(id)classesForKey;
-(NSDate *)absoluteDate;
-(void)setAbsoluteDate:(NSDate *)arg1 ;
-(double)relativeOffset;
-(void)setRelativeOffset:(double)arg1 ;
-(BOOL)isAbsolute;
-(id)createAlarm:(id*)arg1 ;
-(id)initWithAlarm:(id)arg1 ;
-(void)setIsAbsolute:(BOOL)arg1 ;
@end

