/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKInspectableValueInRange, NSString, HKReferenceRangeView, UILabel;

@interface WDMedicalRecordReferenceRangeViewCell : WDMedicalRecordGroupableCell {

	HKInspectableValueInRange* _valueInRange;
	NSString* _subtitle;
	HKReferenceRangeView* _referenceRangeView;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) HKReferenceRangeView * referenceRangeView;              //@synthesize referenceRangeView=_referenceRangeView - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) HKInspectableValueInRange * valueInRange;               //@synthesize valueInRange=_valueInRange - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setReferenceRangeView:(HKReferenceRangeView *)arg1 ;
-(HKReferenceRangeView *)referenceRangeView;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setupSubviews;
-(void)setValueInRange:(HKInspectableValueInRange *)arg1 ;
-(HKInspectableValueInRange *)valueInRange;
@end

