/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSCredentialEntryField.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>

@class IKTextFieldElement, NSString;

@interface VSITMLCredentialEntryField : VSCredentialEntryField <IKAppKeyboardDelegate> {

	IKTextFieldElement* _associatedTextFieldElement;

}

@property (nonatomic,retain) IKTextFieldElement * associatedTextFieldElement;              //@synthesize associatedTextFieldElement=_associatedTextFieldElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)setAssociatedTextFieldElement:(IKTextFieldElement *)arg1 ;
-(IKTextFieldElement *)associatedTextFieldElement;
@end
