/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFLNetworkProvider.h>

@class CKContainer, NSString;

@interface PFLInvernessService : NSObject <PFLNetworkProvider> {

	CKContainer* _container;

}

@property (nonatomic,retain) CKContainer * container;               //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_teamIdentifier;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)_appBundleIdentifier;
-(id)init;
-(CKContainer *)container;
-(id)_taskConfigurationsFromPFLTasks:(id)arg1 ;
-(void)fetchTasks:(/*^block*/id)arg1 ;
-(void)fetchModelForTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)uploadDeviceResult:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

