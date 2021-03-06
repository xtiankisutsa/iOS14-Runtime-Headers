/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/CXNetworkExtensionVoIPXPCClient.h>

@class NSXPCConnection;

@interface NEAppPushCallKitXPCClient : NSObject <CXNetworkExtensionVoIPXPCClient> {

	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                   //@synthesize lock=_lock - In the implementation block
-(void)invalidate;
-(os_unfair_lock_s)lock;
-(NSXPCConnection *)connection;
-(void)dealloc;
-(void)voipNetworkExtensionPayloadReceived:(id)arg1 mustPostCall:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)voipNetworkExtensionRegistrationFailed;
-(void)unregisterVoIPMessagePayload;
-(id)init;
-(void)registerVoIPMessagePayload;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

