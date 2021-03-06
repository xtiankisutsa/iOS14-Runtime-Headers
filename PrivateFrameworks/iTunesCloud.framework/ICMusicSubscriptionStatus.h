/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventPayloadValueJSONConvertible.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate, NSArray, NSString;

@interface ICMusicSubscriptionStatus : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSMutableCopying, NSCopying, NSSecureCoding> {

	NSDictionary* _responseDictionary;
	BOOL _isMinorAccountHolder;
	BOOL _hasFamily;
	BOOL _hasFamilyGreaterThanOneMember;
	BOOL _isHeadOfHousehold;
	BOOL _isMatchEnabled;
	NSDate* _expirationDate;
	BOOL _hasOfflineSlots;
	BOOL _isInFreeTrial;
	BOOL _isEligibleForFreeTrial;
	BOOL _isPurchaser;
	long long _carrierBundlingStatusType;
	long long _reasonType;
	long long _sourceType;
	long long _statusType;
	BOOL _isAdministrator;
	BOOL _isDiscoveryModeEligible;
	NSArray* _termsStatusList;
	NSString* _phoneNumber;
	NSString* _cellularOperatorName;
	NSString* _sessionIdentifier;
	long long _carrierBundlingErrorCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasCatalogPlaybackCapability; 
@property (nonatomic,readonly) BOOL hasAddToCloudLibraryCapability; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;                                       //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (getter=isMinorAccountHolder,nonatomic,readonly) BOOL minorAccountHolder;                          //@synthesize isMinorAccountHolder=_isMinorAccountHolder - In the implementation block
@property (nonatomic,readonly) BOOL hasFamily;                                                               //@synthesize hasFamily=_hasFamily - In the implementation block
@property (nonatomic,readonly) BOOL hasFamilyGreaterThanOneMember;                                           //@synthesize hasFamilyGreaterThanOneMember=_hasFamilyGreaterThanOneMember - In the implementation block
@property (getter=isHeadOfHousehold,nonatomic,readonly) BOOL headOfHousehold;                                //@synthesize isHeadOfHousehold=_isHeadOfHousehold - In the implementation block
@property (getter=isMatchEnabled,nonatomic,readonly) BOOL matchEnabled;                                      //@synthesize isMatchEnabled=_isMatchEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasOfflineSlots;                                                         //@synthesize hasOfflineSlots=_hasOfflineSlots - In the implementation block
@property (getter=isInFreeTrial,nonatomic,readonly) BOOL inFreeTrial;                                        //@synthesize isInFreeTrial=_isInFreeTrial - In the implementation block
@property (getter=isEligibleForFreeTrial,nonatomic,readonly) BOOL eligibleForFreeTrial;                      //@synthesize isEligibleForFreeTrial=_isEligibleForFreeTrial - In the implementation block
@property (getter=isPurchaser,nonatomic,readonly) BOOL purchaser;                                            //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (nonatomic,readonly) long long carrierBundlingStatusType;                                          //@synthesize carrierBundlingStatusType=_carrierBundlingStatusType - In the implementation block
@property (nonatomic,readonly) long long reasonType;                                                         //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,readonly) long long sourceType;                                                         //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) long long statusType;                                                         //@synthesize statusType=_statusType - In the implementation block
@property (getter=isAdministrator,nonatomic,readonly) BOOL administrator;                                    //@synthesize isAdministrator=_isAdministrator - In the implementation block
@property (getter=isDiscoveryModeEligible,nonatomic,readonly) BOOL discoveryModeEligible;                    //@synthesize isDiscoveryModeEligible=_isDiscoveryModeEligible - In the implementation block
@property (nonatomic,copy,readonly) NSArray * termsStatusList;                                               //@synthesize termsStatusList=_termsStatusList - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;                                                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * cellularOperatorName;                                         //@synthesize cellularOperatorName=_cellularOperatorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionIdentifier;                                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) long long carrierBundlingErrorCode;                                           //@synthesize carrierBundlingErrorCode=_carrierBundlingErrorCode - In the implementation block
@property (getter=isCloudMusicServiceEnabled,nonatomic,readonly) BOOL cloudMusicServiceEnabled; 
+(id)payloadValueFromJSONValue:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)mpc_jsonValue;
-(long long)reasonType;
-(NSString *)sessionIdentifier;
-(NSDictionary *)responseDictionary;
-(long long)sourceType;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasFamily;
-(BOOL)isDiscoveryModeEligible;
-(NSDate *)expirationDate;
-(long long)carrierBundlingStatusType;
-(BOOL)isMatchEnabled;
-(long long)statusType;
-(BOOL)isAdministrator;
-(BOOL)isInFreeTrial;
-(id)initWithResponseDictionary:(id)arg1 ;
-(BOOL)isMinorAccountHolder;
-(id)_init;
-(NSArray *)termsStatusList;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAddToCloudLibraryCapability;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasFamilyGreaterThanOneMember;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasCatalogPlaybackCapability;
-(BOOL)isHeadOfHousehold;
-(BOOL)isEligibleForFreeTrial;
-(BOOL)isPurchaser;
-(NSString *)cellularOperatorName;
-(void)_copySubscriptionStatusPropertiesToStatus:(id)arg1 withZone:(NSZone*)arg2 ;
-(BOOL)hasOfflineSlots;
-(BOOL)isCloudMusicServiceEnabled;
-(long long)carrierBundlingErrorCode;
-(NSString *)description;
-(BOOL)isEqualToStatus:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end

