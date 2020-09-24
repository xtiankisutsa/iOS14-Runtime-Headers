/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYPeer;

@interface SYClock : PBCodable <NSCopying> {

	unsigned long long _version;
	SYPeer* _peer;

}

@property (nonatomic,retain) SYPeer * peer;                           //@synthesize peer=_peer - In the implementation block
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(void)initialize;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setPeer:(SYPeer *)arg1 ;
-(unsigned long long)increment;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SYPeer *)peer;
-(id)description;
-(id)dictionaryRepresentation;
-(id)_myDescription;
-(unsigned long long)increaseBy:(unsigned long long)arg1 ;
@end
