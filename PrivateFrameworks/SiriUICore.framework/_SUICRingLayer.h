/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class UIColor;

@interface _SUICRingLayer : CAShapeLayer {

	double _customLineWidth;

}

@property (nonatomic,copy) UIColor * ringColor; 
@property (assign,nonatomic) double customLineWidth;              //@synthesize customLineWidth=_customLineWidth - In the implementation block
-(void)setRingColor:(UIColor *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIColor *)ringColor;
-(id)init;
-(void)setCustomLineWidth:(double)arg1 ;
-(double)customLineWidth;
@end

