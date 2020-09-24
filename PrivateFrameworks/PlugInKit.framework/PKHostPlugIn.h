/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlugInKit/PKPlugInCore.h>
#import <libobjc.A.dylib/PKPlugInPrivate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, PKCorePlugInProtocol, PKPlugIn;
@class NSUUID, NSDate, NSXPCConnection, NSDictionary, NSUserDefaults, NSObject, NSString, NSArray, Protocol, NSBundle, NSURL;

@interface PKHostPlugIn : PKPlugInCore <PKPlugInPrivate, NSXPCConnectionDelegate> {

	BOOL _terminating;
	unsigned _useCount;
	NSUserDefaults* _defaults;
	/*^block*/id _notificationBlock;
	NSXPCConnection* _pluginConnection;
	NSObject*<OS_dispatch_queue> __replyQueue;
	NSObject*<OS_dispatch_queue> __syncQueue;
	NSObject*<OS_dispatch_queue> __startQueue;
	id<PKCorePlugInProtocol> _service;
	id<PKCorePlugInProtocol> _syncService;
	NSUUID* _supersedingUUID;
	id<PKPlugIn> _supersededBy;
	NSUUID* _multipleInstanceUUID;
	NSString* _serviceExtension;
	NSDictionary* _discoveryExtensions;
	NSArray* _sandboxExtensions;
	id _queuedHostPrincipal;
	Protocol* _queuedHostProtocol;
	unsigned long long _state;
	id _plugInPrincipal;
	id _embeddedPrincipal;
	NSBundle* _embeddedBundle;
	NSDate* _beganUsingAt;
	NSDictionary* _sourceForm;
	NSDictionary* _environment;

}

