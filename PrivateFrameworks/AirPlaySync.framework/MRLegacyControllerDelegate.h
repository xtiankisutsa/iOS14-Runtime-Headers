/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySync.framework/AirPlaySync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRLegacyControllerDelegate <NSObject>
@optional
-(void)legacyControllerConnectionDidDisconnect:(id)arg1 withError:(id)arg2;
-(void)legacyControllerConnectionDidConnect:(id)arg1;

@required
-(void)legacyController:(id)arg1 volumeDidChange:(float)arg2 forOutputDevice:(id)arg3;
-(void)legacyController:(id)arg1 masterVolumeDidChange:(float)arg2;
-(void)legacyController:(id)arg1 volumeControlAvailabilityDidChange:(BOOL)arg2 forOutputDevice:(id)arg3;

@end
