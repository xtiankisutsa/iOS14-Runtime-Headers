/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSPTimeAsleepTrackerStateMachineDelegate <HKSPStateMachineDelegate>
@required
-(void)scheduleSleepTracking;
-(void)unscheduleSleepTracking;
-(void)startSleepTrackingSessionWithReason:(unsigned long long)arg1;
-(void)endSleepTrackingSessionWithReason:(unsigned long long)arg1;
-(void)startActivityDetection;
-(void)stopActivityDetection;
-(void)startAppLaunchDetection;
-(void)stopAppLaunchDetection;
-(void)notifyForActivityDetectedOnDate:(id)arg1;

@end

