/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, NSString, NSUUID, UILabel;

@interface AVTStickerRecentsStickerCollectionViewCell : UICollectionViewCell {

	BOOL _showPrereleaseSticker;
	UIImageView* _imageView;
	NSString* _title;
	NSUUID* _displaySessionUUID;
	UILabel* _prereleaseLabel;

}

@property (nonatomic,readonly) UILabel * prereleaseLabel;              //@synthesize prereleaseLabel=_prereleaseLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;              //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (assign,nonatomic) BOOL showPrereleaseSticker;               //@synthesize showPrereleaseSticker=_showPrereleaseSticker - In the implementation block
+(id)identifier;
-(BOOL)showPrereleaseSticker;
-(void)setShowPrereleaseSticker:(BOOL)arg1 ;
-(void)setupPrereleaseLabelIfNeeded;
-(UILabel *)prereleaseLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)updateWithImage:(id)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(CGRect)contentBounds;
-(void)updateWithDefaultImage;
-(UIImageView *)imageView;
-(void)setTitle:(NSString *)arg1 ;
@end

