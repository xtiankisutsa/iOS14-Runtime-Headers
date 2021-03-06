/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADModule.h>

@protocol CALNNotificationIconProviderCALNCalendarIconIdentifierProvider;
@class EKEphemeralCacheEventStoreProvider, EKEventStore, CALNInboxNotificationMonitor, CALNNotificationServer, CALNNotificationSourceRefresher, CALNCalendarAppBadgeUpdater, CALNNotificationStorageWrapper, CALNTriggeredEventNotificationSource, CALNNotificationIconCache, NSArray, NSString;

@interface CALNNotificationServerModule : NSObject <CADModule> {

	EKEphemeralCacheEventStoreProvider* _eventStoreProvider;
	EKEventStore* _lastCreatedEventStore;
	CALNInboxNotificationMonitor* _inboxNotificationMonitor;
	CALNNotificationServer* _calendarNotificationServer;
	CALNNotificationSourceRefresher* _notificationSourceRefresher;
	CALNCalendarAppBadgeUpdater* _calendarAppBadgeUpdater;
	CALNNotificationStorageWrapper* _calendarStorageWrapper;
	CALNTriggeredEventNotificationSource* _triggeredEventNotificationSource;
	CALNNotificationIconCache* _iconCache;
	id<CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider> _iconProvider;
	NSArray* _modules;

}

@property (nonatomic,readonly) CALNInboxNotificationMonitor * inboxNotificationMonitor;                                        //@synthesize inboxNotificationMonitor=_inboxNotificationMonitor - In the implementation block
@property (nonatomic,readonly) CALNNotificationServer * calendarNotificationServer;                                            //@synthesize calendarNotificationServer=_calendarNotificationServer - In the implementation block
@property (nonatomic,readonly) CALNNotificationSourceRefresher * notificationSourceRefresher;                                  //@synthesize notificationSourceRefresher=_notificationSourceRefresher - In the implementation block
@property (nonatomic,readonly) CALNCalendarAppBadgeUpdater * calendarAppBadgeUpdater;                                          //@synthesize calendarAppBadgeUpdater=_calendarAppBadgeUpdater - In the implementation block
@property (nonatomic,readonly) CALNNotificationStorageWrapper * calendarStorageWrapper;                                        //@synthesize calendarStorageWrapper=_calendarStorageWrapper - In the implementation block
@property (nonatomic,readonly) CALNTriggeredEventNotificationSource * triggeredEventNotificationSource;                        //@synthesize triggeredEventNotificationSource=_triggeredEventNotificationSource - In the implementation block
@property (nonatomic,readonly) CALNNotificationIconCache * iconCache;                                                          //@synthesize iconCache=_iconCache - In the implementation block
@property (nonatomic,readonly) id<CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider> iconProvider;              //@synthesize iconProvider=_iconProvider - In the implementation block
@property (nonatomic,readonly) NSArray * modules;                                                                              //@synthesize modules=_modules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_migrateNotificationFiles;
+(id)_protectedTriggeredEventNotificationDataStorage;
+(id)_unprotectedTriggeredEventNotificationDataStorage;
+(void)_migrateNotificationFilesFromDirectory:(id)arg1 toDirectory:(id)arg2 ;
+(id)_createTriggeredEventNotificationDataStorageAtPath:(id)arg1 protected:(BOOL)arg2 ;
+(id)_createNotificationStorageAtPath:(id)arg1 protected:(BOOL)arg2 ;
+(id)_unprotectedCalendarNotificationStorage;
+(id)_timeToLeaveRefreshStorage;
+(id)_filesToMigrate;
+(id)_timeToLeaveRefreshStoragePathWithName:(id)arg1 ;
+(id)_triggeredEventNotificationDataStoragePathWithName:(id)arg1 ;
+(id)_notificationStoragePathWithName:(id)arg1 ;
+(id)_createTimeToLeaveRefreshStorageAtPath:(id)arg1 ;
+(void)_setProtectedClassForStorageAtPath:(id)arg1 ;
+(id)_protectedCalendarNotificationStorage;
-(NSArray *)modules;
-(void)didRegisterForAlarms;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)receivedNotificationNamed:(id)arg1 ;
-(CALNNotificationIconCache *)iconCache;
-(CALNNotificationSourceRefresher *)notificationSourceRefresher;
-(void)_updateSourceClientIdentifiersIfNeeded;
-(void)_reloadNotificationsAfterFirstUnlock;
-(void)_reloadNotificationsFromUnprotectedStorage:(id)arg1 intoProtectedStorage:(id)arg2 withStorageWrapper:(id)arg3 forNotificationServer:(id)arg4 ;
-(void)_reloadTriggeredEventNotificationData;
-(id<CALNNotificationIconProvider><CALNCalendarIconIdentifierProvider>)iconProvider;
-(id)init;
-(id)_createNotificationServerWithUserNotificationCenter:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7 ;
-(CALNCalendarAppBadgeUpdater *)calendarAppBadgeUpdater;
-(void)deactivate;
-(CALNNotificationStorageWrapper *)calendarStorageWrapper;
-(id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7 ;
-(void)_removeNotificationsFromUnprotectedStorage:(id)arg1 ;
-(void)refreshEventStoreInResponseToDatabaseChangeNotification:(id)arg1 ;
-(id)_createNotificationSourcesWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 inboxNotificationProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7 ;
-(CALNNotificationServer *)calendarNotificationServer;
-(void)_reloadNotificationRecords:(id)arg1 forNotificationServer:(id)arg2 ;
-(CALNTriggeredEventNotificationSource *)triggeredEventNotificationSource;
-(void)activate;
-(void)updateIconsToNewVersionIfNeeded;
-(CALNInboxNotificationMonitor *)inboxNotificationMonitor;
-(void)_registerSettingsCaptureHandlers;
@end

