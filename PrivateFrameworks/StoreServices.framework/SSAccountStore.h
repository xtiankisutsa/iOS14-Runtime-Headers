/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, SSKeyValueStore, ACAccountStore, SSPromise, SSAccount, NSString;

@interface SSAccountStore : NSObject <AKAppleIDAuthenticationDelegate> {

	BOOL _inProcessCacheDisabled;
	NSArray* _accountsCache;
	NSObject*<OS_dispatch_queue> _accountsCacheAccessQueue;
	NSObject*<OS_dispatch_queue> _fetchAccountsQueue;
	SSKeyValueStore* _keyValueStore;
	NSObject*<OS_dispatch_queue> _metricsQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	ACAccountStore* _backingAccountStore;

}

@property (nonatomic,retain) NSArray * accountsCache;                                                  //@synthesize accountsCache=_accountsCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accountsCacheAccessQueue;                    //@synthesize accountsCacheAccessQueue=_accountsCacheAccessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchAccountsQueue;                          //@synthesize fetchAccountsQueue=_fetchAccountsQueue - In the implementation block
@property (assign,getter=isInProcessCacheDisabled,nonatomic) BOOL inProcessCacheDisabled;              //@synthesize inProcessCacheDisabled=_inProcessCacheDisabled - In the implementation block
@property (nonatomic,retain) SSKeyValueStore * keyValueStore;                                          //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;                                //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;                           //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) SSPromise * accountsPromise; 
@property (getter=isAuthenticationActive,readonly) BOOL authenticationActive; 
@property (nonatomic,readonly) ACAccountStore * backingAccountStore;                                   //@synthesize backingAccountStore=_backingAccountStore - In the implementation block
@property (nonatomic,readonly) SSAccount * demoAccount; 
@property (nonatomic,readonly) SSPromise * localAccount; 
@property (readonly) SSAccount * activeAccount; 
@property (readonly) SSAccount * activeSandboxAccount; 
@property (readonly) SSAccount * activeLockerAccount; 
@property (copy,readonly) NSArray * accounts; 
@property (copy,readonly) SSAccount * localiTunesAccount; 
@property (getter=isExpired,readonly) BOOL expired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultStore;
+(void)performCookieStorageMigration;
+(BOOL)_copyKVSDatabaseWithError:(id*)arg1 ;
+(void)_enableAccountStoreChangedNotifications;
+(double)tokenExpirationInterval;
+(void)setUnitTestModeEnabled:(BOOL)arg1 ;
+(void)_setActiveAccountIsManagedAppleIDPreference:(BOOL)arg1 ;
+(void)_removeAccountFromUnitTestStore:(id)arg1 ;
+(void)_addAccountToUnitTestStore:(id)arg1 ;
+(id)_migrateAccountDictionary:(id)arg1 fromKeyValueStore:(id)arg2 originalActiveDSID:(id)arg3 originalActiveLockerDSID:(id)arg4 logKey:(id)arg5 error:(id*)arg6 ;
+(BOOL)_allowSilentPasswordAuthForAccount:(id)arg1 withOptions:(id)arg2 ;
+(BOOL)isExpiredForTokenType:(long long)arg1 ;
+(id)_hashedDescriptionFromAccountDictionary:(id)arg1 ;
+(void)resetExpirationForTokenType:(long long)arg1 ;
+(id)_createUpdatedAccount:(id)arg1 withAuthenticationResults:(id)arg2 options:(id)arg3 ;
+(BOOL)isExpired;
+(id)_unitTestAccountsAccessQueue;
+(id)existingDefaultStore;
+(BOOL)_isBuddyRunning;
+(id)_refreshAccount:(id)arg1 ;
+(BOOL)_currentProcessLinksUIKit;
+(BOOL)_accountDictionaryRepresentsActiveAccount:(id)arg1 inKeyValueStore:(id)arg2 ;
+(BOOL)migrateToAccountsFramework;
+(void)resetExpiration;
+(id)_createAuthenticationContextForAccount:(id)arg1 silentAuthentication:(BOOL)arg2 options:(id)arg3 ;
+(BOOL)_shouldRemoveAccountDictionaryWithoutMigration:(id)arg1 reason:(id*)arg2 ;
+(void)setAuthenticationStartedDate:(id)arg1 ;
+(void)_removeAccountDictionary:(id)arg1 fromKeyValueStore:(id)arg2 ;
+(BOOL)unitTestModeEnabled;
+(BOOL)_accountDictionaryRepresentsActiveLockerAccount:(id)arg1 inKeyValueStore:(id)arg2 ;
+(void)_cleanupActiveAccountsAfterMigrationWithActiveDSID:(id)arg1 activeLockerDSID:(id)arg2 ;
+(id)_createAuthenticationController;
+(void)_postAccountsChangedInternalDarwinNotification;
+(void)_disableAccountStoreChangedNotifications;
+(BOOL)areAccountStoreChangedNotificationsDisabled;
+(id)_backingAccountForAccount:(id)arg1 ;
+(BOOL)URLResponseAllowsSilentAuthentication:(id)arg1 ;
+(void)_postAccountsChangedDarwinNotification;
-(ACAccountStore *)backingAccountStore;
-(id)addAccount:(id)arg1 ;
-(SSPromise *)localAccount;
-(id)_updateAccountWithAuthKitViaSilentPETAuth:(id)arg1 options:(id)arg2 ;
-(void)_postAccountStoreChangeNotification;
-(id)accountWithUniqueIdentifier:(id)arg1 scope:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountWithAccountName:(id)arg1 scope:(long long)arg2 ;
-(BOOL)repairAccountWithBrokenDSID:(id)arg1 ;
-(id)_updateAccountWithAuthKitViaSilentPasswordAuth:(id)arg1 options:(id)arg2 ;
-(id)setActiveAccount:(SSAccount *)arg1 ;
-(id)setActiveLockerAccount:(SSAccount *)arg1 ;
-(void)setAccountsCacheAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_buyParamsForBuyParamsString:(id)arg1 ;
-(void)removeCookiesForAccount:(id)arg1 logKey:(id)arg2 ;
-(void)_setCachedAccounts:(id)arg1 ;
-(void)setFetchAccountsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)fetchAccountsQueue;
-(void)removeAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)iTunesStoreAccountType;
-(id)_updateAccountWithAuthKitViaPromptAuth:(id)arg1 store:(id)arg2 options:(id)arg3 ;
-(BOOL)isExpiredForTokenType:(long long)arg1 ;
-(void)signOutAllAccounts;
-(id)accountWithAltDSID:(id)arg1 uniqueIdentifier:(id)arg2 accountName:(id)arg3 ;
-(void)signOutAccount:(id)arg1 ;
-(SSAccount *)demoAccount;
-(SSAccount *)localiTunesAccount;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)accountWithAltDSID:(id)arg1 ;
-(void)setKeyValueStore:(SSKeyValueStore *)arg1 ;
-(id)_optionsForProxiedAuthenticationWithVerifyCredentialsOptions:(id)arg1 ;
-(void)resetExpirationForTokenType:(long long)arg1 ;
-(BOOL)removeAccount:(id)arg1 error:(id*)arg2 ;
-(void)setAccountsCache:(NSArray *)arg1 ;
-(NSArray *)accountsCache;
-(id)_saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 ;
-(id)init;
-(BOOL)saveAccount:(id)arg1 error:(id*)arg2 ;
-(SSPromise *)accountsPromise;
-(BOOL)isExpired;
-(void)reloadAccounts;
-(NSArray *)accounts;
-(id)_convertPasswordToPET:(id)arg1 forAccount:(id)arg2 options:(id)arg3 ;
-(void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(id)_saveAccountInUnitTestMode:(id)arg1 ignoreValidationErrors:(BOOL)arg2 ;
-(void)setInProcessCacheDisabled:(BOOL)arg1 ;
-(id)updateAccountWithAuthKit:(id)arg1 store:(id)arg2 options:(id)arg3 ;
-(void)saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetExpiration;
-(BOOL)saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 error:(id*)arg3 ;
-(id)iTunesStoreAccountTypePromise;
-(SSAccount *)activeAccount;
-(void)getDefaultAccountNameUsingBlock:(/*^block*/id)arg1 ;
-(SSKeyValueStore *)keyValueStore;
-(NSObject*<OS_dispatch_queue>)accountsCacheAccessQueue;
-(void)_postActiveAccountChangedNotification;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clearCachedAccounts;
-(id)accountWithAltDSID:(id)arg1 uniqueIdentifier:(id)arg2 accountName:(id)arg3 scope:(long long)arg4 ;
-(id)_updateAccountWithAuthKitViaSilentAuth:(id)arg1 options:(id)arg2 ;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(void)_recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2 ;
-(SSAccount *)activeSandboxAccount;
-(id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2 ;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(id)accountWithAltDSID:(id)arg1 scope:(long long)arg2 ;
-(void)signOutAllAccountsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_shouldCreateNewAccountForAccount:(id)arg1 options:(id)arg2 ;
-(SSAccount *)activeLockerAccount;
-(BOOL)isInProcessCacheDisabled;
-(void)_postAuthenticationActivityNotification;
-(void)setDefaultAccountName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)resetLocalAccount;
-(id)_cachedAccounts;
-(id)accountWithAccountName:(id)arg1 ;
-(BOOL)isAuthenticationActive;
-(id)_passwordEquivalentTokenFromAlternateAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 ;
-(void)removeAllAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)signOutAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

