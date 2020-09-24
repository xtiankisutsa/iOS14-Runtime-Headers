/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOrderedSet, NSString, NSMutableSet;

@interface _NACListeningModesRecord : NSObject {

	NSOrderedSet* _availableListeningModes;
	NSString* _currentListeningMode;
	NSMutableSet* _observers;

}

@property (nonatomic,retain) NSOrderedSet * availableListeningModes;              //@synthesize availableListeningModes=_availableListeningModes - In the implementation block
@property (nonatomic,retain) NSString * currentListeningMode;                     //@synthesize currentListeningMode=_currentListeningMode - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                            //@synthesize observers=_observers - In the implementation block
-(NSMutableSet *)observers;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(void)setAvailableListeningModes:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)availableListeningModes;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(NSString *)arg1 ;
@end
