/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBBlendingClientModelEngagementClientCacheAgeTracker : PBCodable <NSCopying> {

	NSString* _clientModelABGroup;
	NSString* _clientModelId;
	NSString* _consumerSubType;
	int _outcomeType;
	SCD_Struct_AT3 _has;

}

@property (assign,nonatomic) BOOL hasOutcomeType; 
@property (assign,nonatomic) int outcomeType;                            //@synthesize outcomeType=_outcomeType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelId; 
@property (nonatomic,retain) NSString * clientModelId;                   //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;                 //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModelABGroup; 
@property (nonatomic,retain) NSString * clientModelABGroup;              //@synthesize clientModelABGroup=_clientModelABGroup - In the implementation block
-(NSString *)consumerSubType;
-(NSString *)clientModelId;
-(BOOL)hasConsumerSubType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)outcomeType;
-(void)setOutcomeType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasClientModelId;
-(BOOL)readFrom:(id)arg1 ;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(void)setClientModelId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setClientModelABGroup:(NSString *)arg1 ;
-(BOOL)hasClientModelABGroup;
-(NSString *)clientModelABGroup;
-(void)setHasOutcomeType:(BOOL)arg1 ;
-(BOOL)hasOutcomeType;
-(id)outcomeTypeAsString:(int)arg1 ;
-(int)StringAsOutcomeType:(id)arg1 ;
@end
