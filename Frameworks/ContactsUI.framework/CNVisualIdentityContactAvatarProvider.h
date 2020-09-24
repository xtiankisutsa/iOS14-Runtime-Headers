/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarImageRenderingScope;
#import <ContactsUI/ContactsUI-Structs.h>
@class CNAvatarImageRenderer;

@interface CNVisualIdentityContactAvatarProvider : NSObject {

	CNAvatarImageRenderer* _avatarImageRenderer;
	id<CNAvatarImageRenderingScope> _renderingScope;

}

@property (nonatomic,retain) CNAvatarImageRenderer * avatarImageRenderer;                 //@synthesize avatarImageRenderer=_avatarImageRenderer - In the implementation block
@property (nonatomic,retain) id<CNAvatarImageRenderingScope> renderingScope;              //@synthesize renderingScope=_renderingScope - In the implementation block
+(id)descriptorForRequiredKeys;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(void)setAvatarImageRenderer:(CNAvatarImageRenderer *)arg1 ;
-(id<CNAvatarImageRenderingScope>)renderingScope;
-(id)avatarImageForContact:(id)arg1 withSize:(CGSize)arg2 includePlaceholder:(BOOL)arg3 imageHandler:(/*^block*/id)arg4 ;
-(CNAvatarImageRenderer *)avatarImageRenderer;
-(void)setRenderingScope:(id<CNAvatarImageRenderingScope>)arg1 ;
@end
