/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDTrackerManipulator
@optional
-(void)operationWillEnd;
-(void)willTakeControl;
-(void)didRelinquishControl;
-(void)trackerManipulatorDidTakeControl:(id)arg1;

@required
-(id)tracker;
-(BOOL)allowTrackerManipulatorToTakeControl:(id)arg1;
-(BOOL)readyToEndOperation;
-(void)operationDidEnd;

@end
