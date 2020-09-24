/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASSetAudioDuckingDelay : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * duckingEventSyncDelay; 
@property (nonatomic,copy) NSNumber * preTriggerToDuckingEndDuration; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setAudioDuckingDelay;
+(id)setAudioDuckingDelayWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSNumber *)preTriggerToDuckingEndDuration;
-(void)setPreTriggerToDuckingEndDuration:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSNumber *)duckingEventSyncDelay;
-(void)setDuckingEventSyncDelay:(NSNumber *)arg1 ;
@end
