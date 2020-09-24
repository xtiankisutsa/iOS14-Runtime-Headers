/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitMessageLocation, NSMutableArray;

@interface AWDHomeKitMessageHomeLocationReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDHomeKitMessageLocation* _nearestLOI;
	unsigned _numIterationToConverge;
	NSMutableArray* _rawLocations;
	AWDHomeKitMessageLocation* _selectedHomeLocation;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * rawLocations;                                 //@synthesize rawLocations=_rawLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedHomeLocation; 
@property (nonatomic,retain) AWDHomeKitMessageLocation * selectedHomeLocation;              //@synthesize selectedHomeLocation=_selectedHomeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasNumIterationToConverge; 
@property (assign,nonatomic) unsigned numIterationToConverge;                               //@synthesize numIterationToConverge=_numIterationToConverge - In the implementation block
@property (nonatomic,readonly) BOOL hasNearestLOI; 
@property (nonatomic,retain) AWDHomeKitMessageLocation * nearestLOI;                        //@synthesize nearestLOI=_nearestLOI - In the implementation block
+(Class)rawLocationsType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(AWDHomeKitMessageLocation *)selectedHomeLocation;
-(void)setSelectedHomeLocation:(AWDHomeKitMessageLocation *)arg1 ;
-(void)addRawLocations:(id)arg1 ;
-(unsigned long long)rawLocationsCount;
-(void)clearRawLocations;
-(id)rawLocationsAtIndex:(unsigned long long)arg1 ;
-(void)setNearestLOI:(AWDHomeKitMessageLocation *)arg1 ;
-(BOOL)hasSelectedHomeLocation;
-(void)setNumIterationToConverge:(unsigned)arg1 ;
-(void)setHasNumIterationToConverge:(BOOL)arg1 ;
-(BOOL)hasNumIterationToConverge;
-(BOOL)hasNearestLOI;
-(NSMutableArray *)rawLocations;
-(void)setRawLocations:(NSMutableArray *)arg1 ;
-(unsigned)numIterationToConverge;
-(AWDHomeKitMessageLocation *)nearestLOI;
@end
