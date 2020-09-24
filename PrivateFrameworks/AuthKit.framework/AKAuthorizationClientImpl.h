/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAuthorizationClientProtocol.h>

@protocol AKAuthorizationUIProvider;
@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol> {

	id<AKAuthorizationUIProvider> _uiProvider;

}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
-(void)presentAuthorizationUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AKAuthorizationUIProvider>)uiProvider;
-(void)setUiProvider:(id<AKAuthorizationUIProvider>)arg1 ;
@end
