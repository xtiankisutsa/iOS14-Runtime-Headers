/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKMinMaxCoordinate.h>

@class NSArray;

@interface HKStackedBarCoordinate : HKMinMaxCoordinate {

	NSArray* _stackPoints;

}

@property (nonatomic,copy) NSArray * stackPoints;              //@synthesize stackPoints=_stackPoints - In the implementation block
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(NSArray *)stackPoints;
-(id)initWithStackPoints:(id)arg1 userInfo:(id)arg2 ;
-(void)setStackPoints:(NSArray *)arg1 ;
@end

