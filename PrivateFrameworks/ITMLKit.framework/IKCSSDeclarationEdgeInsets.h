/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration {

	BOOL _insetsFound;
	unsigned long long _edgeFlag;
	UIEdgeInsets _insets;

}

@property (assign) UIEdgeInsets insets;                      //@synthesize insets=_insets - In the implementation block
@property (assign) unsigned long long edgeFlag;              //@synthesize edgeFlag=_edgeFlag - In the implementation block
@property (assign) BOOL insetsFound;                         //@synthesize insetsFound=_insetsFound - In the implementation block
-(UIEdgeInsets)insets;
-(id)stringValue;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(id)description;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
-(void)setEdgeFlag:(unsigned long long)arg1 ;
-(unsigned long long)edgeFlag;
-(BOOL)insetsFound;
-(void)setInsetsFound:(BOOL)arg1 ;
@end

