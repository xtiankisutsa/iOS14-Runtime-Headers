/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface ETPaletteCircleView : UIView {

	UIView* _selectionMarker;
	BOOL _selected;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UIView * selectionMarker; 
+(double)paletteCircleDiameter;
+(double)selectionMarkerDiameter;
+(id)selectionMarkerColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIView *)selectionMarker;
-(void)_updateSelectionMarkerFrame;
@end
