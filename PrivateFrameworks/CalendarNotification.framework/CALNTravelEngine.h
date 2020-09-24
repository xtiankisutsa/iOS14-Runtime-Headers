/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CALNTravelEngine <NSObject>
@property (assign,nonatomic,__weak) id<CALNTravelEngineDelegate> delegate; 
@required
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
-(void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg1;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
-(id<CALNTravelEngineDelegate>)delegate;

@end
