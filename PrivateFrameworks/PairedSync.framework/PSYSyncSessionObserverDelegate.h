/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSYSyncSessionObserverDelegate <NSObject>
@optional
-(void)supportsMigrationSync;

@required
-(void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
-(void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
-(void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;

@end

