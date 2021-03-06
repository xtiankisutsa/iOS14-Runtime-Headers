/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPSSessionObserving.h>

@protocol NSXPCProxyCreating;
@class NSString;

@interface CPSSessionRemoteObserver : NSObject <CPSSessionObserving> {

	id<NSXPCProxyCreating> _xpcProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerWithXPCProxy:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithXPCProxy:(id)arg1 ;
@end

