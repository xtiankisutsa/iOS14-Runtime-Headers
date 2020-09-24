/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UIPreviewPresentationEffectView : UIView {

	BOOL _shouldRasterizeForTransition;
	UIColor* _shadowColor;

}

@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double shadowAlpha; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (nonatomic,copy) UIColor * shadowColor;                            //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(void)setShadowAlpha:(double)arg1 ;
-(CGSize)shadowOffset;
-(double)shadowAlpha;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIColor *)shadowColor;
-(double)cornerRadius;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(BOOL)shouldRasterizeForTransition;
@end
