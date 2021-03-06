/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBHIDInterface, NSString;

@interface SBHIDUILockAssertion : NSObject <BSInvalidatable> {

	BOOL _suspendProximitySensor;
	BOOL _suspendMultitouch;
	BOOL _pocketTouchesExpected;
	BOOL _disableTapToWake;
	long long _source;
	SBHIDInterface* _HIDInterface;
	NSString* _reason;

}

@property (assign,nonatomic) BOOL suspendProximitySensor;                       //@synthesize suspendProximitySensor=_suspendProximitySensor - In the implementation block
@property (assign,nonatomic) BOOL suspendMultitouch;                            //@synthesize suspendMultitouch=_suspendMultitouch - In the implementation block
@property (assign,nonatomic) BOOL pocketTouchesExpected;                        //@synthesize pocketTouchesExpected=_pocketTouchesExpected - In the implementation block
@property (assign,nonatomic) BOOL disableTapToWake;                             //@synthesize disableTapToWake=_disableTapToWake - In the implementation block
@property (assign,nonatomic) long long source;                                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) SBHIDInterface * HIDInterface;              //@synthesize HIDInterface=_HIDInterface - In the implementation block
@property (nonatomic,copy) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)setDisableTapToWake:(BOOL)arg1 ;
-(BOOL)pocketTouchesExpected;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(BOOL)disableTapToWake;
-(void)setSuspendProximitySensor:(BOOL)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(BOOL)suspendProximitySensor;
-(void)invalidateForSource:(long long)arg1 ;
-(NSString *)reason;
-(long long)source;
-(void)setSuspendMultitouch:(BOOL)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)suspendMultitouch;
-(NSString *)description;
-(void)setHIDInterface:(SBHIDInterface *)arg1 ;
-(void)setPocketTouchesExpected:(BOOL)arg1 ;
-(SBHIDInterface *)HIDInterface;
@end

