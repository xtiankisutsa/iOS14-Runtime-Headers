/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKFHIRResource, HKClinicalType;

@interface HKClinicalRecord : HKSample <NSSecureCoding, NSCopying> {

	NSString* _displayName;
	HKFHIRResource* _FHIRResource;

}

@property (copy,readonly) HKClinicalType * clinicalType; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) HKFHIRResource * FHIRResource; 
+(BOOL)supportsSecureCoding;
+(id)_newClinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 config:(/*^block*/id)arg8 ;
+(id)clinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)_setFHIRResource:(id)arg1 ;
-(HKClinicalType *)clinicalType;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(HKFHIRResource *)FHIRResource;
-(id)description;
-(void)_setDisplayName:(id)arg1 ;
@end