@property (retain) NSXPCConnection * pluginConnection;                             //@synthesize pluginConnection=_pluginConnection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _replyQueue;                       //@synthesize _replyQueue=__replyQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _syncQueue;                        //@synthesize _syncQueue=__syncQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _startQueue;                       //@synthesize _startQueue=__startQueue - In the implementation block
@property (retain) id<PKCorePlugInProtocol> service;                               //@synthesize service=_service - In the implementation block
@property (retain) id<PKCorePlugInProtocol> syncService;                           //@synthesize syncService=_syncService - In the implementation block
@property (retain) NSUUID * supersedingUUID;                                       //@synthesize supersedingUUID=_supersedingUUID - In the implementation block
@property (__weak) id<PKPlugIn> supersededBy;                                      //@synthesize supersededBy=_supersededBy - In the implementation block
@property (retain) NSUUID * multipleInstanceUUID;                                  //@synthesize multipleInstanceUUID=_multipleInstanceUUID - In the implementation block
@property (readonly) NSUUID * effectiveUUID; 
@property (retain) NSString * serviceExtension;                                    //@synthesize serviceExtension=_serviceExtension - In the implementation block
@property (retain) NSDictionary * discoveryExtensions;                             //@synthesize discoveryExtensions=_discoveryExtensions - In the implementation block
@property (retain) NSArray * sandboxExtensions;                                    //@synthesize sandboxExtensions=_sandboxExtensions - In the implementation block
@property (retain) id queuedHostPrincipal;                                         //@synthesize queuedHostPrincipal=_queuedHostPrincipal - In the implementation block
@property (retain) Protocol * queuedHostProtocol;                                  //@synthesize queuedHostProtocol=_queuedHostProtocol - In the implementation block
@property (assign) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (assign) unsigned useCount;                                              //@synthesize useCount=_useCount - In the implementation block
@property (retain) id plugInPrincipal;                                             //@synthesize plugInPrincipal=_plugInPrincipal - In the implementation block
@property (retain) id embeddedPrincipal;                                           //@synthesize embeddedPrincipal=_embeddedPrincipal - In the implementation block
@property (retain) NSBundle * embeddedBundle;                                      //@synthesize embeddedBundle=_embeddedBundle - In the implementation block
@property (readonly) NSUserDefaults * defaults;                                    //@synthesize defaults=_defaults - In the implementation block
@property (assign) BOOL terminating;                                               //@synthesize terminating=_terminating - In the implementation block
@property (retain) NSDate * beganUsingAt;                                          //@synthesize beganUsingAt=_beganUsingAt - In the implementation block
@property (retain) NSDictionary * sourceForm;                                      //@synthesize sourceForm=_sourceForm - In the implementation block
@property (retain) NSDictionary * environment;                                     //@synthesize environment=_environment - In the implementation block
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDate * timestamp; 
@property (retain) NSDictionary * extensionState; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * version; 
@property (readonly) NSURL * url; 
@property (readonly) NSURL * containingUrl; 
@property (readonly) BOOL onSystemVolume; 
@property (readonly) NSDictionary * bundleInfoDictionary; 
@property (readonly) NSDictionary * plugInDictionary; 
@property (readonly) NSDictionary * attributes; 
@property (readonly) NSDictionary * entitlements; 
@property (readonly) NSString * localizedName; 
@property (readonly) NSString * localizedShortName; 
@property (readonly) NSString * localizedContainingName; 
@property (readonly) NSDictionary * localizedFileProviderActionNames; 
@property (assign) long long userElection; 
@property (readonly) BOOL spent; 
@property (readonly) BOOL active; 
@property (copy) id notificationBlock;                                             //@synthesize notificationBlock=_notificationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)plugInPrincipal;
-(BOOL)active;
-(NSUserDefaults *)defaults;
-(BOOL)isSandboxed;
-(id)embeddedPrincipal;
-(NSXPCConnection *)pluginConnection;
-(NSObject*<OS_dispatch_queue>)_startQueue;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(NSString *)serviceExtension;
-(long long)userElection;
-(void)messageTraceUsage;
-(void)unwind:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(void)setPlugInPrincipal:(id)arg1 ;
-(void)setEmbeddedPrincipal:(id)arg1 ;
-(NSUUID *)supersedingUUID;
-(id)initWithForm:(id)arg1 ;
-(void)updateFromForm:(id)arg1 ;
-(BOOL)useBundle:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)extensionState;
-(void)setUseCount:(unsigned)arg1 ;
-(void)setSupersededBy:(id<PKPlugIn>)arg1 ;
-(void)setSandboxExtensions:(NSArray *)arg1 ;
-(id<PKCorePlugInProtocol>)syncService;
-(NSDate *)beganUsingAt;
-(id)notificationBlock;
-(void)endUsing:(/*^block*/id)arg1 ;
-(void)setQueuedHostPrincipal:(id)arg1 ;
-(id)queuedHostPrincipal;
-(BOOL)spent;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(NSUUID *)effectiveUUID;
-(NSUUID *)multipleInstanceUUID;
-(void)setServiceExtension:(NSString *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(NSArray *)sandboxExtensions;
-(NSObject*<OS_dispatch_queue>)_replyQueue;
-(void)setSourceForm:(NSDictionary *)arg1 ;
-(void)suspend;
-(void)setUserElection:(long long)arg1 ;
-(void)setReplyQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_syncQueue;
-(void)set_syncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)createInstanceWithUUID:(id)arg1 ;
-(NSDictionary *)discoveryExtensions;
-(Protocol *)queuedHostProtocol;
-(void)set_startQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)changeState:(unsigned long long)arg1 ;
-(void)setExtensionState:(NSDictionary *)arg1 ;
-(void)setSupersedingUUID:(NSUUID *)arg1 ;
-(id<PKCorePlugInProtocol>)service;
-(void)resume;
-(NSDictionary *)sourceForm;
-(BOOL)beginUsingWithError:(id*)arg1 ;
-(BOOL)endUsingWithError:(id*)arg1 ;
-(void)setBootstrapWithSubsystemOptions:(id)arg1 ;
-(NSBundle *)embeddedBundle;
-(void)set_replyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)environment;
-(BOOL)loadExtensions:(id)arg1 error:(id*)arg2 ;
-(void)beginUsing:(/*^block*/id)arg1 ;
-(void)setBeganUsingAt:(NSDate *)arg1 ;
-(void)setPluginConnection:(NSXPCConnection *)arg1 ;
-(void)setQueuedHostProtocol:(Protocol *)arg1 ;
-(BOOL)beginUsingWithSubsystemOptions:(id)arg1 error:(id*)arg2 ;
-(void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2 ;
-(void)setDiscoveryExtensions:(NSDictionary *)arg1 ;
-(void)setMultipleInstanceUUID:(NSUUID *)arg1 ;
-(void)startPlugInSynchronously:(BOOL)arg1 subsystemOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)state;
-(void)setEmbeddedBundle:(NSBundle *)arg1 ;
-(unsigned)useCount;
-(BOOL)terminating;
-(void)setNotificationBlock:(id)arg1 ;
-(void)setSyncService:(id<PKCorePlugInProtocol>)arg1 ;
-(void)preparePlugInUsingService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTerminating:(BOOL)arg1 ;
-(NSString *)description;
-(id<PKPlugIn>)supersededBy;
-(void)setService:(id<PKCorePlugInProtocol>)arg1 ;
-(void)beginUsingWithSubsystemOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
