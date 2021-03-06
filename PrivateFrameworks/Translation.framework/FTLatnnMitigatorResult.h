/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTLatnnMitigatorResult : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const LatnnMitigatorResult* _root;

}

@property (nonatomic,readonly) BOOL processed; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) double threshold; 
@property (nonatomic,readonly) double score; 
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)score;
-(double)threshold;
-(id)initWithFlatbuffData:(id)arg1 root:(const LatnnMitigatorResult*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::LatnnMitigatorResult>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const LatnnMitigatorResult*)arg2 ;
-(BOOL)processed;
@end

