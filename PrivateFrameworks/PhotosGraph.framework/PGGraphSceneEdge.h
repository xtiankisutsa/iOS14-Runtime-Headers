/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@interface PGGraphSceneEdge : PGGraphOptimizedEdge {

	unsigned _numberOfAssets : 32;
	unsigned _numberOfHighConfidenceAssets : 32;
	unsigned _numberOfSearchConfidenceAssets : 32;
	unsigned _isReliable : 1;
	float _weight;

}

@property (assign,nonatomic) float weight;                                                     //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL isReliable;                                                //@synthesize isReliable=_isReliable - In the implementation block
@property (nonatomic,readonly) BOOL isSearchableForEvent; 
@property (nonatomic,readonly) unsigned long long numberOfAssets;                              //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets;                //@synthesize numberOfHighConfidenceAssets=_numberOfHighConfidenceAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSearchConfidenceAssets;              //@synthesize numberOfSearchConfidenceAssets=_numberOfSearchConfidenceAssets - In the implementation block
+(id)filter;
-(id)edgeDescription;
-(unsigned long long)numberOfAssets;
-(void)setWeight:(float)arg1 ;
-(id)initFromMomentNode:(id)arg1 toSceneNode:(id)arg2 weight:(float)arg3 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)numberOfHighConfidenceAssets;
-(void)setLocalProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(BOOL)isSearchableForEvent;
-(unsigned short)domain;
-(id)propertyDictionary;
-(id)label;
-(float)weight;
-(unsigned long long)numberOfSearchConfidenceAssets;
-(BOOL)isReliable;
@end

