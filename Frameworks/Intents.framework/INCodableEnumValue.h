/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCodableAttributeRelationComparing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableEnum, NSString, NSArray;

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, NSSecureCoding, NSCopying, INCodableCoding> {

	INCodableEnum* _codableEnum;
	long long _index;
	NSString* _name;
	NSString* _displayName;
	NSString* _displayNameLocID;
	NSArray* _synonyms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setCodableEnum:,nonatomic,__weak) INCodableEnum * _codableEnum;              //@synthesize codableEnum=_codableEnum - In the implementation block
@property (assign,nonatomic) long long index;                                                          //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayNameLocID;                                                //@synthesize displayNameLocID=_displayNameLocID - In the implementation block
@property (nonatomic,retain) NSArray * synonyms;                                                       //@synthesize synonyms=_synonyms - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
+(BOOL)supportsSecureCoding;
-(void)setIndex:(long long)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(long long)index;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)localizedDisplayNameForLanguage:(id)arg1 ;
-(void)_setCodableEnum:(id)arg1 ;
-(id)__INCodableEnumSynonymsKey;
-(id)__INCodableEnumDisplayNameIDKey;
-(id)__INCodableEnumDisplayNameKey;
-(id)__INCodableEnumNameKey;
-(id)__INCodableEnumIndexKey;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(NSString *)localizedDisplayName;
-(NSString *)displayNameLocID;
-(id)localizedDisplayNameWithLocalizer:(id)arg1 ;
-(void)setDisplayNameLocID:(NSString *)arg1 ;
-(void)setSynonyms:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(INCodableEnum *)_codableEnum;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)synonyms;
-(unsigned long long)hash;
-(NSString *)name;
-(id)dictionaryRepresentation;
@end

