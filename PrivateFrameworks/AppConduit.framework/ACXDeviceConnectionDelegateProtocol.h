/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACXDeviceConnectionDelegateProtocol <NSObject>
@required
-(void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
-(void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)updatedInstallStateForApplicationsWithInfo:(id)arg1;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
-(void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;

@end
