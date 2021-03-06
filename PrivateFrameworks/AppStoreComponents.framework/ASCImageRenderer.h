/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppStoreComponents/AppStoreComponents-Structs.h>
@interface ASCImageRenderer : NSObject {

	long long _renderingMode;
	CGSize _size;
	UIEdgeInsets _capInsets;

}

@property (nonatomic,readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets capInsets;               //@synthesize capInsets=_capInsets - In the implementation block
@property (nonatomic,readonly) long long renderingMode;              //@synthesize renderingMode=_renderingMode - In the implementation block
+(id)systemImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)bundleImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
-(long long)renderingMode;
-(UIEdgeInsets)capInsets;
-(BOOL)isEqual:(id)arg1 ;
-(id)imageWithActions:(/*^block*/id)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(unsigned long long)hash;
-(id)description;
-(id)initWithSize:(CGSize)arg1 capInsets:(UIEdgeInsets)arg2 renderingMode:(long long)arg3 ;
@end

