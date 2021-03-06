/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSString, NSDictionary;

@interface _HKEntitlements : NSObject {

	NSString* _applicationIdentifier;
	NSDictionary* _entitlementValues;

}

@property (nonatomic,copy,readonly) NSDictionary * entitlementValues;              //@synthesize entitlementValues=_entitlementValues - In the implementation block
+(id)entitlementsWithConnection:(id)arg1 error:(id*)arg2 ;
+(id)_allowedEntitlementsSet;
+(id)entitlementsForCurrentTaskWithError:(id*)arg1 ;
+(id)_entitlementsWithSecTask:(SecTaskRef)arg1 valueOverrides:(id)arg2 error:(id*)arg3 ;
+(id)entitlementsWithApplicationIdentifier:(id)arg1 ;
+(id)entitlementsWithDictionary:(id)arg1 ;
+(void)_setEntitlementsForCurrentTask:(id)arg1 ;
+(id)_containerAppExtensionEntitlementsForCurrentTask;
-(id)valueForEntitlement:(id)arg1 ;
-(id)typesForWriteAuthorizationOverride;
-(id)applicationIdentifier;
-(id)_initWithEntitlementValues:(id)arg1 ;
-(BOOL)hasPrivateMetadataAccess;
-(id)stringForEntitlement:(id)arg1 ;
-(id)init;
-(NSDictionary *)entitlementValues;
-(id)typesForReadAuthorizationOverride;
-(BOOL)arrayEntitlement:(id)arg1 containsString:(id)arg2 ;
-(id)_typesFromIdentifierArray:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)hasAccessEntitlementWithIdentifer:(id)arg1 ;
-(id)description;
-(BOOL)hasPrivateAccessEntitlementWithIdentifer:(id)arg1 ;
@end

