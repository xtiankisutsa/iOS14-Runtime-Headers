/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MARelation.h>

@class MARelation;

@interface MATransitiveClosureRelation : MARelation {

	MARelation* _base;

}

@property (nonatomic,readonly) MARelation * base;              //@synthesize base=_base - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(MARelation *)base;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)inverse;
-(id)transitiveClosure;
-(id)initWithBase:(id)arg1 ;
-(id)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
@end

