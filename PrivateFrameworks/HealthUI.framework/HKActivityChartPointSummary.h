/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinateInfo.h>

@class NSString;

@interface HKActivityChartPointSummary : NSObject <HKGraphSeriesBlockCoordinateInfo> {

	NSString* _formattedDateString;
	NSString* _workoutSummaryString;
	NSString* _energyBurnSummaryString;
	NSString* _activityGoalSummaryString;

}

@property (nonatomic,readonly) NSString * formattedDateString;                    //@synthesize formattedDateString=_formattedDateString - In the implementation block
@property (nonatomic,readonly) NSString * workoutSummaryString;                   //@synthesize workoutSummaryString=_workoutSummaryString - In the implementation block
@property (nonatomic,readonly) NSString * energyBurnSummaryString;                //@synthesize energyBurnSummaryString=_energyBurnSummaryString - In the implementation block
@property (nonatomic,readonly) NSString * activityGoalSummaryString;              //@synthesize activityGoalSummaryString=_activityGoalSummaryString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dateFormatter;
+(id)_energyFormatter;
+(id)_workoutDurationFormatter;
+(id)_distanceFormatter;
-(NSString *)formattedDateString;
-(NSString *)description;
-(void)_createWorkoutSummaryWithWorkouts:(id)arg1 ;
-(id)initWithActivityCache:(id)arg1 workouts:(id)arg2 ;
-(NSString *)workoutSummaryString;
-(NSString *)energyBurnSummaryString;
-(NSString *)activityGoalSummaryString;
@end

