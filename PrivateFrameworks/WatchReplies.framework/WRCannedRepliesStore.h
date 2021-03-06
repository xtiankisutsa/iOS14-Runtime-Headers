/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class WRReplyStoreInfo, NSString, NSArray, NPSDomainAccessor, NSObject, NPSManager;

@interface WRCannedRepliesStore : NSObject {

	unsigned long long _category;
	WRReplyStoreInfo* _info;
	NSString* _cachedLanguage;
	NSArray* _cachedLocalizedReplies;
	NSArray* _cannedReplies;
	BOOL _didLocalizeDefaultReplies;
	BOOL _didMigrationCheck;
	NPSDomainAccessor* _domainAccessor;
	NSObject*<OS_os_log> _log;
	NPSManager* _npsManager;

}
+(id)supportedLanguages;
+(BOOL)isTinker;
+(BOOL)supportsEnhancedEditing;
-(id)domainAccessor;
-(id)initWithCategory:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)cannedReplies;
-(id)init;
-(id)npsManager;
-(BOOL)includeSmartReplies;
-(void)setIncludeSmartReplies:(BOOL)arg1 ;
-(void)setCannedReplies:(id)arg1 ;
-(void)invalidateCachesIfNeededForLanguage:(id)arg1 ;
-(void)loadCannedRepliesIfNeeded;
-(BOOL)usesFormalReplies;
-(id)localizedDefaultReply:(id)arg1 ;
-(id)localizedFormalDefaultReply:(id)arg1 ;
-(void)localizeDefaultRepliesIfNeeded;
-(void)saveReplies:(id)arg1 ;
-(BOOL)supportsSmartReplies;
-(id)migrateRepliesIfNeeded:(id)arg1 ;
-(id)repliesForLanguage:(id)arg1 ;
-(void)handleStoreChange;
@end

