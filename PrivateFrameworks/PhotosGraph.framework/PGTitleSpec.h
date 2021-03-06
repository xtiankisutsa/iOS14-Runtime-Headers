/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGTitleSpecDelegate;
@class NSString, NSArray;

@interface PGTitleSpec : NSObject {

	BOOL _hasLineBreak;
	BOOL _insertNonBreakableSpace;
	BOOL _hasSpecArgumentHandlingLineBreakBehavior;
	NSString* _format;
	NSArray* _arguments;
	unsigned long long _weekdayCriteria;
	long long _titleCategory;
	id<PGTitleSpecDelegate> _delegate;

}

@property (retain) NSArray * arguments;                                        //@synthesize arguments=_arguments - In the implementation block
@property (assign) BOOL hasLineBreak;                                          //@synthesize hasLineBreak=_hasLineBreak - In the implementation block
@property (assign) BOOL insertNonBreakableSpace;                               //@synthesize insertNonBreakableSpace=_insertNonBreakableSpace - In the implementation block
@property (assign) BOOL hasSpecArgumentHandlingLineBreakBehavior;              //@synthesize hasSpecArgumentHandlingLineBreakBehavior=_hasSpecArgumentHandlingLineBreakBehavior - In the implementation block
@property (assign) unsigned long long weekdayCriteria;                         //@synthesize weekdayCriteria=_weekdayCriteria - In the implementation block
@property (readonly) NSString * format;                                        //@synthesize format=_format - In the implementation block
@property (readonly) long long titleCategory;                                  //@synthesize titleCategory=_titleCategory - In the implementation block
@property (__weak) id<PGTitleSpecDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
+(long long)_weekdayForWeekdayCriteria:(unsigned long long)arg1 ;
+(id)specWithFormat:(id)arg1 titleCategory:(long long)arg2 ;
-(NSString *)format;
-(void)setArguments:(NSArray *)arg1 ;
-(NSArray *)arguments;
-(long long)titleCategory;
-(void)setDelegate:(id<PGTitleSpecDelegate>)arg1 ;
-(id<PGTitleSpecDelegate>)delegate;
-(id)description;
-(id)initWithFormat:(id)arg1 titleCategory:(long long)arg2 ;
-(id)titleWithMomentNodes:(id)arg1 ;
-(id)titleWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)_titleWithResolvedArguments:(id)arg1 ;
-(BOOL)_resolveRequiredInputForArgument:(id)arg1 ;
-(id)_appendArguments:(id)arg1 toFormatString:(id)arg2 ;
-(BOOL)_canFulfillWeekdayCriteriaWithMomentNodes:(id)arg1 ;
-(BOOL)hasLineBreak;
-(void)setHasLineBreak:(BOOL)arg1 ;
-(unsigned long long)weekdayCriteria;
-(void)setWeekdayCriteria:(unsigned long long)arg1 ;
-(BOOL)insertNonBreakableSpace;
-(void)setInsertNonBreakableSpace:(BOOL)arg1 ;
-(BOOL)hasSpecArgumentHandlingLineBreakBehavior;
-(void)setHasSpecArgumentHandlingLineBreakBehavior:(BOOL)arg1 ;
@end

