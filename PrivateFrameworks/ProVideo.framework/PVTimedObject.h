/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSSecureCodingNSCopying;
@class NSObject;

@interface PVTimedObject : NSObject <NSSecureCoding, NSCopying> {

	NSObject*<NSSecureCoding>*<NSCopying> _object;
	SCD_Struct_PV22 _time;

}

@property (assign,nonatomic) SCD_Struct_PV22 time;                                      //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSObject*<NSSecureCoding>*<NSCopying> object;              //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)findTimedObjectInSortedArray:(id)arg1 atTime:(SCD_Struct_PV22)arg2 returnFirstObjectForTimeBeforeFirst:(BOOL)arg3 returnLastObjectForTimeAfterLast:(BOOL)arg4 ;
+(id)timedObjectWithTime:(SCD_Struct_PV22)arg1 object:(id)arg2 ;
+(id)timedObjectWithTime:(SCD_Struct_PV22)arg1 ;
-(SCD_Struct_PV22)time;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(void)setTime:(SCD_Struct_PV22)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSObject*<NSSecureCoding>*<NSCopying>)object;
-(id)description;
-(id)initWithTime:(SCD_Struct_PV22)arg1 ;
-(id)initWithTime:(SCD_Struct_PV22)arg1 object:(id)arg2 ;
@end
