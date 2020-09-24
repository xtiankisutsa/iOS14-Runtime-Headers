/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSURL, NSNumber, NSString;

@interface SAAlarmAlarmModification : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * addedFrequency; 
@property (nonatomic,copy) NSURL * alarmId; 
@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSArray * removedFrequency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alarmModification;
+(id)alarmModificationWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)hour;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSURL *)alarmId;
-(void)setHour:(NSNumber *)arg1 ;
-(NSNumber *)enabled;
-(void)setAlarmId:(NSURL *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSNumber *)minute;
-(void)setEnabled:(NSNumber *)arg1 ;
-(NSArray *)addedFrequency;
-(void)setAddedFrequency:(NSArray *)arg1 ;
-(void)setMinute:(NSNumber *)arg1 ;
-(NSArray *)removedFrequency;
-(void)setRemovedFrequency:(NSArray *)arg1 ;
@end
