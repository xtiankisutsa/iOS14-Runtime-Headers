/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSCurationDebugItemCluster.h>

@class NSArray, NSString;

@interface PLDataCluster : NSObject <CLSCurationDebugItemCluster> {

	NSArray* _objects;
	double _diameter;
	id _clustroid;
	double _score;

}

@property (readonly) NSArray * clsCurationItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * objects;                     //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) double diameter;                       //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) id clustroid;                          //@synthesize clustroid=_clustroid - In the implementation block
@property (assign,nonatomic) double score;                          //@synthesize score=_score - In the implementation block
+(id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3 ;
+(id)clusterWithObjects:(id)arg1 ;
-(NSArray *)clsCurationItems;
-(void)setObjects:(NSArray *)arg1 ;
-(id)universalDates;
-(NSArray *)objects;
-(id)locations;
-(double)score;
-(void)setScore:(double)arg1 ;
-(void)setClustroid:(id)arg1 ;
-(id)init;
-(id)meanUniversalDate;
-(id)meanRegion:(double)arg1 ;
-(id)approximateRegionWithMaximumRadius:(double)arg1 ;
-(void)setDiameter:(double)arg1 ;
-(double)diameter;
-(id)clustroid;
-(NSString *)description;
@end

