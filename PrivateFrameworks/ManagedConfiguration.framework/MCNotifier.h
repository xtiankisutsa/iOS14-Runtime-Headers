/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCNotifier : NSObject
-(void)sendRestrictionChangedNotification;
-(void)sendPasscodeChangedNotification;
-(void)sendPasscodePolicyChangedNotification;
-(void)sendKeyboardSettingsChangedNotification;
-(void)sendUserNotificationsSettingsChangedNotification;
-(void)sendHomeScreenLayoutChangedNotification;
-(void)sendNewsSettingsChangedNotification;
-(void)sendProfileListChangedNotification;
-(void)sendSettingsChangedNotification;
-(void)sendManagingOrgInfoChangedNotification;
-(void)sendEffectiveSettingsChangedNotificationWithPID:(int)arg1 ;
-(void)sendClientTruthChangedNotification;
-(void)sendAppWhitelistChangedNotification;
-(void)sendCloudConfigurationDetailsChangedNotification;
-(void)sendWebContentFilterChangedNotification;
-(void)sendWebContentFilterUIActiveChangedNotification;
-(void)sendWebContentFilterTypeChangedNotification;
-(void)sendAirPlayPreferencesChangedNotification;
-(void)sendUnlockScreenTypeDidChangeNotification;
-(void)sendManagedBooksChangedNotification;
-(void)sendManagedAppsChangedNotification;
-(void)sendSafariCookiePolicyChangedNotification;
-(void)sendAllowPasscodeModificationChangedNotification;
-(void)sendRemovedSystemAppsChangedNotification;
-(void)sendDiagnosticsCollectedNotification;
-(void)sendDependencyChangedNotification;
-(void)sendTriggerRollKeybagsNotification;
-(void)sendActivationLockBypassCodeWasStoredNotification;
@end

