/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {

	int _cd_rc;
	int _count;
	NSKnownKeysMappingStrategy* _keySearch;
	id _values[0];

}
+(id)alloc;
+(id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned long long)arg3 ;
+(id)initForKeys:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)initWithCoder:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(Class)classForKeyedUnarchiver;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)initWithDictionary:(id)arg1 ;
+(id)initWithSearchStrategy:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(const id*)knownKeyValuesPointer;
-(id)objectEnumerator;
-(const id*)values;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setValues:(id*)arg1 ;
-(BOOL)_tryRetain;
-(void)getKeys:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(oneway void)release;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allValues;
-(id)keyEnumerator;
-(unsigned long long)retainCount;
-(id)allKeys;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mapping;
-(BOOL)_isDeallocating;
-(id)retain;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)_valueCountByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
@end

