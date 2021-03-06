/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSDictionary, NSObject, ATXClient, _ATXAppInfoManager, _ATXInternalUninstallNotification, _ATXInternalInstallNotification, ATXInternalOffloadAppsNotification, ATXInternalAppsInstallStartNotification, ATXGenericFileBasedCache, ATXAppPredictionBlacklist, NSSet, NSMutableDictionary, ATXAppClipUsageDuetDataProvider, _ATXAppLaunchHistogramManager, ATXAppClipUsageDuetContextUpdateListener, _ATXAppIconState, NSString, SBSHomeScreenService, NSDate, NSUserDefaults;

@interface ATXAppDirectoryOrderingProvider : NSObject {

	NSArray* _categories;
	NSDictionary* _appLaunchCounts;
	NSDictionary* _libraryAppLaunchCounts;
	NSObject*<OS_dispatch_queue> _queue;
	ATXClient* _atxClient;
	_ATXAppInfoManager* _infoManager;
	_ATXInternalUninstallNotification* _uninstallNotification;
	_ATXInternalInstallNotification* _installNotification;
	ATXInternalOffloadAppsNotification* _offloadNotification;
	ATXInternalAppsInstallStartNotification* _installingNotification;
	ATXGenericFileBasedCache* _cache;
	NSDictionary* _hardcodedAppCategoryMappings;
	ATXAppPredictionBlacklist* _blacklist;
	NSSet* _blacklistedBundleIds;
	NSMutableDictionary* _recentApps;
	ATXGenericFileBasedCache* _recentsCache;
	ATXAppClipUsageDuetDataProvider* _appClipDataProvider;
	_ATXAppLaunchHistogramManager* _appLaunchHistogramManager;
	ATXAppClipUsageDuetContextUpdateListener* _appClipChangeListener;
	_ATXAppIconState* _appIconState;
	NSDictionary* _appScreenTimeCategoryMappings;
	NSSet* _homescreenAppsToDedupeAgainst;
	NSSet* _managedAppIDs;
	NSString* _managingOrganizationName;
	SBSHomeScreenService* _sbsHomeScreenService;
	int _settingsChangedToken;
	NSDate* _lastUpdatePostTime;
	NSUserDefaults* _atxDefaults;
	BOOL _usingScreenTime;

}

@property (assign,nonatomic) BOOL usingScreenTime;              //@synthesize usingScreenTime=_usingScreenTime - In the implementation block
+(id)sharedInstance;
+(id)_reorderedRecentApps:(id)arg1 ;
+(BOOL)isStoreDemoMode;
-(void)requestNotificationWhenCategoriesAreReady;
-(BOOL)usingScreenTime;
-(id)_categoryIdFromBundleId:(id)arg1 ;
-(void)_updateCategories;
-(void)_updateRecents;
-(void)_updateScreenTimeMappingsForAppBundleIds:(id)arg1 ;
-(id)_totalLaunchCountsForCategory:(id)arg1 ;
-(BOOL)_writeToDisk:(id)arg1 cache:(id)arg2 logIdentifier:(id)arg3 ;
-(void)_updateMDMStatus;
-(/*^block*/id)_categoryComparator;
-(id)initWithAppInfoManager:(id)arg1 cache:(id)arg2 blacklist:(id)arg3 recentsCache:(id)arg4 appClipDataProvider:(id)arg5 appIconState:(id)arg6 appClipChangeListener:(id)arg7 histogramManager:(id)arg8 usingScreenTime:(BOOL)arg9 ;
-(void)_updateAppClipSinceDate:(id)arg1 installDates:(id)arg2 ;
-(id)_screenTimeIdFromBundleId:(id)arg1 ;
-(void)_updateCategoriesForInstalledApps:(id)arg1 ;
-(void)_updateMDMCategoryName;
-(void)setUp;
-(id)_mdmEnterpriseCategoriesForApps:(id)arg1 ;
-(void)dealloc;
-(void)_updateAppLaunchCounts;
-(id)_computeCategories;
-(void)_ensureCategoryConsistency;
-(/*^block*/id)_appBundleIDRecencyComparatorForLastLaunchDates:(id)arg1 ;
-(BOOL)_shiftAppIndices:(id)arg1 category:(id)arg2 ;
-(BOOL)_writeRecentsToDisk;
-(id)_getManagedAppIDs;
-(BOOL)_readCategoriesFromDisk;
-(id)_categoryChangesDictionaryForChangedApps:(id)arg1 ;
-(id)_genreIdFromBundleId:(id)arg1 ;
-(id)_sortCategories:(id)arg1 ;
-(BOOL)_writeCategoriesToDisk;
-(void)_handleManagedAppsChangedNotification;
-(void)categoriesWithReply:(/*^block*/id)arg1 ;
-(void)_updateRecentsForAppClipUsageEvent:(id)arg1 ;
-(void)categoryLaunchInformationWithReply:(/*^block*/id)arg1 ;
-(id)_groupEnterpriseAppsByIssuerWithBundleIDs:(id)arg1 isMDM:(BOOL)arg2 ;
-(void)_createHomeScreenServiceIfNecessary;
-(id)_issuingOrganizationForEnterpriseAppBundleID:(id)arg1 isMDM:(BOOL)arg2 ;
-(BOOL)_shouldInvalidateCachedCategoriesForDemoMode;
-(id)_totalCombinedLaunchCountsForCategory:(id)arg1 ;
-(void)notifyBookmarksDidChange;
-(id)_getEnterpriseCategoriesForApps:(id)arg1 ;
-(void)_handleManagedAppsOrgInfoChangedNotification;
-(void)_postPredictedAppsAndRecentsUpdateNotificationWithReason:(id)arg1 ;
-(void)appLaunchDatesWithReply:(/*^block*/id)arg1 ;
-(id)_combinedLaunchCountForBundleId:(id)arg1 ;
-(void)_initCategories;
-(void)_registerForManagedAppsOrgInfoChangedNotification;
-(void)updateCacheWithActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateCategoriesForDownweightedAppSet:(id)arg1 ;
-(void)_updateCategoriesForUninstalledApps:(id)arg1 ;
-(void)topAppsWithMaxNumberOfResults:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)_reorderAndHideDupesForAppsInCategory:(id)arg1 ;
-(void)_splitEnterpriseCategoryWithAppsInCategory:(id)arg1 appsByCategoryName:(id)arg2 isMDMAppCategory:(BOOL)arg3 ;
-(void)_updateRecentsForInstalledApps:(id)arg1 ;
-(void)_registerForManagedAppsChangedNotification;
-(void)_updateMDMAndEnterpriseCategories;
-(void)updateRecents;
-(void)appLaunchInformationWithReply:(/*^block*/id)arg1 ;
-(void)postPredictedAppsAndRecentsUpdateNotificationWithReason:(id)arg1 ;
-(BOOL)isMarketingDemoMode;
-(id)_totalLibraryLaunchCountsForCategory:(id)arg1 ;
-(/*^block*/id)_appBundleIDTotalLaunchComparator;
-(id)description;
-(void)setUsingScreenTime:(BOOL)arg1 ;
-(id)_getMDMOrgName;
-(void)_postUpdateNotificationWithReason:(id)arg1 ;
@end

