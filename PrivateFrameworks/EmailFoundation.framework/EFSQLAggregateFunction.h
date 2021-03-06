/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@class NSString, NSArray;

@interface EFSQLAggregateFunction : NSObject <EFSQLValueExpressable> {

	NSString* _name;
	NSArray* _arguments;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;                      //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)avg:(id)arg1 ;
+(id)total:(id)arg1 ;
+(id)sum:(id)arg1 ;
+(id)min:(id)arg1 ;
+(id)max:(id)arg1 ;
+(id)count:(id)arg1 ;
+(id)avgDistinct:(id)arg1 ;
+(id)countDistinct:(id)arg1 ;
+(id)groupConcat:(id)arg1 separator:(id)arg2 ;
+(id)maxDistinct:(id)arg1 ;
+(id)minDistinct:(id)arg1 ;
+(id)sumDistinct:(id)arg1 ;
+(id)totalDistinct:(id)arg1 ;
-(NSArray *)arguments;
-(NSString *)ef_SQLExpression;
-(id)ef_SQLIsolatedExpression;
-(id)initWithName:(id)arg1 arguments:(id)arg2 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(NSString *)name;
@end

