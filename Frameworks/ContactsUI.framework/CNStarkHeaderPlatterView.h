/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UILabel, UIImageView;

@interface CNStarkHeaderPlatterView : UIView {

	NSString* _labelText;
	UIImage* _accessoryImage;
	UILabel* _label;
	UIImageView* _accessory;

}

@property (nonatomic,retain) UILabel * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * accessory;               //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,copy) NSString * labelText;                    //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,retain) UIImage * accessoryImage;              //@synthesize accessoryImage=_accessoryImage - In the implementation block
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(NSString *)labelText;
-(UIImageView *)accessory;
-(void)setLabelText:(NSString *)arg1 ;
-(id)initWithLabelText:(id)arg1 accessoryImage:(id)arg2 ;
-(void)_updateForFocusedState:(BOOL)arg1 ;
-(UIImage *)accessoryImage;
-(void)setAccessoryImage:(UIImage *)arg1 ;
-(void)setAccessory:(UIImageView *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

