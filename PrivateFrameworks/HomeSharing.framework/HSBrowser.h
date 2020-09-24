/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol HSBrowserDelegate, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject, NSNetServiceBrowser;

@interface HSBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	long long _browserType;
	NSString* _homeSharingGroupID;
	id<HSBrowserDelegate> _delegate;
	NSMutableArray* _availableLibraries;
	NSMutableArray* _resolvingServices;
	NSMutableArray* _librariesPendingRemoval;
	NSObject*<OS_dispatch_queue> _serviceBrowserQueue;
	NSString* _serviceType;
	NSNetServiceBrowser* _serviceBrowser;

}

@property (nonatomic,retain) NSMutableArray * availableLibraries;                           //@synthesize availableLibraries=_availableLibraries - In the implementation block
@property (nonatomic,retain) NSMutableArray * resolvingServices;                            //@synthesize resolvingServices=_resolvingServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * librariesPendingRemoval;                      //@synthesize librariesPendingRemoval=_librariesPendingRemoval - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serviceBrowserQueue;              //@synthesize serviceBrowserQueue=_serviceBrowserQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                                 //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSNetServiceBrowser * serviceBrowser;                          //@synthesize serviceBrowser=_serviceBrowser - In the implementation block
@property (nonatomic,readonly) long long browserType;                                       //@synthesize browserType=_browserType - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeSharingGroupID;                          //@synthesize homeSharingGroupID=_homeSharingGroupID - In the implementation block
@property (assign,nonatomic,__weak) id<HSBrowserDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeSharingBrowserWithGroupID:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)start;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)setDelegate:(id<HSBrowserDelegate>)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(id<HSBrowserDelegate>)delegate;
-(NSString *)homeSharingGroupID;
-(void)stop;
-(NSString *)serviceType;
-(NSNetServiceBrowser *)serviceBrowser;
-(void)setServiceBrowser:(NSNetServiceBrowser *)arg1 ;
-(long long)browserType;
-(id)initWithBrowserType:(long long)arg1 groupID:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serviceBrowserQueue;
-(NSMutableArray *)availableLibraries;
-(NSMutableArray *)resolvingServices;
-(NSMutableArray *)librariesPendingRemoval;
-(void)_removalTimerFired:(id)arg1 ;
-(void)setAvailableLibraries:(NSMutableArray *)arg1 ;
-(void)setResolvingServices:(NSMutableArray *)arg1 ;
-(void)setLibrariesPendingRemoval:(NSMutableArray *)arg1 ;
-(void)setServiceBrowserQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
