/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UIWebDragDotView : UIView {

	UIColor* m_selectionBarColor;
	long long m_orientation;
	CGRect m_stickFrame;
	CGRect m_dotFrame;

}
-(void)setEdge:(CGRect)arg1 ;
-(BOOL)isPointedRight;
-(BOOL)isPointedLeft;
-(BOOL)isVertical;
-(void)dealloc;
-(id)initWithEdge:(CGRect)arg1 container:(id)arg2 orientation:(long long)arg3 ;
-(CGRect)stickFrameForEdge:(CGRect)arg1 withOverlap:(double)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isPointedUp;
-(BOOL)isPointedDown;
@end

