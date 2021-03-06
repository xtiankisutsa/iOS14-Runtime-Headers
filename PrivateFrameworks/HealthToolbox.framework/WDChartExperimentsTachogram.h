/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <HealthUI/HKInteractiveChartViewController.h>

@class HKValueRange;

@interface WDChartExperimentsTachogram : HKInteractiveChartViewController {

	HKValueRange* _computedAxisRange;
	HKValueRange* _requestedVisibleRange;

}

@property (nonatomic,readonly) HKValueRange * computedAxisRange;                  //@synthesize computedAxisRange=_computedAxisRange - In the implementation block
@property (nonatomic,readonly) HKValueRange * requestedVisibleRange;              //@synthesize requestedVisibleRange=_requestedVisibleRange - In the implementation block
-(void)viewDidLoad;
-(HKValueRange *)requestedVisibleRange;
-(CGSize)extentOfData:(id)arg1 ;
-(id)tachogramSeriesWithData:(id)arg1 unit:(id)arg2 maximumY:(double)arg3 axis:(id)arg4 irregularBeatStyle:(BOOL)arg5 ;
-(id)initWithIrregularBeatData:(id)arg1 normalData:(id)arg2 visibleRange:(id)arg3 profile:(id)arg4 ;
-(HKValueRange *)computedAxisRange;
@end

