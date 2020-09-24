/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFPrivacyReportGridView.h>

@protocol WBSPrivacyReportDataProvider;
@class SFPrivacyReportOverviewCellContentView;

@interface SFPrivacyReportOverviewView : SFPrivacyReportGridView {

	id<WBSPrivacyReportDataProvider> _reportDataProvider;
	SFPrivacyReportOverviewCellContentView* _trackersPreventedFromProfilingView;
	SFPrivacyReportOverviewCellContentView* _websitesContainingTrackersView;
	SFPrivacyReportOverviewCellContentView* _mostBlockedTrackerView;
	BOOL _usesInsetStyle;

}

@property (assign,nonatomic) BOOL usesInsetStyle;              //@synthesize usesInsetStyle=_usesInsetStyle - In the implementation block
-(BOOL)itemViewCanUseCompactWidth:(id)arg1 ;
-(double)interItemSpacing;
-(void)setUsesInsetStyle:(BOOL)arg1 ;
-(id)initWithPrivacyReportDataProvider:(id)arg1 ;
-(BOOL)usesInsetStyle;
@end
