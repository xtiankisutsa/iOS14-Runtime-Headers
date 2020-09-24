/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SANPSetPlaybackSpeed : SADomainCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) double scalingFactor; 
+(id)setPlaybackSpeed;
+(id)setPlaybackSpeedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(double)scalingFactor;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(void)setScalingFactor:(double)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end
