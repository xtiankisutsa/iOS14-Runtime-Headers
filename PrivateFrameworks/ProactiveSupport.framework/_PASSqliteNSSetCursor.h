/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASSqliteCollectionsCursor.h>

@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {

	NSSet* _set;
	id _currentValue;
	NSEnumerator* _valuesEnumerator;

}

@property (nonatomic,retain) NSSet * collection; 
+(const char*)sqliteCreateTableStatement;
+(const char*)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg1 ;
-(id)currentIndexedValue;
-(void)setCollection:(NSSet *)arg1 ;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(BOOL)currentIndexEof;
-(void)stepIndexedRow;
-(void)finalizeConstraints;
-(BOOL)currentIndexedRowSatisfiesConstraints;
@end

