/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBFUserAuthenticationController;

@interface SBFAuthenticationAssertion : NSObject <BSDescriptionProviding> {

	BOOL _activated;
	BOOL _invalidated;
	long long _type;
	NSString* _identifier;
	SBFUserAuthenticationController* _controller;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) long long type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) SBFUserAuthenticationController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(void)invalidate;
-(void)dealloc;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)type;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 withController:(id)arg3 ;
-(BOOL)isValid;
-(id)succinctDescriptionBuilder;
-(id)publicDescription;
-(id)succinctDescription;
-(SBFUserAuthenticationController *)controller;
-(void)activate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end

