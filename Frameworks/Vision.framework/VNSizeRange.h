/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNSizeRange : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _minimumDimension;
	unsigned long long _maximumDimension;
	unsigned long long _idealDimension;

}

@property (nonatomic,readonly) unsigned long long minimumDimension;              //@synthesize minimumDimension=_minimumDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumDimension;              //@synthesize maximumDimension=_maximumDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long idealDimension;                //@synthesize idealDimension=_idealDimension - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMinimumDimension:(unsigned long long)arg1 maximumDimension:(unsigned long long)arg2 idealDimension:(unsigned long long)arg3 ;
-(BOOL)isAllowedDimension:(unsigned long long)arg1 ;
-(unsigned long long)minimumDimension;
-(unsigned long long)maximumDimension;
-(unsigned long long)idealDimension;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

