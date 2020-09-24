/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SearchUI/SearchUI-Structs.h>
@interface SearchUITLKImageConverter : NSObject
+(id)imageForSFImage:(id)arg1 ;
+(id)imageForSFImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(unsigned long long)tlkCornerRoundingStyleForSFCornerRoundingStyle:(int)arg1 ;
+(BOOL)imageIsProbablyOpaque:(id)arg1 tlkImage:(id)arg2 ;
+(void)executeBlock:(/*^block*/id)arg1 async:(BOOL)arg2 ;
+(id)imagesForSFImages:(id)arg1 ;
+(BOOL)checkTransparencyForImageAtCorners:(CGImageRef)arg1 tlkImage:(id)arg2 uiImage:(id)arg3 ;
+(BOOL)hasTransparencyAtPoint:(CGPoint)arg1 forCGImage:(CGImageRef)arg2 ;
@end
