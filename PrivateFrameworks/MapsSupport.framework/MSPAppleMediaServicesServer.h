/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/GEOAppleMediaServicesProtocol.h>

@class NSMutableSet, NSXPCListener, NSString;

@interface MSPAppleMediaServicesServer : NSObject <NSXPCListenerDelegate, GEOAppleMediaServicesProtocol> {

	NSMutableSet* _connections;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSMutableSet * connections;              //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)connections;
-(void)setConnections:(NSMutableSet *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)dealloc;
-(void)cleanConnections;
-(id)additionalParameterWithType:(long long)arg1 ;
-(id)init;
-(void)mediaResultWithIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 type:(long long)arg3 artworkSize:(CGSize)arg4 screenScale:(double)arg5 completion:(/*^block*/id)arg6 ;
-(NSXPCListener *)listener;
-(long long)AMSMediaTaskTypeFromGEOAppleMediaServicesMediaType:(long long)arg1 ;
@end
