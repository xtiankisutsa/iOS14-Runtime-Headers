/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiCandidateNetwork.h>

@protocol TBScore;
@class NSString, NSSet, NSDate;

@interface WiFiWalletPass : NSObject <WiFiCandidateNetwork> {

	BOOL matched;
	unsigned venueType;
	NSString* SSID;
	NSString* password;
	NSSet* attributes;
	NSSet* accessPoints;
	id<TBScore> qualityScore;
	id<TBScore> popularityScore;
	unsigned long long venueGroup;
	unsigned long long type;
	NSString* _uniqueIdentifier;
	NSString* _serialNumber;
	NSDate* _relevantDate;
	NSString* _localizedDescription;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                        //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSDate * relevantDate;                          //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * SSID; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSSet * attributes; 
@property (assign,nonatomic) BOOL matched; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TBScore> popularityScore; 
@property (nonatomic,readonly) id<TBScore> qualityScore; 
-(NSString *)localizedDescription;
-(NSString *)SSID;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(unsigned)venueType;
-(NSSet *)attributes;
-(void)setSSID:(NSString *)arg1 ;
-(unsigned long long)venueGroup;
-(NSString *)uniqueIdentifier;
-(unsigned long long)type;
-(id<TBScore>)qualityScore;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(BOOL)matched;
-(NSString *)password;
-(NSDate *)relevantDate;
-(long long)source;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)description;
-(NSSet *)accessPoints;
-(void)setMatched:(BOOL)arg1 ;
-(id<TBScore>)popularityScore;
-(BOOL)containsAccessPointMatchingBSSIDs:(id)arg1 ;
@end
