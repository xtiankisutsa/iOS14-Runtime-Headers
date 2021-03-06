/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSNumber, NSSet;

@interface LSApplicationRestrictionsManager : NSObject {

	NSObject*<OS_dispatch_queue> _restrictionsAccessQueue;
	NSObject*<OS_dispatch_queue> _signerIdentitySyncQueue;
	NSObject*<OS_dispatch_source> _signerIdentitySyncSource;
	NSNumber* _whitelistState;
	unsigned long long _knownSystemAppDeletionState;
	NSSet* _whitelistedBundleIDs;
	NSSet* _blacklistedBundleIDs;
	NSSet* _restrictedBundleIDs;
	NSNumber* _maximumRating;

}

@property (getter=isWhitelistEnabled,readonly) BOOL whitelistEnabled; 
@property (getter=isOpenInRestrictionInEffect,readonly) BOOL openInRestrictionInEffect; 
@property (getter=isAdTrackingEnabled,readonly) BOOL adTrackingEnabled; 
@property (getter=isLimitAdTrackingForced,readonly) BOOL limitAdTrackingForced; 
@property (getter=isSystemAppDeletionEnabled,readonly) BOOL systemAppDeletionEnabled; 
@property (readonly) NSNumber * maximumRating;                                                       //@synthesize maximumRating=_maximumRating - In the implementation block
@property (readonly) NSSet * restrictedBundleIDs;                                                    //@synthesize restrictedBundleIDs=_restrictedBundleIDs - In the implementation block
@property (readonly) NSSet * blacklistedBundleIDs;                                                   //@synthesize blacklistedBundleIDs=_blacklistedBundleIDs - In the implementation block
@property (readonly) NSSet * whitelistedBundleIDs;                                                   //@synthesize whitelistedBundleIDs=_whitelistedBundleIDs - In the implementation block
@property (nonatomic,copy) NSSet * removedSystemApplicationIdentifiers; 
+(id)sharedInstance;
+(id)activeRestrictionIdentifiers;
-(BOOL)isOpenInRestrictionInEffect;
-(id)_MCRestrictionManager;
-(void)setRemovedSystemApplicationIdentifiers:(NSSet *)arg1 ;
-(BOOL)isSystemAppDeletionEnabled;
-(BOOL)isApplicationRestricted:(id)arg1 ;
-(id)_LSResolveIdentifiers:(id)arg1 ;
-(void)handleMCEffectiveSettingsChanged;
-(BOOL)cleanRemovedSystemApplicationsList;
-(void)_syncTrustedSignerIdenties;
-(NSSet *)restrictedBundleIDs;
-(id)blacklistedBundleID;
-(BOOL)isWhitelistEnabled;
-(void)setRestrictedBundleIDs:(NSSet *)arg1 ;
-(BOOL)isFeatureAllowed:(id)arg1 ;
-(void)setBlacklistedBundleIDs:(NSSet *)arg1 ;
-(BOOL)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(BOOL)arg2 ;
-(BOOL)isRatingAllowed:(id)arg1 ;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3 ;
-(id)_MCProfileConnection;
-(id)calculateSetDifference:(id)arg1 and:(id)arg2 ;
-(NSSet *)blacklistedBundleIDs;
-(BOOL)isLimitAdTrackingForced;
-(void)clearAllValues;
-(void)beginListeningForChanges;
-(BOOL)isAppExtensionRestricted:(id)arg1 ;
-(void)setWhitelistedBundleIDs:(NSSet *)arg1 ;
-(NSSet *)removedSystemApplicationIdentifiers;
-(NSSet *)whitelistedBundleIDs;
-(BOOL)isAdTrackingEnabled;
-(BOOL)_LSApplyRestrictedSet:(id)arg1 forRestriction:(id)arg2 ;
-(void)scheduleSyncTrustedSignerIdenties;
-(BOOL)setApplication:(id)arg1 removed:(BOOL)arg2 ;
-(NSNumber *)maximumRating;
@end

