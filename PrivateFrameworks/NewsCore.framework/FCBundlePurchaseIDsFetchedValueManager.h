/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCFetchedValueManager.h>

@class FCFetchedValueObservable, FCBundleSubscriptionManager, NSString;

@interface FCBundlePurchaseIDsFetchedValueManager : NSObject <FCBundleSubscriptionChangeObserver, FCFetchedValueManager> {

	FCFetchedValueObservable* _observable;
	FCBundleSubscriptionManager* _bundleSubscriptionManager;

}

@property (nonatomic,readonly) FCFetchedValueObservable * observable;                                //@synthesize observable=_observable - In the implementation block
@property (nonatomic,readonly) FCBundleSubscriptionManager * bundleSubscriptionManager;              //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NFCopying> value; 
+(id)_valueWithBundleSubscriptionManager:(id)arg1 ;
-(FCBundleSubscriptionManager *)bundleSubscriptionManager;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 changeSet:(id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_bundleSubscriptionMayHaveChanged;
-(id)init;
-(id<NFCopying>)value;
-(id)initWithBundleSubscriptionManager:(id)arg1 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)fetchValueWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(FCFetchedValueObservable *)observable;
@end

