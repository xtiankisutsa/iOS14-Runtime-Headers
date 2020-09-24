/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel, NSLayoutConstraint;

@interface WDMedicalRecordSpacerTextCell : UITableViewCell {

	BOOL _useTallTopPadding;
	NSString* _title;
	UILabel* _titleLabel;
	NSLayoutConstraint* _topConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;              //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL useTallTopPadding;                          //@synthesize useTallTopPadding=_useTallTopPadding - In the implementation block
+(id)defaultReuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(NSString *)title;
-(void)_setupSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUseTallTopPadding:(BOOL)arg1 ;
-(BOOL)useTallTopPadding;
-(void)setTitle:(NSString *)arg1 ;
@end
