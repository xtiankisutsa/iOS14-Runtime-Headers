/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {

	NSSQLUpdateColumnsIntermediate* _updateColumns;

}
-(BOOL)isUpdateScoped;
-(void)dealloc;
-(void)setUpdateColumnsIntermediate:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)updateColumnsIntermediate;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3 ;
@end
