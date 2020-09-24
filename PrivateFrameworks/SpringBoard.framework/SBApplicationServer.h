/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@protocol SBApplicationServerMiscDelegate, SBApplicationServerHarmonyDelegate, SBApplicationServerShortcutDelegate, SBApplicationServerMultiwindowDelegate;
@interface SBApplicationServer : FBSServiceFacility {

	id<SBApplicationServerMiscDelegate> _miscDelegate;
	id<SBApplicationServerHarmonyDelegate> _harmonyDelegate;
	id<SBApplicationServerShortcutDelegate> _shortcutDelegate;
	id<SBApplicationServerMultiwindowDelegate> _multiwindowDelegate;

}

@property (assign,nonatomic,__weak) id<SBApplicationServerMiscDelegate> miscDelegate;                            //@synthesize miscDelegate=_miscDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBApplicationServerHarmonyDelegate> harmonyDelegate;                      //@synthesize harmonyDelegate=_harmonyDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBApplicationServerShortcutDelegate> shortcutDelegate;                    //@synthesize shortcutDelegate=_shortcutDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBApplicationServerMultiwindowDelegate> multiwindowDelegate;              //@synthesize multiwindowDelegate=_multiwindowDelegate - In the implementation block
+(id)sharedInstance;
-(id<SBApplicationServerHarmonyDelegate>)harmonyDelegate;
-(id<SBApplicationServerShortcutDelegate>)shortcutDelegate;
-(id<SBApplicationServerMiscDelegate>)miscDelegate;
-(id<SBApplicationServerMultiwindowDelegate>)multiwindowDelegate;
-(void)dealloc;
-(void)setMiscDelegate:(id<SBApplicationServerMiscDelegate>)arg1 ;
-(void)setMultiwindowDelegate:(id<SBApplicationServerMultiwindowDelegate>)arg1 ;
-(void)setShortcutDelegate:(id<SBApplicationServerShortcutDelegate>)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)setHarmonyDelegate:(id<SBApplicationServerHarmonyDelegate>)arg1 ;
@end
