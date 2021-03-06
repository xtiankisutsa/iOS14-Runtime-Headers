/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long __versionNumber;
	NSMutableDictionary* _propertyCache;
	void* _reserved1;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain) NSMutableDictionary * propertyCache; 
+(void)initialize;
+(BOOL)accessInstanceVariablesDirectly;
-(const id*)knownKeyValuesPointer;
-(unsigned)_versionNumber;
-(id)valueForKey:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)_snapshot_;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(NSMutableDictionary *)propertyCache;
-(void)setPropertyCache:(NSMutableDictionary *)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
@end

