/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying> {

	NSData* _continuationMarker;
	NSMutableArray* _zoneSummarys;

}

@property (nonatomic,retain) NSMutableArray * zoneSummarys;              //@synthesize zoneSummarys=_zoneSummarys - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                //@synthesize continuationMarker=_continuationMarker - In the implementation block
+(Class)zoneSummaryType;
-(NSData *)continuationMarker;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContinuationMarker;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addZoneSummary:(id)arg1 ;
-(unsigned long long)zoneSummarysCount;
-(void)clearZoneSummarys;
-(id)zoneSummaryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)zoneSummarys;
-(void)setZoneSummarys:(NSMutableArray *)arg1 ;
@end

