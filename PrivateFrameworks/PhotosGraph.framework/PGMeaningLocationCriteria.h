/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningLocationCriteria : NSObject <PGMeaningCriteria> {

	BOOL _excludeFrequentLocations;
	BOOL _excludeHomeWorkLocations;

}

@property (assign,nonatomic) BOOL excludeFrequentLocations;              //@synthesize excludeFrequentLocations=_excludeFrequentLocations - In the implementation block
@property (assign,nonatomic) BOOL excludeHomeWorkLocations;              //@synthesize excludeHomeWorkLocations=_excludeHomeWorkLocations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(BOOL)isValid;
-(NSString *)description;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setExcludeHomeWorkLocations:(BOOL)arg1 ;
-(void)setExcludeFrequentLocations:(BOOL)arg1 ;
-(BOOL)excludeFrequentLocations;
-(BOOL)excludeHomeWorkLocations;
@end

