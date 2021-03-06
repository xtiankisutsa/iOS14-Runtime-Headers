/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@interface TDImageColorHistogram : NSObject {

	histogram_ARGB_t _histogram;
	vImage_Buffer* _imageBuffer;
	vImage_CGImageFormat* _imageFormat;
	BOOL _isMonochrome;

}

@property (readonly) BOOL isMonochrome; 
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(BOOL)isMonochrome;
-(double)intersection:(id)arg1 ;
@end

