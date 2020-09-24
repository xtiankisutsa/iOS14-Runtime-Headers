/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface TPStringTable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _table;

}

@property (readonly) unsigned long long _count; 
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSHashTable * table;                             //@synthesize table=_table - In the implementation block
+(id)defaultTable;
-(id)initWithIdentifier:(id)arg1 ;
-(NSHashTable *)table;
-(id)setWithArray:(id)arg1 ;
-(id)stringWithString:(id)arg1 ;
-(void)setTable:(NSHashTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)_count;
@end
