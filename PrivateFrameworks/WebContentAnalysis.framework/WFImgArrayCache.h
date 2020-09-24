/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface WFImgArrayCache : NSObject {

	NSMutableString* imageAlternativeDescriptions;
	long long numberOfUnknownSizedImages;
	long long numberOfKnownImagePixels;

}
+(id)imgArrayCacheWithArray:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)dealloc;
-(long long)numberOfKnownImagePixels;
-(id)imageAlternativeDescriptions;
-(long long)numberOfUnknownSizedImages;
@end
