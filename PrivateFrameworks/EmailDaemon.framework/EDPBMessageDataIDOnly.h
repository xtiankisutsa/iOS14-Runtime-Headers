/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDPBMessageDataIDOnly : PBCodable <NSCopying> {

	long long _messageId;
	SCD_Struct_ED12 _has;

}

@property (assign,nonatomic) BOOL hasMessageId; 
@property (assign,nonatomic) long long messageId;              //@synthesize messageId=_messageId - In the implementation block
-(void)setMessageId:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(long long)messageId;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasMessageId:(BOOL)arg1 ;
@end

