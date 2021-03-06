/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDBezierNode : NSObject {

	CGPoint mIn;
	CGPoint mNode;
	CGPoint mOut;
	int mReflectedState;
	BOOL mSelected;
	int mType;

}

@property (assign,nonatomic) CGPoint nodePoint; 
@property (assign,nonatomic) CGPoint inControlPoint; 
@property (assign,nonatomic) CGPoint outControlPoint; 
@property (assign,nonatomic) int reflectedState; 
@property (nonatomic,readonly) BOOL isCollapsed; 
@property (assign,nonatomic) int type; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
+(id)bezierNodeWithPoint:(CGPoint)arg1 ;
+(id)bezierNodeWithPoint:(CGPoint)arg1 inControlPoint:(CGPoint)arg2 outControlPoint:(CGPoint)arg3 ;
-(BOOL)isCollapsed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)typeString;
-(void)setSelected:(BOOL)arg1 ;
-(void)setNode:(CGPoint)arg1 ;
-(int)type;
-(BOOL)isSelected;
-(void)setType:(int)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)collapse;
-(id)description;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)setNodePoint:(CGPoint)arg1 ;
-(void)setInControlPoint:(CGPoint)arg1 ;
-(void)setOutControlPoint:(CGPoint)arg1 ;
-(void)setReflectedState:(int)arg1 ;
-(CGPoint)nodePoint;
-(CGPoint)inControlPoint;
-(CGPoint)outControlPoint;
-(int)reflectedState;
-(id)reflectedStateString;
-(void)balanceControlPoints;
-(void)setInControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3 ;
-(void)setOutControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3 ;
-(void)setInControlPointFromReflection:(CGPoint)arg1 constrain:(BOOL)arg2 ;
-(void)updateReflectedState;
-(void)swapControlPoints;
-(BOOL)underPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
@end

