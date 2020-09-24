/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DASActivitySchedulerIntrospecting <NSObject>
@required
-(id)statistics;
-(id)policies;
-(void)pauseWithParameters:(id)arg1;
-(id)submittedActivities;
-(id)clasStatus;
-(id)allBudgets;
-(double)remainingBalanceForBudgetWithName:(id)arg1;
-(id)blockingPoliciesWithParameters:(id)arg1;
-(id)delayedRunningActivities;
-(id)runningGroupActivities;
-(BOOL)deferActivities:(id)arg1;
-(id)runningActivities;
-(void)forceRunActivities:(id)arg1;
-(id)currentPredictions;
-(void)enterTestModeWithParameters:(id)arg1;
-(void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;
-(id)scoresForActivityWithName:(id)arg1;
-(id)activityRunStatistics;
-(void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;

@end
