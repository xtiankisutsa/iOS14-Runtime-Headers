/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRTransactionKeyProtobuf, NSData;

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying> {

	unsigned long long _totalLength;
	unsigned long long _totalWritePosition;
	NSString* _identifier;
	_MRTransactionKeyProtobuf* _key;
	NSData* _packetData;
	SCD_Struct_MR2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) _MRTransactionKeyProtobuf * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasPacketData; 
@property (nonatomic,retain) NSData * packetData;                                //@synthesize packetData=_packetData - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLength; 
@property (assign,nonatomic) unsigned long long totalLength;                     //@synthesize totalLength=_totalLength - In the implementation block
@property (assign,nonatomic) BOOL hasTotalWritePosition; 
@property (assign,nonatomic) unsigned long long totalWritePosition;              //@synthesize totalWritePosition=_totalWritePosition - In the implementation block
+(void)initialize;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_MRTransactionKeyProtobuf *)key;
-(void)setKey:(_MRTransactionKeyProtobuf *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSData *)packetData;
-(void)setPacketData:(NSData *)arg1 ;
-(BOOL)hasPacketData;
-(void)setTotalLength:(unsigned long long)arg1 ;
-(void)setHasTotalLength:(BOOL)arg1 ;
-(BOOL)hasTotalLength;
-(unsigned long long)totalLength;
-(void)setTotalWritePosition:(unsigned long long)arg1 ;
-(void)setHasTotalWritePosition:(BOOL)arg1 ;
-(BOOL)hasTotalWritePosition;
-(unsigned long long)totalWritePosition;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)customDictionaryRepresentation;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
