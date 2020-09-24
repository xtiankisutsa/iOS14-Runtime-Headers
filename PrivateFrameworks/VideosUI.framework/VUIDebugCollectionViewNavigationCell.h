/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class VUITextLayout, VUILabel, UIImageView, VUISeparatorView;

@interface VUIDebugCollectionViewNavigationCell : VUIListCollectionViewCell {

	VUITextLayout* _titleLayout;
	VUILabel* _titleLabel;
	UIImageView* _accessoryView;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUITextLayout * titleLayout;                   //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * accessoryView;                   //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
-(UIImageView *)accessoryView;
-(VUISeparatorView *)separatorView;
-(VUILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAccessoryView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(void)configureWithTitle:(id)arg1 ;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
@end
