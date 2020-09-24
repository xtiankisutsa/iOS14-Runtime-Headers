/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKAvailabilityCache, NSDate, NSString, NSSet, NSData, EKSourceConstraints, REMObjectID, NSError, NSNumber, NSDictionary;

@interface EKSource : EKObject {

	EKAvailabilityCache* _availabilityCache;
	BOOL _isFacebook;
	BOOL _snoozeAlarmRequiresDetach;
	NSDate* _timeOfLastExternalIdentificationCache;
	NSString* _cachedHost;
	long long _cachedPort;
	NSSet* _cachedOwnerAddresses;

}

@property (nonatomic,readonly) BOOL hasOwnerEmailAddress; 
@property (nonatomic,retain) NSDate * timeOfLastExternalIdentificationCache;                      //@synthesize timeOfLastExternalIdentificationCache=_timeOfLastExternalIdentificationCache - In the implementation block
@property (nonatomic,retain) NSString * cachedHost;                                               //@synthesize cachedHost=_cachedHost - In the implementation block
@property (assign,nonatomic) long long cachedPort;                                                //@synthesize cachedPort=_cachedPort - In the implementation block
@property (nonatomic,retain) NSSet * cachedOwnerAddresses;                                        //@synthesize cachedOwnerAddresses=_cachedOwnerAddresses - In the implementation block
@property (nonatomic,retain) NSData * lastSyncErrorData; 
@property (nonatomic,copy) NSString * delegatedAccountOwnerStoreID; 
@property (nonatomic,readonly) BOOL isDelegate; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,readonly) NSSet * allCalendars; 
@property (nonatomic,readonly) EKAvailabilityCache * availabilityCache; 
@property (nonatomic,readonly) int displayOrderForNewCalendar; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) BOOL isFacebookSource; 
@property (nonatomic,readonly) BOOL supportsCalendarCreation; 
@property (nonatomic,readonly) BOOL supportsReminderActions; 
@property (nonatomic,readonly) EKSourceConstraints * constraints; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) BOOL supportsFreebusy; 
@property (nonatomic,readonly) BOOL supportsEventCalendarCreation; 
@property (nonatomic,readonly) BOOL supportsFloatingTimeZone; 
@property (nonatomic,readonly) BOOL supportsMultipleAlarms; 
@property (nonatomic,readonly) BOOL supportsMultipleMonthsInYearlyRecurrence; 
@property (nonatomic,readonly) BOOL supportsMultipleDaysInMonthlyRecurrence; 
@property (nonatomic,readonly) BOOL supportsYearlyRecurrenceWithArbitraryInterval; 
@property (nonatomic,readonly) BOOL supportsURLs; 
@property (nonatomic,readonly) BOOL prefersSuggestingNewTimeViaEmail; 
@property (nonatomic,readonly) BOOL supportsAttendeeEventForwarding; 
@property (nonatomic,readonly) BOOL preferUsingEventOrganizerEmailWhenComposingMail; 
@property (nonatomic,readonly) BOOL isEnabledForEvents; 
@property (nonatomic,readonly) REMObjectID * remAccountObjectID; 
@property (nonatomic,readonly) NSError * sourceError; 
@property (nonatomic,readonly) BOOL syncs; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * creatorBundleID; 
@property (nonatomic,copy) NSString * creatorCodeSigningIdentity; 
@property (assign,nonatomic) BOOL onlyCreatorCanModify; 
@property (nonatomic,readonly) BOOL wantsCommentPromptWhenDeclining; 
@property (assign,nonatomic) long long preferredEventPrivateValue; 
@property (assign,nonatomic) long long strictestEventPrivateValue; 
@property (nonatomic,readonly) NSString * serverHost; 
@property (nonatomic,readonly) long long serverPort; 
@property (nonatomic,readonly) BOOL serverUsesSSL; 
@property (nonatomic,readonly) NSSet * ownerAddresses; 
@property (nonatomic,readonly) NSString * preferredOwnerAddress; 
@property (assign,nonatomic) BOOL wasMigrated; 
@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) long long sourceType; 
@property (assign,nonatomic) BOOL showsNotifications; 
@property (nonatomic,retain) NSString * constraintsDescriptionPath; 
@property (nonatomic,retain) NSString * constraintsName; 
@property (nonatomic,retain) NSString * constraintsDescriptionPathForUnitTesting; 
@property (assign,nonatomic) BOOL allowsTasks; 
@property (assign,nonatomic) BOOL allowsEvents; 
@property (assign,nonatomic) BOOL allowsCalendarAddDeleteModify; 
@property (assign,nonatomic) BOOL supportsSharedCalendars; 
@property (assign,nonatomic) BOOL supportsAlarmAcknowledgedDate; 
@property (assign,nonatomic) BOOL supportsPrivateEvents; 
@property (assign,nonatomic) BOOL prohibitsPrivateEventsWithAttendees; 
@property (assign,nonatomic) BOOL requiresSamePrivacyLevelAcrossRecurrenceSeries; 
@property (assign,nonatomic) BOOL supportsAvailabilityRequests; 
@property (assign,nonatomic) BOOL supportsIgnoringEventsInAvailabilityRequests; 
@property (assign,nonatomic) BOOL supportsLocationDirectorySearches; 
@property (assign,nonatomic) BOOL allowsProposeNewTime; 
@property (assign,nonatomic) BOOL prohibitsICSImport; 
@property (assign,nonatomic) BOOL isFacebook;                                                     //@synthesize isFacebook=_isFacebook - In the implementation block
@property (assign,nonatomic) BOOL prohibitsDetachmentOnCommentChange; 
@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsYearlyRecurrenceInterval; 
@property (assign,nonatomic) BOOL usesSelfAttendee; 
@property (assign,nonatomic) BOOL snoozeAlarmRequiresDetach;                                      //@synthesize snoozeAlarmRequiresDetach=_snoozeAlarmRequiresDetach - In the implementation block
@property (nonatomic,readonly) NSString * personaIdentifier; 
@property (nonatomic,readonly) BOOL supportsJunkReporting; 
@property (nonatomic,readonly) BOOL supportsPhoneNumbers; 
@property (nonatomic,readonly) unsigned long long lastSyncError; 
@property (nonatomic,copy,readonly) NSDictionary * lastSyncErrorUserInfo; 
@property (nonatomic,retain) NSDate * lastSyncStartDate; 
@property (nonatomic,retain) NSDate * lastSyncEndDate; 
@property (nonatomic,readonly) BOOL isSyncing; 
@property (assign,nonatomic) int flags; 
@property (assign,nonatomic) int flags2; 
@property (nonatomic,readonly) NSSet * calendars; 
+(id)knownSingleValueKeysForComparison;
+(id)knownIdentityKeysForComparison;
+(Class)frozenClass;
+(BOOL)isWeakRelationship;
+(long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1 ;
+(int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)arg1 ;
+(id)sourceWithEventStore:(id)arg1 ;
-(NSData *)lastSyncErrorData;
-(void)setConstraintsName:(NSString *)arg1 ;
-(BOOL)flag2:(int)arg1 ;
-(int)flags2;
-(BOOL)remove:(id*)arg1 ;
-(BOOL)refresh;
-(BOOL)showsNotifications;
-(void)setCachedHost:(NSString *)arg1 ;
-(void)setSnoozeAlarmRequiresDetach:(BOOL)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(void)setLastSyncEndDate:(NSDate *)arg1 ;
-(void)setCreatorCodeSigningIdentity:(NSString *)arg1 ;
-(int)strictestEventPrivateValueRaw;
-(BOOL)supportsCalendarCreation;
-(int)preferredEventPrivateValueRaw;
-(void)setDelegatedAccountOwnerStoreID:(NSString *)arg1 ;
-(BOOL)onlyCreatorCanModify;
-(void)setLastSyncErrorData:(NSData *)arg1 ;
-(long long)serverPort;
-(NSString *)creatorCodeSigningIdentity;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(void)setFlag:(int)arg1 value:(BOOL)arg2 ;
-(BOOL)wantsCommentPromptWhenDeclining;
-(void)setFlags2:(int)arg1 ;
-(BOOL)supportsMultipleAlarms;
-(void)setShowsNotifications:(BOOL)arg1 ;
-(NSNumber *)defaultAlarmOffset;
-(void)setSourceType:(long long)arg1 ;
-(void)setPreferredEventPrivateValueRaw:(int)arg1 ;
-(void)setStrictestEventPrivateValueRaw:(int)arg1 ;
-(NSString *)constraintsName;
-(NSString *)creatorBundleID;
-(void)setCreatorBundleID:(NSString *)arg1 ;
-(BOOL)allowsProposeNewTime;
-(long long)sourceType;
-(void)setSupportsAvailabilityRequests:(BOOL)arg1 ;
-(BOOL)supportsReminderActions;
-(id)_ekOfficeHoursFromCalDAVOfficeHours:(id)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(BOOL)disabled;
-(id)readWriteCalendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)preferUsingEventOrganizerEmailWhenComposingMail;
-(BOOL)flag:(int)arg1 ;
-(REMObjectID *)remAccountObjectID;
-(void)setLastSyncStartDate:(NSDate *)arg1 ;
-(BOOL)isFacebook;
-(NSDate *)lastSyncEndDate;
-(void)setAllowsCalendarAddDeleteModify:(BOOL)arg1 ;
-(NSSet *)allCalendars;
-(BOOL)isDelegate;
-(void)countCalendarItemsWithResultHandler:(/*^block*/id)arg1 ;
-(int)flags;
-(void)setProhibitsPrivateEventsWithAttendees:(BOOL)arg1 ;
-(void)setFlags:(int)arg1 ;
-(unsigned long long)lastSyncError;
-(long long)cachedPort;
-(NSDate *)lastSyncStartDate;
-(BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
-(BOOL)prohibitsICSImport;
-(NSString *)delegatedAccountOwnerStoreID;
-(NSString *)sourceIdentifier;
-(NSDictionary *)lastSyncErrorUserInfo;
-(NSString *)constraintsDescriptionPath;
-(BOOL)prefersSuggestingNewTimeViaEmail;
-(NSString *)preferredOwnerAddress;
-(BOOL)isEnabled;
-(void)setLastSyncErrorUserInfo:(NSDictionary *)arg1 ;
-(NSSet *)calendars;
-(BOOL)isSyncing;
-(id)UUID;
-(long long)strictestEventPrivateValue;
-(BOOL)_reset;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(BOOL)allowsCalendarAddDeleteModify;
-(NSString *)title;
-(id)calendarWithExternalIdentifier:(id)arg1 ;
-(BOOL)prohibitsYearlyRecurrenceInterval;
-(void)setAllowsProposeNewTime:(BOOL)arg1 ;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(void)setLastSyncError:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)setSupportsPrivateEvents:(BOOL)arg1 ;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1 ;
-(BOOL)prohibitsPrivateEventsWithAttendees;
-(BOOL)prohibitsDetachmentOnCommentChange;
-(EKAvailabilityCache *)availabilityCache;
-(NSSet *)cachedOwnerAddresses;
-(void)countCalendarItemsOfType:(unsigned long long)arg1 resultHandler:(/*^block*/id)arg2 ;
-(NSString *)constraintsDescriptionPathForUnitTesting;
-(NSString *)personaIdentifier;
-(BOOL)usesSelfAttendee;
-(void)fetchOfficeHoursWithCompletion:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)setPreferredEventPrivateValue:(long long)arg1 ;
-(BOOL)allowsTasks;
-(void)setRequiresSamePrivacyLevelAcrossRecurrenceSeries:(BOOL)arg1 ;
-(BOOL)supportsPhoneNumbers;
-(BOOL)syncs;
-(void)setProhibitsYearlyRecurrenceInterval:(BOOL)arg1 ;
-(int)displayOrderForNewCalendar;
-(NSString *)serverHost;
-(BOOL)wasMigrated;
-(void)setProhibitsDetachmentOnCommentChange:(BOOL)arg1 ;
-(NSSet *)ownerAddresses;
-(void)setTimeOfLastExternalIdentificationCache:(NSDate *)arg1 ;
-(BOOL)serverUsesSSL;
-(void)setSupportsAlarmAcknowledgedDate:(BOOL)arg1 ;
-(void)_cacheExternalIdentification;
-(BOOL)hasOwnerEmailAddress;
-(void)_setConstraintsNameWithoutValidation:(id)arg1 ;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setWasMigrated:(BOOL)arg1 ;
-(BOOL)supportsEventCalendarCreation;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(BOOL)supportsURLs;
-(BOOL)supportsFloatingTimeZone;
-(void)setCachedOwnerAddresses:(NSSet *)arg1 ;
-(BOOL)isFacebookSource;
-(BOOL)supportsFreebusy;
-(NSDate *)timeOfLastExternalIdentificationCache;
-(BOOL)supportsAvailabilityRequests;
-(BOOL)isEnabledForEvents;
-(void)setOfficeHours:(id)arg1 withCompletion:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(BOOL)validate:(id*)arg1 ;
-(void)_countCalendarItemsOfCalType:(int)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setAllowsEvents:(BOOL)arg1 ;
-(EKSourceConstraints *)constraints;
-(void)_cacheExternalIdentificationIfNeeded;
-(BOOL)supportsPrivateEvents;
-(void)setUUID:(id)arg1 ;
-(long long)preferredEventPrivateValue;
-(NSString *)externalModificationTag;
-(BOOL)supportsSharedCalendars;
-(void)setConstraintsDescriptionPath:(NSString *)arg1 ;
-(void)setSupportsSharedCalendars:(BOOL)arg1 ;
-(BOOL)removeCalendarItemsOlderThanDate:(id)arg1 entityTypeMask:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setConstraintsDescriptionPathForUnitTesting:(NSString *)arg1 ;
-(void)setProhibitsICSImport:(BOOL)arg1 ;
-(NSError *)sourceError;
-(void)setFlag2:(int)arg1 value:(BOOL)arg2 ;
-(BOOL)requiresSamePrivacyLevelAcrossRecurrenceSeries;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(BOOL)supportsIgnoringEventsInAvailabilityRequests;
-(void)setCachedPort:(long long)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSupportsIgnoringEventsInAvailabilityRequests:(BOOL)arg1 ;
-(BOOL)allowsEvents;
-(void)setSupportsLocationDirectorySearches:(BOOL)arg1 ;
-(BOOL)supportsMultipleMonthsInYearlyRecurrence;
-(void)setUsesSelfAttendee:(BOOL)arg1 ;
-(BOOL)supportsJunkReporting;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)supportsAlarmAcknowledgedDate;
-(void)setStrictestEventPrivateValue:(long long)arg1 ;
-(BOOL)snoozeAlarmRequiresDetach;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
-(void)setIsFacebook:(BOOL)arg1 ;
-(void)setAllowsTasks:(BOOL)arg1 ;
-(id)description;
-(BOOL)supportsYearlyRecurrenceWithArbitraryInterval;
-(BOOL)supportsMultipleDaysInMonthlyRecurrence;
-(int)managedConfigurationAccountAccess;
-(BOOL)supportsLocationDirectorySearches;
-(NSString *)cachedHost;
-(BOOL)isWritable;
-(BOOL)supportsAttendeeEventForwarding;
-(id)_calDAVOfficeHoursFromEKOfficeHours:(id)arg1 ;
@end
