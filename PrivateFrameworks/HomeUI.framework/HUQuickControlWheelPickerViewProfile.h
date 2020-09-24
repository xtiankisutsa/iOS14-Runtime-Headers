/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@class UIColor;

@interface HUQuickControlWheelPickerViewProfile : HUQuickControlViewProfile {

	BOOL _sizeToFitTextWidth;
	BOOL _uppercaseRowTitles;
	BOOL _showOffState;
	double _borderWidth;
	UIColor* _borderColor;
	double _cornerRadius;
	double _selectedRowBorderWidth;
	double _selectedRowCornerRadius;
	unsigned long long _style;

}

@property (assign,nonatomic) double borderWidth;                          //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                       //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL sizeToFitTextWidth;                     //@synthesize sizeToFitTextWidth=_sizeToFitTextWidth - In the implementation block
@property (assign,nonatomic) BOOL uppercaseRowTitles;                     //@synthesize uppercaseRowTitles=_uppercaseRowTitles - In the implementation block
@property (assign,nonatomic) double selectedRowBorderWidth;               //@synthesize selectedRowBorderWidth=_selectedRowBorderWidth - In the implementation block
@property (assign,nonatomic) double selectedRowCornerRadius;              //@synthesize selectedRowCornerRadius=_selectedRowCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL showOffState;                           //@synthesize showOffState=_showOffState - In the implementation block
@property (assign,nonatomic) unsigned long long style;                    //@synthesize style=_style - In the implementation block
-(double)cornerRadius;
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)selectedRowBorderWidth;
-(double)selectedRowCornerRadius;
-(BOOL)sizeToFitTextWidth;
-(BOOL)showOffState;
-(BOOL)uppercaseRowTitles;
-(unsigned long long)style;
-(void)setCornerRadius:(double)arg1 ;
-(UIColor *)borderColor;
-(id)init;
-(void)setBorderWidth:(double)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setShowOffState:(BOOL)arg1 ;
-(void)_setDefaultStyleProperties;
-(void)_setMultiStateStyleProperties;
-(void)setSizeToFitTextWidth:(BOOL)arg1 ;
-(void)setUppercaseRowTitles:(BOOL)arg1 ;
-(void)setSelectedRowBorderWidth:(double)arg1 ;
-(void)setSelectedRowCornerRadius:(double)arg1 ;
@end
