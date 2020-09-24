/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCProfileKeyDataCell : UITableViewCell {

	UILabel* _keyLabel;
	UILabel* _valueLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * keyLabel;                 //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;               //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupConstraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)keyLabel;
-(NSArray *)constraints;
-(UILabel *)valueLabel;
-(void)_setup;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)setKeyValue:(id)arg1 ;
@end
