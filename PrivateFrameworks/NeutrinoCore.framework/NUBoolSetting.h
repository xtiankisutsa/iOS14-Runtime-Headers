/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSetting.h>

@class NSNumber;

@interface NUBoolSetting : NUSetting

@property (readonly) NSNumber * defaultValue; 
@property (readonly) NSNumber * identityValue; 
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(NSNumber *)defaultValue;
-(BOOL)isValid:(out id*)arg1 ;
-(NSNumber *)identityValue;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
@end

