/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEORPPoiEnrichmentPlaceContext, GEOPDPlace, GEORPScorecardUpdate, GEORPScorecard;

@interface GEORPPoiEnrichmentUpdate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _imageIds;
	NSMutableArray* _imageUpdates;
	GEORPPoiEnrichmentPlaceContext* _placeContext;
	GEOPDPlace* _place;
	GEORPScorecardUpdate* _scorecardUpdate;
	GEORPScorecard* _scorecard;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _action;
	struct {
		unsigned has_action : 1;
		unsigned read_imageIds : 1;
		unsigned read_imageUpdates : 1;
		unsigned read_placeContext : 1;
		unsigned read_place : 1;
		unsigned read_scorecardUpdate : 1;
		unsigned read_scorecard : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,retain) NSMutableArray * imageIds; 
@property (nonatomic,readonly) BOOL hasScorecard; 
@property (nonatomic,retain) GEORPScorecard * scorecard; 
@property (nonatomic,retain) NSMutableArray * imageUpdates; 
@property (nonatomic,readonly) BOOL hasScorecardUpdate; 
@property (nonatomic,retain) GEORPScorecardUpdate * scorecardUpdate; 
@property (nonatomic,readonly) BOOL hasPlaceContext; 
@property (nonatomic,retain) GEORPPoiEnrichmentPlaceContext * placeContext; 
+(Class)imageIdType;
+(BOOL)isValid:(id)arg1 ;
+(Class)imageUpdateType;
-(GEOPDPlace *)place;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)action;
-(id)jsonRepresentation;
-(NSMutableArray *)imageIds;
-(void)addImageId:(id)arg1 ;
-(unsigned long long)imageIdsCount;
-(void)clearImageIds;
-(id)imageIdAtIndex:(unsigned long long)arg1 ;
-(void)setImageIds:(NSMutableArray *)arg1 ;
-(BOOL)hasPlace;
-(id)init;
-(BOOL)hasAction;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAction:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEORPScorecard *)scorecard;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)hasScorecard;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setScorecard:(GEORPScorecard *)arg1 ;
-(GEORPScorecardUpdate *)scorecardUpdate;
-(GEORPPoiEnrichmentPlaceContext *)placeContext;
-(void)addImageUpdate:(id)arg1 ;
-(void)setScorecardUpdate:(GEORPScorecardUpdate *)arg1 ;
-(void)setPlaceContext:(GEORPPoiEnrichmentPlaceContext *)arg1 ;
-(unsigned long long)imageUpdatesCount;
-(void)clearImageUpdates;
-(id)imageUpdateAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)imageUpdates;
-(void)setImageUpdates:(NSMutableArray *)arg1 ;
-(BOOL)hasScorecardUpdate;
-(id)dictionaryRepresentation;
-(BOOL)hasPlaceContext;
@end

