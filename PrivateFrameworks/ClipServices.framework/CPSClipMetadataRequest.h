/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPSSessionProxyDelegate.h>

@class NSString, NSURL, CPSSessionProxy, CPSPromise;

@interface CPSClipMetadataRequest : NSObject <CPSSessionProxyDelegate> {

	NSString* _fullHash;
	NSURL* _requestURL;
	CPSSessionProxy* _sessionProxy;
	CPSPromise* _availabilityPromise;
	CPSPromise* _iconPromise;
	CPSPromise* _metadataPromise;

}

@property (getter=isLikelyAvailable,nonatomic,readonly) BOOL likelyAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 fallbackClipBundleID:(id)arg2 ;
-(void)requestDownloadedIconWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestMetadataWithCompletion:(/*^block*/id)arg1 ;
-(id)getClipMetadataSynchronously;
-(id)initWithURLHash:(id)arg1 ;
-(void)_setUpSessionProxyAndPromisesWithURL:(id)arg1 fallbackClipBundleID:(id)arg2 ;
-(BOOL)isLikelyAvailable;
-(void)proxy:(id)arg1 didDetermineAvailability:(BOOL)arg2 ;
-(void)proxyDidUpdateMetadata:(id)arg1 ;
-(void)proxyDidRetrieveBusinessIcon:(id)arg1 ;
-(void)proxy:(id)arg1 didRetrieveApplicationIcon:(id)arg2 ;
-(void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)proxyRemoteServiceDidCrash:(id)arg1 ;
-(id)getDownloadedIconURLSynchronously;
@end
