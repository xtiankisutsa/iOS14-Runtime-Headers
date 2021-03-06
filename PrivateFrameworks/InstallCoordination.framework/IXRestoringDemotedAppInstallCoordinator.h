/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXAppInstallCoordinator.h>
#import <libobjc.A.dylib/IXCoordinatorWithUserDataPromise.h>
#import <libobjc.A.dylib/IXCoordinatorWithImportance.h>

@class NSString;

@interface IXRestoringDemotedAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithUserDataPromise, IXCoordinatorWithImportance>

@property (nonatomic,readonly) BOOL hasUserDataPromise; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2 ;
+(void)enumerateCoordinatorsUsingBlock:(/*^block*/id)arg1 ;
+(id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
+(BOOL)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)validInstallTypes;
@end

