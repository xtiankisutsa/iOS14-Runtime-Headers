/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class NSArray, NSURL;

@interface ADEspressoInferenceDescriptor : NSObject {

	NSArray* _layoutNames;
	NSURL* _networkURL;
	NSURL* _networkVersionString;

}

@property (nonatomic,copy,readonly) NSURL * networkURL;                        //@synthesize networkURL=_networkURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * networkVersionString;              //@synthesize networkVersionString=_networkVersionString - In the implementation block
+(id)descriptorWithName:(id)arg1 pixelFormat:(unsigned)arg2 size:(CGSize)arg3 isInput:(BOOL)arg4 ;
+(id)descriptorWithName:(id)arg1 pixelFormat:(unsigned)arg2 portraitSize:(CGSize)arg3 landscapeSize:(CGSize)arg4 isInput:(BOOL)arg5 ;
-(id)configurationNameForLayout:(unsigned long long)arg1 ;
-(NSURL *)networkURL;
-(NSURL *)networkVersionString;
-(id)initWithNetworkProvider:(id)arg1 ;
@end

