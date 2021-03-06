/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIInteractionProgress, UIGestureRecognizer;

@interface SBWorkspaceInteractionContext : NSObject {

	UIInteractionProgress* _interactionProgress;
	UIGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,readonly) UIInteractionProgress * interactionProgress;              //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizer;                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
-(UIInteractionProgress *)interactionProgress;
-(UIGestureRecognizer *)gestureRecognizer;
-(id)initWithInteractionProgress:(id)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
@end

