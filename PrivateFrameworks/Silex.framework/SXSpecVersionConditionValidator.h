/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXConditionValidating.h>

@class NSString;

@interface SXSpecVersionConditionValidator : NSObject <SXConditionValidating> {

	NSString* _specVersion;

}

@property (nonatomic,copy,readonly) NSString * specVersion;              //@synthesize specVersion=_specVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateCondition:(id)arg1 context:(id)arg2 ;
-(id)initWithSpecVersion:(id)arg1 ;
-(NSString *)specVersion;
@end
