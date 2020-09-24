/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFont;

@interface WBSCachedFont : NSObject {

	UIFont* _font;
	double _size;
	long long _fontWeight;

}

@property (nonatomic,retain) UIFont * font;                     //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double size;                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long fontWeight;              //@synthesize fontWeight=_fontWeight - In the implementation block
-(void)setFontWeight:(long long)arg1 ;
-(void)setSize:(double)arg1 ;
-(UIFont *)font;
-(double)size;
-(long long)fontWeight;
-(void)setFont:(UIFont *)arg1 ;
@end
