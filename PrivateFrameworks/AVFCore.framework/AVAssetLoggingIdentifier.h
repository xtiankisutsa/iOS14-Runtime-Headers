/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVLoggingIdentifier.h>

@class AVAssetLoggingIdentifierInternal, NSString;

@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier> {

	AVAssetLoggingIdentifierInternal* _priv;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)makeDerivedIdentifier;
-(NSString *)name;
-(NSString *)description;
@end
