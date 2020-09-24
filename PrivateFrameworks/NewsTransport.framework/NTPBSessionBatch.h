/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, NTPBSession;

@interface NTPBSessionBatch : PBCodable <NSCopying> {

	NSMutableArray* _events;
	NSData* _identifier;
	NTPBSession* _session;

}

@property (nonatomic,readonly) BOOL hasSession; 
@property (nonatomic,retain) NTPBSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSData * identifier;                  //@synthesize identifier=_identifier - In the implementation block
+(id)nss_sessionBatchWithIdentifier;
+(Class)eventsType;
-(NSData *)identifier;
-(NSMutableArray *)events;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)eventsCount;
-(void)writeTo:(id)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSession:(NTPBSession *)arg1 ;
-(NTPBSession *)session;
-(BOOL)hasIdentifier;
-(void)setIdentifier:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSession;
-(id)description;
-(id)dictionaryRepresentation;
@end
