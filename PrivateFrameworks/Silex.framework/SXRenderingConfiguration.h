/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class SXHintsConfigurationOption, NSArray;

@interface SXRenderingConfiguration : SXJSONObject

@property (nonatomic,readonly) SXHintsConfigurationOption * hints; 
@property (nonatomic,readonly) NSArray * conditionKeys; 
-(NSArray *)conditionKeys;
-(SXHintsConfigurationOption *)hints;
@end
