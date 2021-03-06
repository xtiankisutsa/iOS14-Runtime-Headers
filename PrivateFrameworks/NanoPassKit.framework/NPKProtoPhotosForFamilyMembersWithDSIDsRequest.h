/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoPhotosForFamilyMembersWithDSIDsRequest : PBRequest <NSCopying> {

	NSMutableArray* _requestDSIDs;

}

@property (nonatomic,retain) NSMutableArray * requestDSIDs;              //@synthesize requestDSIDs=_requestDSIDs - In the implementation block
+(Class)requestDSIDsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addRequestDSIDs:(id)arg1 ;
-(unsigned long long)requestDSIDsCount;
-(void)clearRequestDSIDs;
-(id)requestDSIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)requestDSIDs;
-(void)setRequestDSIDs:(NSMutableArray *)arg1 ;
@end

