/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JavaScriptCore/JSContext.h>

@interface CRJSContext : JSContext
+(id)sharedContext;
-(id)_cardWithTitle:(id)arg1 cardSections:(id)arg2 interaction:(id)arg3 error:(id*)arg4 ;
-(id)initWithVirtualMachine:(id)arg1 ;
-(void)evaluateScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createCard:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

