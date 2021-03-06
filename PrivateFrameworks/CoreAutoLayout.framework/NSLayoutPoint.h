/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject <NSCopying, NSCoding> {

	NSLayoutXAxisAnchor* _xAxisAnchor;
	NSLayoutYAxisAnchor* _yAxisAnchor;

}

@property (copy,readonly) NSLayoutXAxisAnchor * xAxisAnchor;              //@synthesize xAxisAnchor=_xAxisAnchor - In the implementation block
@property (copy,readonly) NSLayoutYAxisAnchor * yAxisAnchor;              //@synthesize yAxisAnchor=_yAxisAnchor - In the implementation block
+(id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2 ;
+(id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLayoutXAxisAnchor *)xAxisAnchor;
-(NSLayoutYAxisAnchor *)yAxisAnchor;
-(id)ruleEqualToLayoutPoint:(id)arg1 ;
-(CGPoint)valueInItem:(id)arg1 ;
-(void)dealloc;
-(id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2 ;
-(id)constraintsEqualToLayoutPoint:(id)arg1 ;
-(id)constraintsEqualToPoint:(id)arg1 ;
-(id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2 ;
-(id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2 ;
-(id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

