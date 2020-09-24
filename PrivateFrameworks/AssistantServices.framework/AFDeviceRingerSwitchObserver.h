/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AFNotifyObserver, NSHashTable, NSString;

@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	AFNotifyObserver* _notifyObserver;
	NSHashTable* _listeners;
	BOOL _isActive;

}

@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedObserver;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)_updateStateWithNotifyState:(unsigned long long)arg1 ;
-(void)addListener:(id)arg1 ;
-(id)init;
-(long long)state;
-(void)removeListener:(id)arg1 ;
@end
