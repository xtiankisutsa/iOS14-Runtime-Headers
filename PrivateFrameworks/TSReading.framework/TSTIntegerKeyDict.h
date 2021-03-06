/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSTIntegerKeyDict : NSObject {

	unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
-(void)removeFirstObject;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(unsigned)arg2 ;
-(id)allValues;
-(id)init;
-(long long)count;
-(void)removeObjectForKey:(unsigned)arg1 ;
-(id)objectForKey:(unsigned)arg1 ;
-(void)transformWithFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 andState:(void*)arg3 ;
@end

