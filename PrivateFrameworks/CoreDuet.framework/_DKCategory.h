/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class _DKCategoryType, NSString;

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	long long _integerValue;
	_DKCategoryType* _categoryType;

}

@property (assign) long long integerValue;                          //@synthesize integerValue=_integerValue - In the implementation block
@property (retain) _DKCategoryType * categoryType;                  //@synthesize categoryType=_categoryType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)categoryWithInteger:(long long)arg1 type:(id)arg2 ;
+(id)_categoryFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)fromPBCodable:(id)arg1 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
-(void)setIntegerValue:(long long)arg1 ;
-(long long)integerValue;
-(id)toPBCodable;
-(void)setCategoryType:(_DKCategoryType *)arg1 ;
-(id)initWithInteger:(long long)arg1 type:(id)arg2 cache:(id)arg3 ;
-(id)primaryValue;
-(long long)compareValue:(id)arg1 ;
-(double)doubleValue;
-(_DKCategoryType *)categoryType;
-(id)stringValue;
-(id)objectType;
-(long long)typeCode;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(NSString *)description;
@end

