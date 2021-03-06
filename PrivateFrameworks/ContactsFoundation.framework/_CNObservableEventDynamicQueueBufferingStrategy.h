/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy {

	CNQueue* _queue;

}

@property (nonatomic,readonly) CNQueue * queue;              //@synthesize queue=_queue - In the implementation block
-(id)allEvents;
-(id)initWithQueue:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(CNQueue *)queue;
-(BOOL)isSequenceTerminated;
@end

