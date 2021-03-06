/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/CMSCoding.h>
#import <libobjc.A.dylib/REDonatedActionIdentifierProviding.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INMediaDestination : NSObject <CMSCoding, REDonatedActionIdentifierProviding, INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _mediaDestinationType;
	NSString* _playlistName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long mediaDestinationType;              //@synthesize mediaDestinationType=_mediaDestinationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * playlistName;                //@synthesize playlistName=_playlistName - In the implementation block
+(id)instanceFromCMSCoded:(id)arg1 ;
+(id)libraryDestination;
+(id)playlistDestinationWithName:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)cmsCoded;
-(unsigned long long)re_actionIdentifierHashValue;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMediaDestinationType:(long long)arg1 playlistName:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)hash;
-(long long)mediaDestinationType;
-(NSString *)description;
-(NSString *)playlistName;
@end

