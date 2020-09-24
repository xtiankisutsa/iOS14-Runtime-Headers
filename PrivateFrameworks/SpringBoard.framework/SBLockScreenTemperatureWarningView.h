/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockOverlayView.h>

@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView {

	UIImageView* _warningIconView;

}
-(id)_titleFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_subtitleFont;
-(void)layoutSubviews;
-(double)_titleBaseline;
-(double)_subtitleBaseline;
-(double)_iconYPosition;
@end
