/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASyncAppIdentifyingInfo.h>

@class NSString;

@interface SASyncNamedAppIdentifyingInfo : SASyncAppIdentifyingInfo

@property (nonatomic,copy) NSString * localizedBundleDisplayName; 
+(id)namedAppIdentifyingInfo;
+(id)namedAppIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)localizedBundleDisplayName;
-(void)setLocalizedBundleDisplayName:(NSString *)arg1 ;
@end

