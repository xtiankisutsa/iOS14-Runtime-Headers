/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol WFWidgetConfigurationCardHeaderViewDelegate;
@class UILabel, UIStackView, UIButton;

@interface WFWidgetConfigurationCardHeaderView : UIView {

	id<WFWidgetConfigurationCardHeaderViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIStackView* _labelsStackView;
	UIButton* _closeButton;

}

@property (nonatomic,retain) UIStackView * labelsStackView;                                                //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                                                     //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic,__weak) id<WFWidgetConfigurationCardHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(void)close;
-(UILabel *)titleLabel;
-(UIStackView *)labelsStackView;
-(void)setLabelsStackView:(UIStackView *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(UIButton *)closeButton;
-(void)setDelegate:(id<WFWidgetConfigurationCardHeaderViewDelegate>)arg1 ;
-(id<WFWidgetConfigurationCardHeaderViewDelegate>)delegate;
-(id)initWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
@end

